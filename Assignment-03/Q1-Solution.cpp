#include <iostream>
using namespace std;

class Matrix
{
private:
	int rows;
	int cols;
	int** matrix;
public:
	Matrix();
	Matrix(int x, int y);
	Matrix(const Matrix& matrix_b);
	void setrows(int x);
	void setcols(int x);
	void setmatrix(int** x, int row2, int col2);

	int getrows();
	int getcols();
	int** getmatrix();

	void tempprint();

	void MatrixAddition(Matrix& obj);
	Matrix MatrixMultiplication(Matrix& obj);
	Matrix MatrixTranspose(Matrix& obj);
	~Matrix();
};

Matrix::Matrix()
{
	//by default it has 5 rows and 5 columns
	rows = 5;
	cols = 5;
	matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

Matrix::Matrix(int r, int c)
{
	// first parameter is the number of rows and second is for columns
	rows = r;
	cols = c;
	matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

Matrix::Matrix(const Matrix& matrix_b)
{
	cout << "Copy Constructor Called" << endl;
	this->rows = matrix_b.rows;
	this->cols = matrix_b.cols;
	this->matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		this->matrix[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			this->matrix[i][j] = matrix_b.matrix[i][j];
		}
	}
}

void Matrix::setrows(int x) {
	rows = x;
}

void Matrix::setcols(int x) {
	cols = x;
}

void Matrix::setmatrix(int **x, int row2, int col2) {
	rows = row2;
	cols = col2;
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			this->matrix[i][j] = x[i][j];
		}
	}
}

int Matrix::getrows() {
	return rows;
}

int Matrix::getcols() {
	return cols;
}

int** Matrix::getmatrix() {
	return matrix;
}

void Matrix::MatrixAddition(Matrix& obj) {
	this->rows = rows;
	if (this->rows == obj.rows && this->cols == obj.cols) {
		for (int i = 0; i < this->rows; i++)
		{
			for (int j = 0; j < this->cols; j++)
			{
				this->matrix[i][j] += obj.matrix[i][j];
			}
		}
	}
	else {
		cout << "The two matrices have different number of rows and columns"<<endl<<endl;
	}
}

Matrix Matrix::MatrixMultiplication(Matrix& obj) {
	Matrix tempmatrix(this->rows, obj.cols);
	tempmatrix.setrows(this->rows);
	tempmatrix.setcols(obj.cols);
	int** mult;
	mult = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		mult[i] = new int[obj.cols];
	}

	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < obj.cols; ++j)
		{
			mult[i][j] = 0;
		}

	if (this->rows == obj.cols) {
		for (int i = 0; i < rows; ++i)
			for (int j = 0; j < obj.cols; ++j)
				for (int k = 0; k < cols; ++k)
				{
					mult[i][j] += matrix[i][k] * obj.matrix[k][j];
				}
	}
	tempmatrix.setmatrix(mult, this->rows, obj.cols);
	return tempmatrix;
}

Matrix Matrix::MatrixTranspose(Matrix& obj) {
	Matrix tempmatrix(obj.cols, obj.rows);
	for (int i = 0; i < obj.rows; i++)
	{
		for (int j = 0; j < obj.cols; j++) {
			tempmatrix.matrix[j][i] = obj.matrix[i][j];
		}
	}
	return tempmatrix;
}

void Matrix::tempprint() {
	for (int i = 0; i < this->rows; i++)
	{
		for (int j = 0; j < this->cols; j++)
		{
			cout << this->matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

Matrix::~Matrix()
{
	for(int i = 0; i < rows; i++){
		delete[] matrix[i];
	}
	delete[] matrix;
}

int main(){

	int** arr = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		arr[i] = new int[3];
	}
	int count = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = count;
			count++;
		}
	}

	//Matrices declarations
	Matrix m1;
	m1.setrows(3);
	m1.setcols(3);
	m1.setmatrix(arr,3,3);
	cout << "Matrix 1 is: " << endl;
	m1.tempprint();

	Matrix m2;
	m2.setrows(3);
	m2.setcols(3);
	m2.setmatrix(arr, 3, 3);
	cout << "Matrix 2 is: " << endl;
	m2.tempprint();

	int** newarr = new int* [2];
	for (int i = 0; i < 2; i++)
	{
		newarr[i] = new int[3];
	}
	int newcount = 1;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			newarr[i][j] = newcount;
			newcount++;
		}
	}

	Matrix multiply;
	multiply.setrows(2);
	multiply.setcols(3);
	multiply.setmatrix(newarr, 2, 3);
	cout << "Matrix 3 is: " << endl;
	multiply.tempprint();

	//Addition
	m1.MatrixAddition(m2);
	cout << "Matrices 1 and 2 after addition are: " << endl;
	m1.tempprint();

	m1.setmatrix(arr, 3, 3);
	//Multiplication
	Matrix resultant = m1.MatrixMultiplication(multiply);
	cout << "Matrices 1 and 3 after multiplication are: " << endl;
	resultant.tempprint();

	//Transpose
	Matrix resultant2 = m1.MatrixTranspose(m1);
	cout << "Matrix 1 after transpose is: " << endl;
	resultant2.tempprint();

	Matrix resultant3 = multiply.MatrixTranspose(multiply);
	cout << "Matrix 3 after transpose is: " << endl;
	resultant3.tempprint();

	system("pause");
	return 0;
}