// projectEx.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


void fillArray(int* mass, int length);
float findAverage(int* mass, int length);
int findFirst(int* mass, int length);
void printArray(int* mass, int length);

int main()
{
    int *data;
    int n;
    cout << "length: ";
    cin >> n;
    data = new int[n];

    fillArray(data, n);
    printArray(data, n);
    cout << endl <<  findFirst(data, n);

    delete[]data;
    return 0;
}

void fillArray(int *mass, int length)
{
    
    
    
    for (int i = 0; i < length; i++)
    {
        mass[i] = rand();
    }
}

void printArray(int* mass, int length)
{

    for (int i = 0; i < length; i++)
    {
        cout << mass[i] << " ";
    }
}

int findFirst(int* mass, int length)
{
    float average = findAverage(mass, length);
    for (int i = 0; i < length; i++)
    {
        if (mass[i] > average)
        {
            return i;
        }
    }

    return -1;

}

float findAverage(int* mass, int length)
{
    float result = 0;
    for (int i = 0; i < length; i++)
    {
        result += mass[i];
    }

    cout << endl<< "Average: " << result / length;

    return result / length;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
