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

<<<<<<< HEAD
int main()
{
  int N; 
  std::cin>>N;//no. of vertices

=======
struct history{
  int len, prev;
}

int main(){
  int N; std::cin>>N;
>>>>>>> visitedList
  graph data(N);

  for (int i=0; i<N*N; i++)//read the adj. matrix
    std::cin>>data[i];

  //std::cout<<data(1, 1)<<std::endl<<data(2, 2);
<<<<<<< HEAD
  int sn, en;
  char visited[N];
  std::cin>>sn>>en;//read start and end node
  //implement visitedSet as BITarray <char> type
  //how to store path info?
=======
  int sn, en, visited_size = 0;//as soon as visited size==N, break
  history answer[N];
  int visited[N];
  for (int i=0; i<N; i++){
    answer[i].len = -1;
    visited[i] = 0;
  }
  cin>>sn>>en;
  //start the algo!
  answer[i] = 0;
  int curn=sn, new_len;//current_node
  while(visited_size <= N){
    for (int i=0; i<N; i++){
      if (!visited[i] && data(curn, i) >= 0){
	new_len = answer[curn].len + data(curn, i);
	if (new_len < answer[i].len || answer[i] == -1){
	  answer[i].len = new_len;
	  answer[i].prev = curn;
	}
      }
    }
    visited_size++;
    visited[curn] = 1;
    //select new node
  }
    
>>>>>>> visitedList
  return 0;
}
  
