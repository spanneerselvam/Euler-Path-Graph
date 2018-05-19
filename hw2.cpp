#include <iostream>
#include <fstream>
#include "graph.h"
#include <string>

using namespace std;

int main(int argc, char *argv[])
{   
    cout << "Sai Panneerselvam's homework 2 solutions!" << endl;
    ifstream is("euler1.txt");
    if (is.fail())
    {
        cout << "Can't open file!" << endl;
        return 1;
    }
    graph G;
    bool path(false);
    cout << "Graph 1: " << endl;
    is >> G;
    cout << G;
    cout << "Does Graph 1 have a eulerian path? ";
    path = G.has_eulerian_path();
    if(path == false)
	cout << "No" << endl;
    else
    {
	cout << "Yes. This is the path: ";
        vector<string> ans = G.eulerian_path();
        for(auto e: ans)
    		cout << e << " ";
	cout << endl;
		

	
    }
/*
    cout << "Does G have a eulerian cycle? "<< G.has_eulerian_cycle() << endl;
    vector<string> ans = G.eulerian_cycle();
    for(auto e: ans)
    	cout << e << endl;
*/
    return 0;
}

