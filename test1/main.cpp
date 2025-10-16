#include <iostream>
using namespace std;

int main() {
    // 列印直角三角形
    cout << "直角三角形 (星號圖形):" << endl;
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // 列印九九乘法表
    cout << "九九乘法表:" << endl;
    int i, j;
    i = 1;
    while (i <= 9) {
        cout << i;
        j = 1;
        while (j <= 9) {
            cout << " " << j << "=" << i * j << "\t";
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}
