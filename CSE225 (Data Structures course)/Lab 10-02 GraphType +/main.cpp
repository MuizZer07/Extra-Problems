#include <iostream>
#include <fstream>
#include <queue>
#include <stack>

#include "GraphType.h"

using namespace std;
template<class VertexType>
void DepthFirstSearch(GraphType<VertexType>& graph, VertexType startVertex, VertexType endVertex);

template<class VertexType>
void BreadthFirstSearch(GraphType<VertexType>& graph, VertexType startVertex, VertexType endVertex);
int main()
{
    ifstream in("cities.txt");
    ifstream input("route.txt");
    ofstream out("output.txt");
    GraphType<string> g;
    queue<string> q;
    queue<string> q1;
    string line;

    if(in.is_open())
    {
        while(in >> line)
        {
            g.AddVertex(line);
        }
    }
    else cout << "Unable to open the file." << endl;
    if(input.is_open())
    {
        while(input >> line)
        {
            string city1 = line;
            input >> line;
            string city2 = line;
            int weight;
            input >> weight;
            g.AddEdge(city1, city2, weight);
        }
    }
    else cout << "Unable to open the file." << endl;
    g.GetToVertices("Dallas", q );
    g.GetToVertices("Chicago",q);
    g.GetToVertices("Austin", q);

    out << "Out degree of Dallas and Chicago: "<< q.size() << endl;

    g.GetToVertices("Denver", q1 );
    out << "degree of Chicago: "<< q1.size() << endl;

    if(g.IsEdge("Denver", "Dallas"))
    out << "There is an edge between Washington and Atlanta" << endl;

    else out << "There is no edge between Washington and Atlanta" << endl;

    string d= "Austin";
    string w = "Washington";

    string a = "Denver";
    queue<int> e;



    DepthFirstSearch(g, d, w);
    cout << endl;
    BreadthFirstSearch(g,d,w);
    return 0;
}

template<class VertexType>
void DepthFirstSearch(GraphType<VertexType>& graph,VertexType startVertex, VertexType endVertex)
{
    stack<VertexType> stk;
    queue<VertexType> vertexQ;

    bool found = false;
    VertexType vertex;
    VertexType item;
    int distance = 0;

    graph.ClearMarks();
    stk.push(startVertex);
    do
    {
        vertex = stk.top(); stk.pop();
        if(vertex == endVertex)
        {
            cout << vertex << " " << endl;
            found = true;
        }
        else
        {
            if(!graph.IsMarked(vertex))
            {
                graph.MarkVertex(vertex);
                cout << vertex << " ";
                graph.GetToVertices(vertex, vertexQ);

                while(!vertexQ.empty())
                {
                    item = vertexQ.front(); vertexQ.pop();

                    if(!graph.IsMarked(item))
                    {
                        stk.push(item);
                    }
                }
            }
        }
    }
    while(!stk.empty() && !found);
    if(!found) cout << "path not found" << endl;
    }


template<class VertexType>
void BreadthFirstSearch(GraphType<VertexType>& graph,VertexType startVertex, VertexType endVertex)
{
    queue<VertexType> Q;
    queue<VertexType> vertexQ;

    bool found = false;
    VertexType vertex;
    VertexType item;

    graph.ClearMarks();
    Q.push(startVertex);
    do
    {
        vertex = Q.front(); Q.pop();
        if(vertex == endVertex)
        {
            cout << vertex << " " << endl;
            found = true;
        }
        else
        {
            if(!graph.IsMarked(vertex))
            {
                graph.MarkVertex(vertex);
                cout << vertex << " ";
                graph.GetToVertices(vertex, vertexQ);

                while(!vertexQ.empty())
                {
                    item = vertexQ.front(); vertexQ.pop();
                    if(!graph.IsMarked(item)) Q.push(item);
                }
            }
        }
    }
    while(!Q.empty() && !found);
    if(!found) cout << "path not found" << endl;
    }


