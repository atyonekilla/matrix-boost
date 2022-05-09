#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>
#include "boost/numeric/ublas/vector.hpp"

#include "inverse.h"

using namespace boost::numeric::ublas;
using namespace std;


void set_matrix(boost::numeric::ublas::matrix<double> a,int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "A" << "[" << i << "]" << "[" << j << "]: ";
            cin >> a(i,j);
        }
    }
    cout << "Ваша матрица A:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a(i,j) << "\t";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    // Начальная инициализация матрицы a
    int N, M;
    cout << "Введите количество строк матрицы A и B: ";
    cin >> N;
    cout << "Введите количество столбцов матрицы A и B: ";
    cin >> M;
    boost::numeric::ublas::matrix<double> a(M, N);

    set_matrix(a, M, N);
}