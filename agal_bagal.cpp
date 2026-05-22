#include <iostream>
using namespace std;

inline void swap_val(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void agalBagalSort(int a[], int n)
{
    bool changed;

    do {
        changed = false;

        for(int i = 1; i < n - 1; i++)
        {
            // Peak
            if(a[i] > a[i-1] && a[i] > a[i+1])
            {
                if(a[i-1] > a[i+1])
                    swap_val(a[i-1], a[i+1]);

                swap_val(a[i], a[i+1]);
                changed = true;
            }

            // Valley
            else if(a[i] < a[i-1] && a[i] < a[i+1])
            {
                if(a[i-1] > a[i+1])
                    swap_val(a[i-1], a[i+1]);

                swap_val(a[i], a[i-1]);
                changed = true;
            }

            // Mixed
            else if(a[i] < a[i-1] && a[i] > a[i+1])
            {
                if(a[i-1] > a[i+1])
                {
                    swap_val(a[i-1], a[i+1]);
                    changed = true;
                }
            }
        }

    } while(changed);
}

int main()
{
    int a[] = {23123,43,4,24,345,44,41,1,5,23,52,54,254,345,345,235,63,6356,3463,566,34,353,563,436,23,75,5465,2,1};
    int n = sizeof(a)/sizeof(a[0]);

    agalBagalSort(a, n);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}