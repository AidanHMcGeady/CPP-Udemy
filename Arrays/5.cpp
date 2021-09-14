#include <iostream>

using namespace std;

main()
{
    int a;

    int array[4]; //Type name[array size];

    array[0] = 10;
    array[1] = 5;
    array[2] = 460;
    array[3] = 1692;

    cout << "array value 1 = " << array[0] << ", address: " << &array[0] << endl;
    cout << "array value 2 = " << array[1] << ", address: " << &array[1] << endl;
    cout << "array value 3 = " << array[2] << ", address: " << &array[2] << endl;
    cout << "array value 4 = " << array[3] << ", address: " << &array[3] << endl;

    //Multidimensional Arrays

    int biArray[3][4] = {0};


    cout << biArray[0][0] << endl;
}
