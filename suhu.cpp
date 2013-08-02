//Program konversi suhu dari Celcius ke Kelvin, Fahrenheit, dan Reamur
//Aji Setyobudi email: falseter@gmail.com
//Terimakasih kepada www.organisasi.org yang menyediakan rumus

#include <iostream>
using namespace std;

main()
{

    double celcius;
    double fahrenheit;
    double kelvin;
    double rheamur;

    cout << "Program Konverter Suhu Dari Celcius ke Fahrenheit dan Kelvin" <<endl; //judul

    cout << "Masukkan suhu dalam derajat Celcius = ";
    cin >> celcius; //input nilai celcius

    kelvin = celcius + 273.15;
    fahrenheit = celcius * 1.8 + 32;
    rheamur = celcius * 0.8;

    cout << endl;//Pembatas

    cout << "Suhu dalam Fahrenheit = " << fahrenheit << endl; //skala Fahrenheit

    cout << endl;//Pembatas

    cout << "Suhu dalam Kelvin = " << kelvin <<endl; //skala Kelvin

    cout << endl; //Pembatas

    cout << "Suhu dalam Rheamur = " << rheamur <<endl; //Skala Rheamur

    return 0;
}
