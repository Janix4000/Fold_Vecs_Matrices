#pragma once

template<size_t D, typename T>
struct Mat {
	T cells[D][D];
public:
	T[D] operator[](size_t row) {
		return cells[row];
	}
};