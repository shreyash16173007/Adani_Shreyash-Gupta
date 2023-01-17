#include <bits/stdc++.h>

using namespace std;

int main(){

    int rows,colm; 
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of column"<<endl;
    cin>>colm;
    int arr_2D[rows][colm];

    for (int i=0; i<rows; i++)
        for (int j=0; j<colm; j++)
            arr_2D[i][j] = 1 + (rand() % 100); 

    cout << "Random generated 2D-Array :" << endl;

    for (int i=0; i<rows; i++){
        for (int j=0; j<colm; j++)
            cout << arr_2D[i][j] << " ";
        cout << endl;
    }

    return 0;   
}