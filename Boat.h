#include "main.h"
#include <iostream>
using namespace std;


class Boat{
    public:
     Boat(){
      current_weight = 0;
      total_value = 0;
    };
       Item item_list[10];
       int max_weight;
       int item_count;
       int current_weight;
       int total_value;
       bool placeable(Item item){
        Item min = item_list[0];
        for(int i = 0; i < item_count; i++){
         if(item_list[i].weight < min.weight){
          min = item_list[i];
          cout<<"minimum"<<min.weight<<endl;
         }
    }
      cout<<"current"<<current_weight;

       if(current_weight += min.weight > max_weight)
       
       return false;
       else{
         return true;
       }
    };
       void print(){
       for(int i = 0; i < item_count; i++)
       cout << item_list[i].count << " Item " << i+1 << endl;
       cout << "Total Weight: " << current_weight << endl;
       cout << "Total Value: "  << total_value << endl;
      };
       void add(Item &item){
         current_weight+=item.weight;
         total_value+=item.value;
         item.count++;
       //  cout << current_weight <<"test " << total_value << endl;
      };
       void remove(Item &item){
         current_weight-=item.weight;
         total_value-=item.value;
         item.count--;
        // cout << current_weight <<" " << total_value << endl;
      };
      bool solved(){
       if(current_weight == max_weight)
       return true;
       else{
         return false;
        }
      };
    };