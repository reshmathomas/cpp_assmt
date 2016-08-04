#include<iostream>
#include<string.h>

using namespace std;

#ifdef ABC
	#include "fn1.cpp"
    #include "fn2.cpp"
    namespace nspace = abc;
#else
    #include "namespace_def.cpp"
    namespace nspace = def;
#endif
int main()
{
nspace::fn1();
  
  return 0;
}
