#include <vector>
#include <iostream>

int smash(int a, int b);

int main(){
  return smash(47293,110237);
}

int smash(int a, int b){
  std::vector<int> a_vec;
  std::vector<int> b_vec;

  while (a != 0){
    a_vec.push_back(a%10);
    a /= 10;
  }

  while(b != 0){
    b_vec.push_back(b%10);
    b /= 10;
  }

  for (auto it = a_vec.begin(); it < a_vec.end(); ++it){
    std::cout << *it << std::endl;
  }
  
  return 1;
}
