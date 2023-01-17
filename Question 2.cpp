#include <bits/stdc++.h>
using namespace std;
int c;
bool sort_col(const vector<int>& vecto1, const vector<int>& vecto2)
{
	return vecto1[c] < vecto2[c];
}


int main()
{
     int rows,colm; 
    cout<<"Enter number of rows"<<endl;
    cin>>rows;
    cout<<"Enter number of Column"<<endl;
    cin>>colm;
    cout<<"Column Index no"<<endl;
    cin>>c;
    vector<vector<int>> arr_2D(rows,vector<int>(colm,0));

    for (int i=0; i<rows; i++)
        for (int j=0; j<colm; j++)
            arr_2D[i][j] = (rand() % 100); 

    cout << "Random generated 2D-Array :" << endl;

    for (int i=0; i<rows; i++){
        for (int j=0; j<colm; j++)
            cout << arr_2D[i][j] << " ";
        cout << endl;
    }
	sort(arr_2D.begin(), arr_2D.end(), sort_col);
	cout << "The 2D Array after sorting is:\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <colm; j++)
			cout << arr_2D[i][j] << " ";
		cout << endl;
	}
	return 0;
}