#include <iostream>
using namespace std;

int main() {
    int n1, m1, n2, m2;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> n1 >> m1;
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> n2 >> m2;

    if(m1 != n2) {
        cout << "Matrix multiplication not possible\n";
        return 0;
    }

    int a[n1][m1], b[n2][m2], c[n1][m2] = {0};
    cout << "Enter the elements of first matrix: ";
    for(int i = 0; i < n1; ++i)
        for(int j = 0; j < m1; ++j)
            cin >> a[i][j];

    cout << "Enter the elements of second matrix: ";
    for(int i = 0; i < n2; ++i)
        for(int j = 0; j < m2; ++j)
            cin >> b[i][j];

    for(int i = 0; i < n1; ++i)
        for(int j = 0; j < m2; ++j)
            for(int k = 0; k < m1; ++k)
                c[i][j] += a[i][k] * b[k][j];

    cout << "The resultant matrix is: \n";
    for(int i = 0; i < n1; ++i) {
        for(int j = 0; j < m2; ++j)
            cout << c[i][j] << " ";
        cout << endl;
    }

    return 0;
}
