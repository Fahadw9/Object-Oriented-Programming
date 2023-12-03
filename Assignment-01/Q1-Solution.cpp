#include <iostream>
using namespace std;

void fillarr(int** arr, int rowcount, int colcount){
	for (int i = 0; i < rowcount; i++)
	{
		cout<<"Enter values for the "<<rowcount<<" row: ";
		for (int j = 0; j < colcount; j++)
		{
			cin>>arr[i][j];
		}
	}
}

int colcount(int** arr, int row, int col){
	int elements = 0;
	for (int i = 0; i < col; i++)
	{
		if(arr[row][i] != 0)
			elements++;
	}
	return elements;
}

int main(){
	int rows, columns;
	cout<<"Enter total number of rows";
	cin>>rows;

	cout<<"Enter total number of columns";
	cin>>columns;

	int** sourcearr = new int* [rows];

	for( int i = 0; i < rows; ++i )
	{
		sourcearr[i]  = new int[ columns ];
	}

	fillarr(sourcearr, rows, columns);
	int** destinationarr = new int* [rows];
	for(int i = 0; i < rows; ++i )
	{
		destinationarr[i]  = new int[ columns ];
	}

	int k = 0, l = 0;
	for (int i = 0; i < rows; i++)
	{
		l=0;
		destinationarr[i]  = new int[colcount(sourcearr,i,columns)];
		for (int j = 0; j < columns; j++)
		{
			if(sourcearr[i][j] != 0){
				destinationarr[k][l] = sourcearr[i][j];
				l++;
			}
		}
		k++;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j<colcount(sourcearr,i,columns); j++)
		{
			cout<<destinationarr[i][j]<<" ";
		}
		delete[] destinationarr[i];
		delete[] sourcearr[i];
		cout<<endl;
	}

	delete[] destinationarr;
	delete[] sourcearr;

	system("pause");
}