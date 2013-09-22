#include "Manager.h"
#include <iostream>

using namespace std;

Manager::Manager(){
   totalHours = 0;
}

void Manager::getWorkerHours(Employee* emp){
   cout << "Employee #" << emp->getID() << " has logged " << emp->getHours() << " hours..." << endl;
   cout << "Thanks " << emp->getName() << "!" << endl << endl;//fix getname
   totalHours += emp->getHours();
}

void Manager::report(){
   cout << "A total of " << totalHours << " have been logged by employees since the last report." << std::endl << std::endl;
   totalHours = 0;
}