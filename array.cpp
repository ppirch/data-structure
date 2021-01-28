#include <iostream>

using namespace std;

int main()
{
    // Array ดึงค่ามาแสดง index
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr[0] << "\n";

    for (int i = 0; i < 5; ++i)
    {
        if (arr[i] == 3)
        {
            cout << i << "\n";
        }
    }
    
    return 0;
}