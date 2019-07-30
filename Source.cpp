#include "Vec.hpp"
#include "Mat.hpp"

int main() {
	Vec<2, float> vec2(12.f, 13.f);
	vec2.rotate(3.1415f / 2.f);
	auto v = vec2;
	std::cout << v.x << ' ' << v.y << '\n';
	v.normalize();
	auto c = vec2.getNormalized();
	std::cout << c.x << ' ' << c.y << '\n';

	Mat2 A = { 11.f, 3.f,
				7.f, 11.f };
	Mat2 B = { 2.f, 3.f,
				1.f, 0.f };

	auto C = A * B;
	return 0;
}