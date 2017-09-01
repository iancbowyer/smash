#include <vector>
#include <iostream>

int smash(int a, int b);

int main(){
  return smash(47293,110237);
}

int smash(int a, int b){
  std::vector<int> a_vec;
  std::vector<int> b_vec;

  while (a != 0 || b != 0){
    a_vec.push_back(a%10);
    a /= 10;
    b_vec.push_back(b%10);
    b /= 10;
  }

  for (int x = 0 ; x < a_vec.size(); ++x){
    //std::cout << a_vec[x] << " " << b_vec[x] << std::endl;
    if ((a_vec[x] * b_vec[x]) % 2 == 0){
      
    }
    else{

    }
  }
  
  return 1;
}
