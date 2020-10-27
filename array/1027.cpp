#include <iostream>

using namespace std;

void dump(int array[], int array_2D[][5])
{
    for (int x = 0; x <= 24; x++)
    {
        cout << "array[" << x+1 << "]" << "=" << array[x] << endl;
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            cout << "array_2D[" << i+1 << "][" << j+1 << "]" << "=" << array_2D[i][j] << endl;
        }
    }
}
int main(int argc, char** argv)
{
    int array[25];
    int array_2D[5][5];
    int n = 0;
    for (int x = 0; x <= 24; x++)
    {
        array[x] = x+1;
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            array_2D[i][j] = array[n];
            n++;
        }
    }
    dump(array, array_2D);
    return 0;
}

