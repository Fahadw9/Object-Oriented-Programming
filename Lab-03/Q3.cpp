#include<iostream>
using namespace std;

char** AllocateMemory(int& rows, int& cols)
{
	char** matrix = new char* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new char[cols];
	}
	return matrix;
}

void InputMatrix(char** matrix, const int rows, const int cols) {
	for (int i = 0; i < rows; i++) {
		cout << "Enter elements for row " << i + 1 << endl;
		for (int j = 0; j < cols; j++)	{
			cin >> matrix[i][j];
		}
		cout << endl;
	}
}

void DisplayMatrix(char** matrix, const int& rows, const int& cols) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

char** seperator(char** matrix, int& rows, int& cols) {
	char** arrays = new char* [4];
	for (int i = 0; i < 4; i++)
	{
		arrays[i] = new char[10];
	}

	int alphabets = 0, num = 0, extras = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if ((matrix[i][j] >= 'A' && matrix[i][j] <= 'Z') || (matrix[i][j] >= 'a' && matrix[i][j] <= 'z'))
			{
				arrays[0][alphabets] = matrix[i][j];
				alphabets++;
			}
			else if (matrix[i][j] >= '0' && matrix[i][j] <= '9')
			{
				arrays[1][num] = matrix[i][j];
				num++;
			}
			else
			{
				arrays[2][extras] = matrix[i][j];
				extras++;
			}
		}
		cout << endl;
	}

	arrays[3][0] = alphabets;
	arrays[3][1] = num;
	arrays[3][2] = extras;

	arrays[0][alphabets] = '\0';
	arrays[1][num] = '\0';
	arrays[2][extras] = '\0';

	return arrays;
}


void sortArray(char** arrays, int& aplha, int& num, int& spchar)
{
	char ch;

	//bubble sort
	for (int i = 0; i < (aplha - 1); i++)
	{
		for (int j = 0; j < (aplha - i - 1); j++)
		{
			if (arrays[0][j] > arrays[0][j + 1])
			{
				ch = arrays[0][j];
				arrays[0][j] = arrays[0][j + 1];
				arrays[0][j + 1] = ch;
			}
		}
	}

	for (int i = 0; i < (num - 1); i++)
	{
		for (int j = 0; j < (num - i - 1); j++)
		{
			if (arrays[1][j] > arrays[1][j + 1])
			{
				ch = arrays[1][j];
				arrays[1][j] = arrays[1][j + 1];
				arrays[1][j + 1] = ch;
			}
		}
	}
	
	for (int i = 0; i < (spchar - 1); i++)
	{
		for (int j = 0; j < (spchar - i - 1); j++)
		{
			if (arrays[2][j] > arrays[2][j + 1])
			{
				ch = arrays[2][j];
				arrays[2][j] = arrays[2][j + 1];
				arrays[2][j + 1] = ch;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
			cout << "alphabets = ";
		else if (i == 1)
			cout << "numbers = ";
		else
			cout << "specialchar = ";
		for (int j = 0; arrays[i][j] != '\0'; j++)
		{
			cout << arrays[i][j] << " ";
		}
		cout << endl;
	}

}

void DeallocateMemory(char** a, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] a[i];
	}

	delete[] a;
}

int main() {
	int rows, cols;

	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter columns: ";
	cin >> cols;

	char** matrix = AllocateMemory(rows, cols);
	InputMatrix(matrix , rows, cols);
	DisplayMatrix(matrix, rows, cols);
	char** p = seperator(matrix, rows, cols);

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
			cout << "alphabets = ";
		else if (i == 1)
			cout << "numbers = ";
		else
			cout << "specialchar = ";
		for (int j = 0; p[i][j] != '\0'; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

	int alpha = int(p[3][0]), num = int(p[3][1]), spchar = int(p[3][2]);
	
	cout <<endl<< "Sorted arrays"<<endl;

	sortArray(p, alpha, num, spchar);

	DeallocateMemory(matrix, rows);
	DeallocateMemory(p, 4);
	system("pause");
}