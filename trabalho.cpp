//Calcule as raizes de uma equaчуo de 2А grau, considerando a existencia de raizes complexas e reais/
#include <iostream>
#include <cmath> //biblioteca para usar a funcao sqrt
#include <iomanip> //biblioteca para usar a funcao setprecision (dimiuir as casas decimais)
#include <complex> //biblioteca para usar complexos
using namespace std;
int main()
{
    double a, b, c, delta, x1, x2, z, im1, im2;
    complex<double> x, y;

        cout << "Digite os coeficientes da equacao: " << endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
        delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
        {
            z = sqrt(-delta);
            x1 = (-b + z) / (2 * a);
            x2 = (-b - z) / (2 * a);
            im1 = z/(2*a);
            im2 = -im1;
            cout << "As raizes complexas sao: "<< x1 <<"i e "<<x2<<"i " << endl;
            cout<<endl;
            cout<<endl;

        }
        else if (delta == 0)
        {
            cout << fixed << setprecision(2);
            x1 = -b / (2 * a);
            cout << "Existe apenas uma raiz real: " << x1 << endl;
            cout<<endl;
            cout<<endl;
        }
        else
        {
            cout << fixed << setprecision(2);
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Existem duas raizes reais: " << x1 << " e " << x2 << endl;
            cout<<endl;
            cout<<endl;
        }
    }