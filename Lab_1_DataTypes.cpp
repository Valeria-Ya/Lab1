// Lab_1_DataTypes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "1." << endl;
    cout << "Yagubyan Valeria Alexandrovna 201-331\n";

    cout << '2.' << endl;
    cout << "min int = " << INT_MIN;
    cout << "  max int = " << INT_MAX;
    cout<<" size of int = " << 2 << endl;
    cout << "max unsigned = " << UINT_MAX;
    cout<<"  min unsigned = "<< 0;
    cout << "  size of unsigned = " << 2 << endl;
    cout << "min short = " << SHRT_MIN;
    cout << "  max short = " << SHRT_MAX;
    cout << "  size of short = "<< 2 <<endl;
    cout << "max unsigned short = " << USHRT_MAX << endl;
    cout << "min unsigned short = " << 0;
    cout << "  size of unsigned short = "<< 2 << endl;
    cout << "min long = " << LONG_MIN;
    cout << "  max long = " << LONG_MAX;
    cout << "  size of long = " << 4 <<endl;
    cout << "min long long = " << LLONG_MIN;
    cout << "  max long long = " << LLONG_MAX;
    cout << "  size of long long = " << 8 << endl;
    //cout << " min double = " << ;
    //cout << " max double = " << ;
    cout << "size of double = " << 8 << endl;
    cout << "min char = " << CHAR_MIN;
    cout << "  max char = " << CHAR_MAX;
    cout << "  size of char = " << 1 << endl;
    cout << "min bool = " << 0;
    cout << "  max bool = " << 1;
    cout << "  size of bool =  не определен точно" << endl;


    cout << "3." << endl;
    int number;
    cout << "Введите число:";
    cin >> number;
    cout << "В бинарном виде: " << bitset <16> (number) << endl;
    cout << "В шестнадцатиричном виде:" << hex << number << endl;
    cout << "double " << double(number) << endl;
    cout << "bool " << (number > 0) << endl;
    cout << "char " << char (number) << endl;

    cout << "4." << endl;
    int a, b, x;
    cout << "Введите коэффициенты: a и b\n";
    cin >> a;
    cin >> b;
    cout << a << "*x="<< b << endl;
    x = b / a;
    cout << "x=" << b << "/" << a << endl;
    cout << "x=" << x<< endl;
    cout << "Ответ:" << x << endl;

    cout << "5." << endl;
    cout << "Введите кординаты отрезка на прямой " << endl;
    int w, y, middle;
    cin >> w;
    cin >> y;
    middle = (w + y) / 2;
    cout << "Середина отрезка находится в точке с координатой " << middle << endl;


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
