
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{

        vector<vector <int> >x;

        x.resize(13);
        for(int row=1; row<x.size();row++)
        {
                x[row].resize(13);
        }
        for(int row=1; row<13; row++)
             {
                for(int column=1; column < x[row].size(); column++)
                {
                        cout<<row*column<<" ";
                }
                cout<<endl;
             }
}
