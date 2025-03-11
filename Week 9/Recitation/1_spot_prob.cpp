#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream my_file("visitors.txt"); 
    string full_line;
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int vis[5] = {0, 0, 0, 0, 0}; 
    int i = 0;
    int traffic = 0;
    int j = 0;

    while (getline(my_file, full_line))
    {
        for(int i = 0; i < static_cast<int>(full_line.length()); i+=1) 
        {
            if(full_line[i] == ' ' && i < static_cast<int>(full_line.length())-1)
            {
                vis[i]++;
            }
            if(full_line[i] == ',') 
            {
                vis[i]++;
            }
        }
        if (vis[i] < traffic) 
        {
            traffic = vis[i];
            j = i;
        }
        i++;
    }
    cout << days[j] << " is the busiest day of the week at the mueseum." << endl;

    return 0;
}
