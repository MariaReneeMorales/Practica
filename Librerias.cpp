#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
 
int main()
{
    int lnPass, lnCount;
    srand(time(NULL));
    
    for(lnCount = 1; lnCount <= 6; lnCount++)
    {
        lnPass = 1 + rand() % (11 - 1);
        cout << lnPass << " ";
    }
    
    return 0;
}
