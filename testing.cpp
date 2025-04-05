#include<iostream>

using namespace std;

struct Item{
    string name;
    double price;
};

class CashRegister {
public:
   void view() const;
   void purchase(Item);
   void displayTotal() const;
 
private:
   int item_count = 0;
   Item items[100];
};


void CashRegister::view() const
{
   for (int i = 0; i < item_count; i++)
   {
      cout<<items[i].name<<" "<<items[i].price<<endl;
   }
}

void CashRegister::displayTotal() const
{
   double total = 0;
   for(int i = 0; i < item_count; i++){
      total += items[i].price;
   }
   cout<<total<<endl;
}

void CashRegister::purchase(Item i){
   items[item_count] = i;
   item_count++;
}

int main()
{
   CashRegister reg1;
   Item item = {"cookies", 4.0};
   reg1.purchase(item);
   reg1.purchase({"ice cream", 5.40});
   reg1.displayTotal();
   return 0;
}