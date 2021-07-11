#include <iostream>

using namespace std;

int main()
{
    int n,m,a=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> m;
        if (m/2%2==1)
            a++;
    }
    cout << a << endl;
    return 0;
}
