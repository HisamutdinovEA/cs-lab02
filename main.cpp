#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    cout << "Enter A and B: " << endl;
    int a, b;
    cin >> a >> b;
    cout <<  "Sum = " << a+b << '\n'
         <<  "Div = " << a-b << '\n'
         <<  "A*B" << a*b << '\n'
         << "A/B" << a/b << '\n'
         << "Max = " <<max(a,b)<< '\n'
         << "Min = " << min(a,b) << '\n';


    return 0;
}
