#include "Math/Radian.h"
#include "Math/Degree.h"
#include <iomanip>

int main()
{
    Math::Degree<float> rad2(3.25);
    
    //Convert Math::Radian to Math::Degree
    std::cout << rad2 << " " << Math::Degree<float>(rad2) << std::endl;


    return 0;
}
