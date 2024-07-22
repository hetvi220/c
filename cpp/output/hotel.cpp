#include <iostream>
using namespace std;

struct hotel{
    int number;
    string food;
    int amount;
    
};

struct order{
    hotel item;
    int quantity;
    
};


     hotel menu[13]={
         {1.   "MASALA DHOSA          - ",            220},
         {2.   "IDLI SAMBHAR          - ",            170},
         {3.   "GRILL SANDWICH        -   ",          110},
         {4.   "VEG CRISPY            -",             160},
         {5.   "BARBEQUE              - ",            160},
         {6.   "PIZZA                 - ",            350},
         {7.   "MOMOS                 -  ",           450},
         {8.   "DAHI WADA             - ",            160},
         {9.   "MANCHURIAN            -",              80},
         {10.  "FRAKIE                -  ",            90},
         {11.  "LASANGNA              -",              90},
         {12.  "AVOCADO TOAST         -",             140},
         {13.  "SPAGHETTI             -",             110}
     };
     
     hotel DESERT[25]={
         {14. "BROWNIE                - ",          60},
         {15. "CAKES                  - ",                40}, 
         {16. "CUPCAKES               - ",      70},
         {17. "CHEESECAKE             - ",      80},
         {18. "COOKIES                - ",       500}
     };
     
     hotel drinks[25]={
         {19, " COOLERS ",             35},
         {20, "THUMBS UP ",         30},
         {21, "SPRITE",                35},
         {22, "MOJITO",                95},
         {23, "SHAKES",                 150},
         {24, "COCO",       80},
         {25, "FRAPEES",                130}
     };


















































































































































































     
order orders[50];
int orderCount = 0;
     
void displayMenu(hotel items[], int size, const string& title) {
    cout << "-----------------------------" << title << "-----------------------------\n";
    cout << "    Number   " << "     Item      " << "                     Price     " << endl;
    for (int i = 0; i < 25; ++i) {
        if (items[i].number != 0) {
            cout <<"\t"<<items[i].number<<"\t"<<items[i].food <<"\t\t\t"<<items[i].amount << endl;
        }
    }
    cout << "-----------------------------------------------------------------------\n";
}    

void displayAllMenus() {
    displayMenu(menu, 13, "Main menu");
    displayMenu(DESERT, 5, "Dessert");
    displayMenu(drinks, 7, "Drinks");
}

hotel* findMenuItem(int number) {
    for (int i = 0; i < 13; ++i)
        if (menu[i].number == number)
            return &menu[i];
    for (int i = 0; i < 5; ++i)
        if (DESERT[i].number == number)
            return &DESERT[i];
    for (int i = 0; i < 7; ++i)
        if (drinks[i].number == number)
            return &drinks[i];  
            return 0;

}
void orderDish() {
    int number, quantity;
    cout << "Enter Dish Number: ";
    cin >> number;
    hotel* item = findMenuItem(number);
    if (item) {
        cout << "Enter Qty: ";
        cin >> quantity;
        orders[orderCount++] = {*item, quantity};
        
        cout << "Your order has been confirmed\n\n\n";
    } else {
        cout << "BYE...\n\n\n";
    }
}

