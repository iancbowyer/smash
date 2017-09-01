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

  std::vector<int> a_surv;
  std::vector<int> b_surv;

  for (int x = 0; x < a_vec.size(); ++x){
    //std::cout << a_vec[x] << " " << b_vec[x] << std::endl;
    if (a_vec[x] == b_vec[x]){
      //both survive
      a_surv.push_back(a_vec[x]);
      b_surv.push_back(b_vec[x]);
    }
    else if ((a_vec[x] * b_vec[x]) % 2 == 0){
      //even
      if (a_vec[x] > b_vec[x]){
	a_surv.push_back(a_vec[x]);
      }
      else{
	b_surv.push_back(b_vec[x]);
      }
    }
    else{
      //odd
      if (a_vec[x] > b_vec[x]){
	b_surv.push_back(b_vec[x]);
      }
      else{
	a_surv.push_back(a_vec[x]);
      }
      
    }
  }

  for (int x = 0; x < b_surv.size(); ++x){
    std::cout << b_surv[x] << std::endl;
  }
  
  return 1;
}
