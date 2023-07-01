#include <iostream> 
#include <Windows.h> 
#include <string> 
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;
void Min_Max(vector <vector <int> > a, int n, int m) {
    int max = 0;
    max = a[0][0];
    int min = 0;
    min = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] >= max)
            {
                max = a[i][j];
            }
            if (a[i][j] <= min) {
                min = a[i][j];
            }
        }
    }
    cout << "Mаксимальный элемент вектора: " << max;
    cout << "\nМинимальный элемент вектора: " << min<<"\n";
}
double Sr(vector <vector <int> > a, int n, int m) {
    double q;
    int o = n * m;
    int sum = 0;
    for (unsigned int i = 0; i < n; ++i) {
        
        for (unsigned int j = 0; j < m; ++j)
            sum += a[i][j];
       
    }
    q = (double)sum / o;
    cout << "Среднее арифметическое ";
    return  q;
}
void Matrista(vector <vector <int> > a, int n, int m) {
    cout << "Готовая матрица:\n";
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cout << a[i][j]<<" ";
        }
        cout << "\n";
    }
}
void Full_matrix(vector <vector <int> > a, int n, int m) {
    srand(time(0));
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            a[i][j] = rand() % 100;
        }
    }
    Matrista(a, n, m);
    Min_Max(a,n,m);
    cout << Sr(a, n, m);
}
int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    int n;
    int m;
    cout << "Введите количество строк и столбцов\n";
    cin >> n >> m;
    vector <vector<int> > a(n, vector<int>(m));
    Full_matrix(a, n, m);
   
}


