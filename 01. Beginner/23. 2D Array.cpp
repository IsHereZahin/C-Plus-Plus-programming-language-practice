#include <iostream>

using namespace std;

int main() {
    int A[3][4] = { 
                    {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12}
                  };

    // cout << A[0][0] << " " << A[1][0];
    cout << "2D Array Print:" << endl;

    for (int row = 0; row < 3; row++)
    {
      for (int col = 0; col < 4; col++)
      {
        cout << " " << A[row][col];
      }
      cout << endl;
    }
    
    return 0;
}