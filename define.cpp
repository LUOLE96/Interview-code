#include <iostream>
#include <cstdio>
#define TO_STRING_MACRO(x) #x
#define A_TESTING_MACRO(n) printf("a testing macro with a int argument n = %d!\n",n)
#define SHOW_MACRO_CONTENT(m) TO_STRING_MACRO(m)

using namespace std;

int main(int argc,char **argv)
{
    int a = 10;
    int *b = &a;

    cout << TO_STRING_MACRO(a) << endl;
    cout << TO_STRING_MACRO(10 + 20) << endl;
    cout << A_TESTING_MACRO(10 + 20)<<endl;
    cout << TO_STRING_MACRO(A_TESTING_MACRO(a))<<endl;
    cout << SHOW_MACRO_CONTENT(A_TESTING_MACRO(a))<<endl;
    cout << SHOW_MACRO_CONTENT(A_TESTING_MACRO(*b))<<endl;
    *b = 100;
    A_TESTING_MACRO(*b);
    return 0;
}