void currentStatus() {
    cout << "NO\tName\t\t\tqty\tprice\tAmount\n";
    int total=0;
    int amount;
     
    for (int i = 0; i < orderCount; ++i) {
        double amount = orders[i].item.amount * orders[i].quantity;
        cout << i + 1 << "\t" << orders[i].item.food << "\t\t" << orders[i].quantity << "\t" << orders[i].item.amount << "\t" << amount << endl;
        total += amount;
    }
    
}
    void makeBill() {
    cout << "--------------------------------------------------------------------------------\n";
    cout << "                                Amrut Restaurant\n";
    cout << "                      156, sai apartment, punagam road, surat\n";
    cout << "                             Mobile NO : 7863074845\n";
    cout << "--------------------------------------------------------------------------------\n";
    cout << " Date : 22/07/2024\n Tiem : 09:00\n";
    cout << "--------------------------------------------------------------------------------\n";
    cout << "NO\tName\t\t\tqty\tprice\tAmount\n";
    cout << "--------------------------------------------------------------------------------\n\n";
    
    int total=0;

    
    for (int i = 0; i < orderCount; ++i) {
        double amount = orders[i].item.amount * orders[i].quantity;
        cout << i + 1 << "\t" << orders[i].item.food << "\t\t" << orders[i].quantity << "\t" << orders[i].item.amount << "\t" << amount << endl;
        total += amount;
    }
    
    int gst = total * 0.18;
    cout << "--------------------------------------------------------------------------------\n";
    cout << "                  GST  18%\t\t\t\t" << gst << endl;
    cout << "--------------------------------------------------------------------------------\n";
    cout << "                  Total\t\t\t\t" << total + gst << endl;
    cout << "--------------------------------------------------------------------------------\n";
    cout << "                           Thank you for your Visit\n";
    cout << "--------------------------------------------------------------------------------\n\n";
    }    


int main()
{
    int choice;
    while (true) {
        cout << " 1   MENU 1\n";
        cout << "2    ORDER\n";
        cout << "3    ADD ITEMS \n";
        cout << "4    DELETE ITEMS\n";
        cout << "5    DISPLAY BILL \n";
        cout << "6    EXIT \n";
        cout << "***************************************************************************************************************************************\n";
        cout << "\n\nEnter Your Choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                displayAllMenus();
                break;
            case 2:
                orderDish();
                break;
            case 3:
                currentStatus();
                break;
            case 4:
                makeBill();
                break;
            case 0:
                cout<<"\nTHANK YOU FOR COMING..\n";
            default:
                cout << "Invalid Choice\n";
        }
    }
    return 0;
}#include <iostream>
using namespace std;

struct hotel{
    int number;
    string food;
    int amount;
    
};

struct order{
    hotel item;
    int quantity;
    
};


     hotel menu[25]={
         {1,   "Paneer Pakoda",       220},
         {2,   "Palak Paneer",        170},
         {3,   "Veg Burger",          110},
         {4,   "Grill Sandwich",      160},
         {5,   "Veg Fry rice",        160},
         {6,   "Veg Biryani",         350},
         {7,   "Mix Veg Pizzah",      450},
         {8,   "Jeera Rice",          160},
         {9,   "Potato Cheeps",       80},
         {10,  "Masala Dosa",         90},
         {11,  "spicy veg Momos",               90},
         {12,  "chhese Franki",              140},
         {13,  "Sweet Corn",          110}
     };
     
     hotel DESERT[25]={
         {14, "Gulab Jamun",          60},
         {15, "Malai Kulfi",                40},  
         {16, "Vanil Ice-Cream",      70},
         {17, "Choco Ice-Cream",      80},
         {18, "Chocolate Cake",       500}
     };
     
     hotel drinks[25]={
         {19, "Thums-Up",             35},
         {20, "Mountain duo",         30},
         {21, "Mango shake",                35},
         {22, "cold coco",                95},
         {23, "vanilla shake",                 150},
         {24, "Chocolate Milk",       80},
         {25, "kitkat coco",                130}
     };
     
order orders[50];
int orderCount = 0;
     
void displayMenu(hotel items[], int size, const string& title) {
    cout << "-----------------------------" << title << "-----------------------------\n";
    cout << "    Number   " << "     Item      " << "                     Price     " << endl;
    for (int i = 0; i < 25; ++i) {
        if (items[i].number != 0) {
            cout <<"\t"<<items[i].number<<"\t"<<items[i].food <<"\t\t\t"<<items[i].amount << endl;
        }
    }
    cout << "-----------------------------------------------------------------------\n";
}    

void displayAllMenus() {
    displayMenu(menu, 13, "Main menu");
    displayMenu(DESERT, 5, "Dessert");
    displayMenu(drinks, 7, "Drinks");
}

hotel*