#include <iostream>

using namespace std;

int main() {
    int mat[5][5];
    for(int i = 0; i < 5; ++i)
        for(int j = 0; j < 5; ++j)
            mat[i][j] = i;
    for(int j = 0 ; j < 5 ; j++) {
        if (j % 2 == 0)
            for(int i = 0; i < 5; i++)
                cout << mat[j][i] <<" "; 
        else
            for(int i = 5 - 1; i >= 0 ; i--)
                cout << mat[j][i] <<" ";
        cout << "\n";
    }
    for(int i = 0; i < 5; ++i)
        for(int j = 0; j < 5; ++j)
            cout << mat[j][i] << " \n"[j == 4];
    return 0;
}
