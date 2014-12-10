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
<<<<<<< HEAD
<<<<<<< HEAD
  char visited[N];//lame comment
=======
  cin>>sn>>en;//read start and end node
=======
  std::cin>>sn>>en;//read start and end node

>>>>>>> aa255b727f72d63daf39080f03c052190c46a0d6
  //implement visitedSet as BITarray <char> type
  //how to store path info?
>>>>>>> ca57092919bf56014da518f5a159828b8b97c46c
  return 0;
}
  
