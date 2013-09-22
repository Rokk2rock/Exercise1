#ifndef __FS001__
#define __FS001__
#include "Employee.h"

class Manager{
   private:
      int totalHours;
   protected:
   public://#1
      Manager();

      void getWorkerHours(Employee* emp);

      void report();
   };
#endif