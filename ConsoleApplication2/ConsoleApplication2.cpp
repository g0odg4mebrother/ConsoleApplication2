#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");//руссификатор

    int choice;

    cout << "какое задание хотите проверить ";
    cin >> choice;


    if (choice == 1)
    {


        //переменые
        int x;
        int z;
        int y;

        cout << "введите число x\n";
        cin >> x;
        cout << "введите число z\n";
        cin >> z;
        cout << "введите число y\n";
        cin >> y;

        //решения
        cout << "otvet " << max(x + y + z / 2, x * y * z) + 1;

    }



    else if (choice == 2)
    {


        double x1, y1;
        double x2, y2;
        double x3, y3;
        int area_1, area_2, area_3;
        int  area_triangle;

        cout << "введите число x1, y1\n";
        cin >> x1;
        cout << "";
        cin >> y1;
        cout << "введите число x2, y2\n";
        cin >> x2;
        cout << "";
        cin >> y2;
        cout << "введите число x3, y3\n";
        cin >> x3;
        cout << "";
        cin >> y3;

        area_1 = 0.5 * abs(x1 * y2 - x2 * y1);
        area_2 = 0.5 * abs(x1 * y3 - x3 * y1);
        area_3 = 0.5 * abs(x2 * y3 - x3 * y2);
        area_triangle = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));




        cout << "площадь первого треугольника  " << area_1 << endl;
        cout << "площадь вторoго треугольника  " << area_2 << endl;
        cout << "площадь третьего треугольника  " << area_3 << endl;
        cout << "площадь главного треугольника  " << area_triangle << endl;
    }

    else if (choice == 3)
    {
        struct Function {
            double operator()(double x) const {
                return (x >= -2 && x < 2) ? x * x : 4;
            }
        };

        {
            Function f;
            double x;
            std::cout << "Введите значение x: ";
            std::cin >> x;
            std::cout << "f(" << x << ") = " << f(x) << std::endl;
            return 0;
        }

    }


    else
    {
        cout << "error";
    }



}