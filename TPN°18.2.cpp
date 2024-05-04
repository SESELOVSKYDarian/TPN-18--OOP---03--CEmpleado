#include <iostream>
#include <string>
using namespace std;

class CEmpleado 
{
	private:
    	string nombre;
    	int anioIngreso;
    	int salario;
    	string direccion;

	public:
    	CEmpleado(string, int, int, string);
    	string setNombre(string nom);
    	int setAnioIngreso(int anio);
    	int setSalario(int sal);
    	string setDireccion(string dir);
    	string getNombre();
    	int getAnioIngreso();
    	string getDireccion();
    	int AniosAntiguedad();
    	void VivirEnWallStreet();
};

CEmpleado::CEmpleado(string nom, int anio, int sal, string dir)
{
	nombre = setNombre(nom);
	anioIngreso = setAnioIngreso(anio);
	salario = setSalario(sal);
	direccion = setDireccion(dir);
}
string CEmpleado::setNombre(string nom)
{
	nombre = nom;
	return nombre;
}
int CEmpleado::setAnioIngreso(int anio)
{
	anioIngreso = anio;
	return anioIngreso;
}
int CEmpleado::setSalario(int sal)
{
	salario = sal;
	return salario;
}
string CEmpleado::setDireccion(string dir)
{
	direccion = dir;
	return direccion;
}

string CEmpleado::getNombre()
{
    return nombre;
}

int CEmpleado::getAnioIngreso()
{
    return anioIngreso;
}

string CEmpleado::getDireccion()
{
    return direccion;
}

int CEmpleado::AniosAntiguedad()
{
    int anio = 2024 - anioIngreso;
    return anio;
}

void CEmpleado::VivirEnWallStreet()
{
    if (direccion.find("Wall Street") != string::npos) {
        cout << "Vos vivis en la calle Wall Street" << endl;
    }
}

int main()
{
    string nombre, direccion;
    int anioIngreso, salario;
    
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);
    cout << "Ingrese el anio de ingreso: ";
    cin >> anioIngreso;
    cout << "Ingrese su salario: ";
    cin >> salario;
    cin.ignore();
    cout << "Ingrese su direccion: ";
    getline(cin, direccion);

    CEmpleado empleado(nombre, anioIngreso, salario, direccion);

    cout << "Nombre: " << empleado.getNombre() << endl;
    cout << "Anio de Ingreso: " << empleado.getAnioIngreso() << endl;
    cout << "Direccion: " << empleado.getDireccion() << endl;
    cout << "Los anios de antiguedad son: " << empleado.AniosAntiguedad() << endl;
    empleado.VivirEnWallStreet(); 

    return 0;
}