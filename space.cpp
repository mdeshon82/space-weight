#include <iostream>

int main() {
  
  double earth_weight;
  int planet_input;
  double planet;
  double fight_weight;
  
  std::cout << "What is your earth weight: ";
  std::cin >> earth_weight;
  std::cout << "\nWhat enter the number of the planet you are fighting on: ";
  std::cin >> planet_input;

  switch (planet_input) {
    case 1:
      planet = 0.38;
      break;
    case 2:
      planet = 0.91;
      break;
    case 3:
      planet = 0.38;
      break;
    case 4:
      planet = 2.34;
      break;
    case 5:
      planet = 1.06;
      break;
    case 6:
      planet = 0.92;
      break;
    case 7:
      planet = 1.19;
      break;

  }
  
  fight_weight = earth_weight * planet;
  std::cout << "\nYour fight weight is " << fight_weight << "\n";


  



  
  


  
  
  
  
  
  
  
  
  
  
}