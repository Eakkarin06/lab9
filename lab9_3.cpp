#include <iostream>
using namespace std ;
int main() {
  double age , height , bounty  ;
  string character ;
  cout << "Enter your age: " ;
  cin >>age ;
  if (age<=25) {
    cout << "Enter your height: ";
    cin >> height ;
  if (height <100){
    character ="Chopper" ;
    
  }
    else if (height <180){
      character ="Usopp" ;
      
      
    }
    else{
      cout <<   "Enter your bounty: " ;
      cin >> bounty ;
      if (bounty >1100000000){
        character = "Zoro";
        
      }
      else {
        character = "Sanji";
      }
    }
    }
  else if (age<=60) {
    cout <<   "Enter your bounty: " ;
    cin >> bounty ;
    if (bounty >500000000) {
      character = "Jinbe" ;
    }
    else {
      character = "Franky" ;
    }
  
    
  }
  else {
    character = "Brook";
  }
    

  cout <<"Your character = "<< character ;

  
}