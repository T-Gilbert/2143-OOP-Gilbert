/*****************************************************************************
*  Author:           Trevor Gilbert
*  Email:            gilbert.t16@gmail.com
*  Label:            P03
*  Title:            Attribute Class
*  Course:           CMPS 2143
*  Semester:         Spring 2023
* 
*  Description:
*        This program will generate Graphviz "dot" syntax to visualize data
*        structure output. It will use linked list format, assigning
*        attributes to each node in the structure
*      
*  Files:            
*       main.cpp          : Driver program
*       GilbertList.dot   : Output file (which pastes in Graphviz)
*****************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

/*****************************************************************************
* For Graphviz linked list, all attributes must be specified. This includes
* direction of flow, numbering/naming, shape, color, pointer style, 
* 1 or 2 direction flow, and edge type/presence
******************************************************************************/

class Attribute 
{
  public:
    Attribute() 
    {
      m_TrevGraph = "TG";
      m_rankdir = "LR";
      m_nodeShape = "record";
      m_nodeColor = "blue";  
    }

    void setGraphName(const std::string& name) 
    {
      m_TrevGraph = name;
    }

    void setRankdir(const std::string& dir) 
    {
      m_rankdir = dir;
    }

    void setNodeShape(const std::string& shape) 
    {
      m_nodeShape = shape;
    }

    void setNodeColor(const std::string& color) 
    {
      m_nodeColor = color;
    }

    void addEdge(int from, int to) 
    {
      m_edges.push_back(std::make_pair(from, to));
    }

    void addNode(int from, int to) 
    {
      m_edges.push_back(std::make_pair(from, to));
    }
   
    static void gdgen_begin_page()   
    {
      char *bgcolor_str = NULL, *truecolor_str = NULL;
      bool truecolor_p = true;  
    }                               

    void generate() 
    {
      std::cout << "digraph " << m_TrevGraph << " {" << std::endl;
      std::cout << "\trankdir=" << m_rankdir << ";" << std::endl;
      std::cout << "\tnode [shape=record" << m_nodeShape << "];" << std::endl;      
      std::cout << "\trecord [color=blue" << m_nodeColor << "];" << std::endl;      
      std::cout << "\tTrevor [shape=octagon,color=blue];" << std::endl;

      for (auto& edge : m_edges) 
      {
        std::cout << "\t" << edge.first << " -> " << edge.second << ";" << std::endl;
      }
        std::cout << "}" << std::endl;
    }

private:
    std::string m_TrevGraph;
    std::string m_rankdir;
    std::string m_nodeShape;
    std::string m_nodeColor;
    std::vector<std::pair<int, int>> m_edges;
};

/*****************************************************************************
*Include error message in case output file cannot be found
*
*Outfile will transfer directly (copy/paste) to Graphviz generator. 
*Any attribute not identified will be set to default, which is blank/white
*box format and numbered from 1 on up
*****************************************************************************/

int main() 
{
  ofstream outfile("GilbertList.dot");
  if (!outfile) 
  {
    cerr << "Error opening file!" << endl;
    return 1;
  }
  {    
    outfile << "Trevor Gilbert" << endl;
    outfile << "9 Mar 2023" << endl;
    outfile << "Spring 2143" << endl;
    outfile << endl;
  }
    outfile << "digraph GilbertList {" << endl;
    outfile << "  rankdir=LR;" << endl;
    outfile << "  node [shape=record,color=blue];" << endl;
    outfile << "  1 [label=\"{ <data> 1 | <next>  }\"]" << endl;
    outfile << "  2 [label=\"{ <data> 2 | <next>  }\"];" << endl;
    outfile << "  3 [label=\"{ <data> 3 | <next>  }\"];" << endl;
    outfile << "  4 [label=\"{ <data> 4 | <next>  }\"];" << endl;
    outfile << "  5 [label=\"{ <data> 5 | <next>  }\"];" << endl;
    outfile << "  Chutes_and_Ladders_Gilbert [shape=octagon,color=red];" << endl;
    outfile << "  1:next:3 -> 2:data [arrowhead=diamond, arrowtail=dot, color=orange, dir=both, tailclip=false];" << endl;
    outfile << "  2:next:3 -> 3:data [arrowhead=inv, arrowtail=crow, color=green, dir=both, tailclip=true];" << endl;
    outfile << "  3:next:3 -> 4:data [arrowhead=normal, arrowtail=curve, color=yellow, dir=both, tailclip=false];" << endl;
    outfile << "  4:next:3 -> 5:data [arrowhead=curve, arrowtail=icurve, color=red, dir=both, tailclip=true];" << endl;
    outfile << "  5:next:3 -> 2:data [arrowhead=vee, arrowtail=box, color=black, dir=both, tailclip=false];" << endl;
    outfile << "  5:next:3 -> 1:data [arrowhead=vee, arrowtail=box, color=black, dir=both, tailclip=false];" << endl;
    outfile << "}" << endl;
    outfile.close();
    cout << "Output file created successfully." << endl;
    return 0;
}
