#include <iostream>
using namespace std;
int main()
{

   int a{6};
   int b{3};
   int c{8};
   int d{9};
   int e{3};
   int f{2};
   int g{5};

   int result;

   result = a + b * c - d / e - f + g;
   // 6+24-3-2+5
   cout << "result---" << result << endl;
   result = a / b * c + d - e + f;
   // 16+9-3+5
   cout << "result---" << result << endl;
}