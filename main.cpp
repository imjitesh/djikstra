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

struct history
{
  int len, prev;
};

int main()
{
  int N; 
  std::cin>>N;
  graph data(N);
  
  for (int i=0; i<N*N; i++)//read the adj. matrix
    std::cin>>data[i];
  //std::cout<<data(1, 1)<<std::endl<<data(2, 2);
  
  int i, sn, en, visited_size = 0;//as soon as visited size==N, break
  //answer is a pair of {len, previous}
 
  history answer[N];
  //visited is a BitArray. If vertex 4,2 are visited then
  //visited == {0,0,1,0,1,...}
  //visited means fully checked (compare with wikipedia algo)
  int visited[N];
  //initialising
  for (i=0; i<N; i++)
    {
      answer[i].len = -1; //equivalent to infinity
      visited[i] = 0;
    }
  std::cin>>sn>>en;
  //start the algo!
  answer[i] = 0;
  int curn=sn, new_len;
  while(visited_size <= N)
    {
      for (int i=0; i<N; i++)
	{
	  if (!visited[i] && data(curn, i) >= 0)
	    //!visited and edge exists
	    {
	      new_len = answer[curn].len + data(curn, i);
	      if (new_len < answer[i].len || answer[i] == -1)
		//new_len < old_len OR old_len == infinity
		{
		  answer[i].len = new_len;
		  answer[i].prev = curn;
		}
	      //else do nothing
	    }
	}
      visited_size++;
      visited[curn] = 1;
      //select new node
    }
  return 0;
}
