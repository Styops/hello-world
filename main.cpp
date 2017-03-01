#include <iostream>



int main()
{
    int a_size = 15;
    int a[a_size] = {1, 5, 8, 45, 78, 65, 23 ,14, 74, 28, 55, 64, 87, 63, 65};

    for (int i=0; i<a_size; i++)
    {
        if (a[i] != a[a_size - 1])
        {
             std::cout << "   " <<a[i];
        }

    }

    return 0;
}
