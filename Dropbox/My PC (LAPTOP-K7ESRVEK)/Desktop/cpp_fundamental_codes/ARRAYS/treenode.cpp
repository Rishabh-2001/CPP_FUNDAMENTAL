#include<vector>
using namespace std;

template<typename T>
class treenode{
  public:
      T data;
      vector<treenode*>children;

};
