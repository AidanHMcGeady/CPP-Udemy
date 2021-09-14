#include <iostream>

using namespace std;
/* Loops */

main()
{
    /*
        For (initialise variable; condition for end loop; increment/decrement towards end)
        {
            Instruction to repeat;
        }
    */

    for (int i = 0; i < 5; i++)
    {
        cout << "tasdasd" << endl;
    }

    cout << "lala" << endl;
    cout << endl;

    int array[100];

    for (int i = 0; i < 100; i++)
    {
        array[i] = i;
        cout << array[i] << endl;
    }

    cout << endl;

    //While and Do While

    int j = 0;
    const int SOA = 10;

    int arr[SOA];


    while(j < SOA)
    {
        arr[j] = 10 * j;
        cout << arr[j++] << endl;
    }

    do
    {

    } while(j)

}
