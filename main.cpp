#include <iostream>

using namespace std;

int main()
{
    // TODO
    int value, maxVal;

    for (int i=0;i<10;i++){  // initialize, condition (while this .. keep going/boundary), update 
        cin >> value;

        if (value > maxVal || i == 0)
            maxVal = value;

            
    }    
    
        cout << maxVal  << " is the max value number." << endl;
    
        
    return 0;
}
