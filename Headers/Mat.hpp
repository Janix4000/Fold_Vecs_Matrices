#pragma once
#include <array>

template<size_t D, typename T>
struct Mat {
	T cells[D][D];
public:
	/*Mat() {
		*this = MakeEmpty();
	}*/
	T* operator[](size_t row) {
		return cells[row];
	}
	const T* operator[](size_t row) const {
		return cells[row];
	}

	Mat operator*(const Mat& rhs) const {
		Mat res;
		const auto& lhs = *this;
		for (int row = 0; row < D; ++row) {
			for (int col = 0; col < D; ++col) {
				res[row][col] = T(0);
				for (int i = 0; i < D; ++i) {
					res[row][col] += lhs[row][i] * rhs[i][col];
				}
			}
		}
		return res;
	}


	static Mat MakeUnit() {
		return GetScaling(T(1));
	}

private:
	template<size_t... Is>
	static Mat MakeEmpty(std::index_sequence<Is>) {
		Mat mat;
		T* cellPtr = mat.cells;
		((cellPtr++[Is] = T(0)), ...);
	}
	static Mat MakeEmpty() {
		return MakeEmpty(std::make_index_sequence<D * D>());
	}
	template<size_t... Is>
	static Mat MakeUnit(std::index_sequence<Is>) {
		auto unit = MakeEmpty();
		((unit[Is][Is] = T(1)), ...);
		return unit;
	}
};

using Mat2 = Mat<2, float>;