#include <iostream>
#include "GraphType.h"
#include <fstream>
#include <queue>

using namespace std;

int main()
{
    ifstream cities("Cities.txt");
    ifstream route("Route.txt");
    ofstream out("output.txt");
    GraphType<string> g;
    queue<int> q;
    string line;

    if(cities.is_open())
    {
        while(cities >> line)
        {
            g.AddVertex(line);
        }

    }
    else cout << "Unable to open the file." << endl;

    if(route.is_open())
    {
        while(route >> line)
        {
           string city1, city2;
           city1 = line;
           route >> line;
           city2 = line;
           int weight;
           route >> weight;
           g.AddEdge(city1, city2, weight);
        }

    }
    else cout << "Unable to open the file." << endl;
    out << "The weight of the edges Dallas to Denver is " << g.GetWeight("Dallas","Denver") << endl;
    out << "The weight of the edges Austin to Houston is " << g.GetWeight("Austin","Houston") << endl;

    g.GetToVertices("Dallas", q);
    out << q.size() << endl;
    return 0;
}
