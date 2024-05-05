#include <algorithm>
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

//создаём массив в динамической памяти и заполняем его рандомными значениями от 0 до 100
vector <int> mas(int n) {
    vector <int> a(n);
    srand(time(0));
    for (int i = 0; i < n; i++)
        a[i] = rand()%100;
    return a;
}

void gistogram(int k) {
    vector <int> data = mas(k);//количество элементов в массиве

    int max_value = *max_element(data.begin(), data.end());//находит максимальный элемент в массиве

    for (int i = max_value; i >= 0; --i) {
        cout.width(2);
        cout << i << " | ";

        for (int j = 0; j < data.size(); ++j) {
            if (data[j] == i) {
                cout << "*";
            }
            else {
                cout << "";
            }
        }//алгоритм построения гистограммы
        cout << endl;
    }
    cout << "---------------------------------------" << endl;
    cout << "  ";

    return;
}

int main()
{
    gistogram(1000);
}
