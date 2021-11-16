#include <iostream>

using namespace std;
int SSK(int x, int y);
int main()
{
    int a,b;
    cout << "Ievadiet 2 skaitlus" << endl;
    cin >> a;
    cin >> b;
    cout << SSK(a,b)<<endl;
    return 0;
}
SSK (int d, int e)
{int f;
f = d+e;
return f;
}
