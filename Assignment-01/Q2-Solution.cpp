#include <iostream>
using namespace std;

void fillarr(int** arr, int rowcount, int colcount){
	for (int i = 0; i < rowcount; i++)
	{
		cout<<"Enter values for the "<<rowcount<<" row: ";
		for (int j = 0; j < colcount; j++)
		{
			cin>>arr[i][j];
			while (arr[i][j] != 0 && arr[i][j] != 1){
				cout<<"Please enter either 0 or 1"<<endl;
				cin>>arr[i][j];
			}
		}
	}
}

int colcount(int** arr, int row, int col){
	int elements = 0;
	for (int i = 0; i < col; i++)
	{
		if(arr[row][i] == 1)
			elements++;
	}
	return elements;
}

int main(){
	int rows,columns;
	cout<<"Enter the number of rows: ";
	cin>>rows;
	cout<<"Enter the number of columns: ";
	cin>>columns;
	int** arr = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new int[columns];
	}

	fillarr(arr,rows,columns);

	cout<<endl<<"Original Binary Array"<<endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	int** intermediatearr = new int*[rows];
	int intercount = 0;

	int** finalbinarr = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		finalbinarr[i] = new int[2];
		finalbinarr[i][1] = 1;
	}
	int onescount = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] == 1) {
				intercount++;
			}
		}
		intermediatearr[i] = new int[columns];
	}

	cout<<endl<<endl<<"Intermediate Binary Array"<<endl;
	int k=0,l=0;
	for (int i = 0; i < rows; i++)
	{
		l=0;
		onescount = 0;
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] == 1) {
				intermediatearr[k][l] = j+1;
				onescount++;
				cout<<intermediatearr[k][l]<<" ";
				l++;
			}
		}
		k++;
		finalbinarr[i][0] = onescount;
		cout<<endl;
	}

	cout<<endl<<endl<<"Final Binary Array"<<endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout<<finalbinarr[i][j]<<" ";
		}
		delete[] finalbinarr[i];
		cout<<endl;
	}
	delete[] finalbinarr;

	int** remadearr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		remadearr[i] = new int[columns];
	}
	
	int tempnum;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colcount(arr,i, columns); j++)
		{
			tempnum = intermediatearr[i][j];
			remadearr[i][tempnum - 1] = 1;
		}
	}

	cout<<endl<<endl<<"Remade Binary Array"<<endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (remadearr[i][j] != 1)
				remadearr[i][j] = 0;
			cout<<remadearr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;

	for (int i = 0; i < rows; i++)
	{
		delete[] intermediatearr[i];
	}
	delete[] intermediatearr;

	for (int i = 0; i < rows; i++)
	{
		delete[] remadearr[i];
	}
	delete[] remadearr;

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	system("pause");
}