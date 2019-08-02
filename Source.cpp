#include "Vec.hpp"
#include "Mat.hpp"
#include "TransformMat.hpp"

int main() {
	Vec3 v3 = {12.f, 13.f, 14.f};
	Vec2 v2 = v3;
	Vec3 v = v2;
	//v2 = static_cast<Vec2>(v3);
	return 0;
}