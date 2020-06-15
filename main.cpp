#include <iostream>
#include "Boat.h"
using namespace std;

bool solve_from(Boat &boat){
   if(boat.solved()){
     boat.print();
     return true;
    }
    else{
        for(int i = 0; i < boat.item_count; i++){
          if(boat.placeable(boat.item_list[i])){
           boat.add(boat.item_list[i]);
           bool solved = solve_from(boat);
           boat.remove(boat.item_list[i]);
           if(solved)
         return true;
    }
   }
     return false;
}
}

 int main(){
      Boat boat;
      int size;
      cout << "Enter weight capacity: " << endl;
      cin >> boat.max_weight;
      cout << "How many valuable items: " << endl;
      cin >> size;
      boat.item_count = size;
      for(int i = 0; i < size; i++)
        {
         Item item;
         cout << "Enter weight of item " << i+1<< ": " << endl;
         cin  >> item.weight;
         cout << "Enter value of item " << i+1 << ": " << endl;
         cin  >> item.value;
         boat.item_list[i] = item;
        }
        solve_from(boat);
 }