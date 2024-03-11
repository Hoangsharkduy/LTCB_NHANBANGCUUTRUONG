#include <iostream>
using namespace std;

int main()
{
    int sonhap;
    cout << "Nhap so n: "; cin >> sonhap;
    for (int n = 1; n <= 10; n++) {
        cout << sonhap << "x" << n << " = " << n * sonhap << endl;
    }
    return 0;

}