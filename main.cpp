#include<iostream>
#include<vector>
//not using namespace std!!
class graph{
  std::vector<int> gmat;
  const int N;
public:
  graph(int n): N(n){
    gmat = std::vector<int>(N*N);
  }
  int& operator()(unsigned int r, unsigned int c){
    return gmat[(r-1)*N+c-1];
  }
  int& operator[](unsigned int key){
    return gmat[key];
  }
};

int main(){
  int N; std::cin>>N;
  graph data(N);
  for (int i=0; i<N*N; i++)
    std::cin>>data[i];
  //std::cout<<data(1, 1)<<std::endl<<data(2, 2);
  int sn, en;
  char visited[N];//lame comment
  return 0;
}
  
