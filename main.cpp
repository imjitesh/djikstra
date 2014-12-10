#include<iostream>
#include<vector>
//not using namespace std!!

class graph
{
  /*holds adjacency matrix as vector
  provides interface to access 1d vector as a 2d vector
  and much more
  */
  std::vector<int> gmat;
  const int N;
public:
  graph(int n): N(n)
  {
    gmat = std::vector<int>(N*N);
  }
  int& operator()(unsigned int r, unsigned int c)
  {
    return gmat[(r-1)*N+c-1];
  }
  int& operator[](unsigned int key)
  {	
    return gmat[key];
  }
};

int main()
{
  int N; 
  std::cin>>N;//no. of vertices

  graph data(N);

  for (int i=0; i<N*N; i++)//read the adj. matrix
    std::cin>>data[i];

  //std::cout<<data(1, 1)<<std::endl<<data(2, 2);
  int sn, en;
  std::cin>>sn>>en;//read start and end node

  //implement visitedSet as BITarray <char> type
  //how to store path info?
  return 0;
}
  
