#include "Math/Degree.h"

int main()
{
	Math::Degree deg;
	std::cout << deg << std::endl;

	Math::Degree deg2(4);
	std::cout << deg2 * 6 << std::endl;
	return 0;
}
