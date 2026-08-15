/*
10. Dynamic Matrix Operations
Dynamically allocate two matrices of size m × n. Accept the elements of both matrices
and perform matrix addition. Display the resulting matrix and properly deallocate all
dynamically allocated memory.
Hint:
• Allocate memory for the row pointers first.
• Allocate memory for each row separately.
• For every allocated row, use delete[].
• Finally, use delete[] for the array of row pointers.
*/

#include <iostream>
using namespace std;

int main (){
    int m,n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of coloumns: ";
    cin >> n;
    int **a = new int*[m];
    int **b = new int*[m];
    int **c = new int*[m];
    for (int i= 0; i<n ; i++){
        a[i] = new int[n];
        b[i] = new int[n];
        c[i] = new int[n];
    }
    cout << "Enter element of Matrix A:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    
    cout << "Enter element of Matrix B:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];

    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    
    cout << "\nResultant Matrix (A + B):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << c[i][j] << " ";

        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        delete[] a[i];
        delete[] b[i];
        delete[] c[i];
    }

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}