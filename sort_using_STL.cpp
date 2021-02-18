#include <iostream>
#include<algorithm>   //important
//must include the header file
using namespace std;

int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(a) / sizeof(a[0]); //calculating size of array
    sort(a,a+n);//calling sort function in algorithm
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
