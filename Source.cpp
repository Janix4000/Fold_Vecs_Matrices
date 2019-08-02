#include "Vec.hpp"
#include "Mat.hpp"
#include "TransformMat.hpp"

int main() {
	Vec3 v3 = {12.f, 13.f, 14.f};
	Vec2 v2 = v3;
	Vec3 v = v2;
	v = v3;

	TMat2 tt = TMat2::Translation(v2);
	TMat2 ts = TMat2::Scaling(2.f);
	auto t = ts * tt;
	v2 = t * v2;
	return 0;
}