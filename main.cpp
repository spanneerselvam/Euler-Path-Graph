#include <iostream>
#include <fstream>
#include "graph.h"

using namespace std;

int main(int argc, char *argv[])
{   
    ifstream is1("euler1.txt");
    ifstream is2("euler2.txt");
    ifstream is3("euler3.txt");
    ifstream is4("euler4.txt");
    if (is1.fail()||is2.fail()||is3.fail()||is4.fail())
    {
        cout << "Can't open file!" << endl;
        return 1;
    }
    graph G1,G2,G3,G4;
    bool path(false);
    is1 >> G1;
    is2 >> G2;
    is3 >> G3;
    is4 >> G4;
    vector<string>ep = G1.find_euler_path();
    for (auto e: ep)
	cout << e << " ";
    cout << endl;
    ep = G2.find_euler_path();
    for (auto e: ep)
	cout << e << " ";
    cout << endl;
    ep = G3.find_euler_path();
    for (auto e: ep)
	cout << e << " ";
    cout << endl;
    ep = G4.find_euler_path();
    for (auto e: ep)
	cout << e << " ";
    cout << endl;
    return 0;
}

