#include "Vec.hpp"
#include "Mat.hpp"
#include "TransformMat.hpp"

int main() {
	Vec3 v1 = { 1.f, 13.f, 43.f };
	Vec3 v2 = { 1.f, 13.f, 43.f };
	v1 += v2;
	v1 -= v2;
	v1 *= 1.3f;
	v1 /= 1.3f;

	return 0;
}