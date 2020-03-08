#include "Math/Degree.h"

int main()
{
	Math::Degree<float> deg;
	std::cout << deg << std::endl;

	Math::Degree<float> deg2(4);
	std::cout << deg2 * 6 << std::endl;

	std::cout << static_cast<float>(deg2) << std::endl;

	Math::Degree<float> deg3;
	deg3 = Math::Degree<float>(20);
	std::cout << deg3 << std::endl;

	return 0;
}
