#include <iostream>

using namespace std;

int main() {
    int opcion;
    float num1, num2;

cout<<"BIENVENIDOS A LA CALCULADORA LEVEL \n\n";
cout<<"OPCION 1 = SUMA \n";
cout<<"OPCION 2= RESTA\n" ;
cout<<"OPCION 3= MULTIPLICACION \n";
cout<<"OPCION 4= DIVISION \n";


cout<<"ELIGE LA OPCION SEGUN L0 QUE NECESITES CALCULAR \n\n";
cin>>opcion;


    switch (opcion) {
        case 1:
        	cout<<"CALCULADORA DE SUMAS \n";
	    	cout<<"Ingresa el primer valor:\n ";
	    	cin>> num1;
	    	cout<<"Ingresa el segundo valor:\n";
	    	cin>> num2;
            cout<<"EL RESULTADO DE LA SUMA ES: " << num1 + num2 << endl;
            break;
        case 2:
        	cout<<"CALCULADORA DE RESTAS \n";
	    	cout<<"Ingresa el primer valor:\n ";
	    	cin>> num1;
	    	cout<<"Ingresa el segundo valor:\n";
	    	cin>> num2;
            cout<<"EL RESULTADO DE LA RESTA ES: " << num1 - num2 << endl;
            break;
        case 3:
        	cout<<"CALCULADORA DE MULTIPLICACIONES \n";
	    	cout<<"Ingresa el primer valor:\n ";
	    	cin>> num1;
	    	cout<<"Ingresa el segundo valor:\n";
	    	cin>> num2;
            cout<<"EL RESULTADO DE LA MULTIPLICACION ES: " << num1 * num2 << endl;
            break;
        case 4:
        	cout<<"CALCULADORA DE RESTAS \n";
	    	cout<<"Ingresa el primer valor:\n ";
	    	cin>> num1;
	    	cout<<"Ingresa el segundo valor:\n";
	    	cin>> num2;
            cout<<"EL RESULTADO DE LA DIVISION ES: " << num1 / num2 << endl;
            break;
    }

    return 0;
}

