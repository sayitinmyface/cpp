#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string filename = "fstream.txt";
    ofstream outfstream(filename);
    string data;
    if (outfstream.is_open())
    {
        outfstream << "this is a line . " << endl;
        cout << "write data to want you ! ";
        cin >> data;
        outfstream << data << endl;
        outfstream.close();
    }
    else
    {
        cout << " unalbe to open file";
    }
    ifstream infstream(filename);
    if (infstream.is_open())
    {
        while (getline(infstream,data))
        {
            infstream.close();
        }
        
    }
}