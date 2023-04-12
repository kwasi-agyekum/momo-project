#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    string pin = "0000";
    int numAttempts = 0;
    int option;

    
    
       while(true) {// Authentication
        string enteredPin;
        cout << "Enter MOMO Pin: ";
        cin >> enteredPin;
        if (enteredPin!= pin) {
            numAttempts++;
            if (numAttempts >= 3) {
                cout << "Too many wrong attempts. Exiting." << endl;
                return 0; }
                
            cout << "Incorrect PIN. Please try again." << endl;  continue;}
            
      numAttempts = 0; // Reset wrong attempts counter
        
         // Menu
        cout << "Select an option:" << endl;
       cout << "1. Reset pin" << endl;
        cout << "2. Check balance" << endl;
       cout << "3. Send money" << endl;
        cout<<"4. Pay Utility bills and other fees"<<endl;
        cout<< "5. Help" <<endl;
        cout <<"6. About"<<endl;
       
        cout << "7. Exit" << endl;
         cin>>option;
        
        //invalid option: (option 7 and above)
         if( option>=8){cout<<"Invalid option Input. Select from option 1 to 7"<<endl;
        cout << "1. Reset PIN" << endl;
        cout << "2. Check balance" << endl;
       cout << "3. Send money" << endl;
       cout<<"4. Pay Utility bills and other fees"<<endl;
        cout<< "5. Help" <<endl;
        cout <<"6. About"<<endl;
        
        cout << "7. Exit" << endl;
       
        cin >>option;}
        
        
        // Option 1: Reset PIN
        if (option ==1){
      string EnteredPin;
      cout<<"Enter current pin"<<endl;
      cin >>EnteredPin;
      if(EnteredPin!=pin){cout<<"Wrong pin input. Exiting."<<endl; return 0;}
      if(EnteredPin==pin){cout<<"Enter New Pin"<<endl;
      cin>>EnteredPin;
      cout<<"Your pin has been successfully resetted."<<endl; return 0;}}
      
      //Option 2: Check balance
      string enteredPIN;
      if(option ==2){
     cout<<"Enter Pin to continue: ";
     cin>>enteredPIN;
     if(enteredPIN==pin){cout<<"Fee charged is Ghs 0.00. " <<endl; cout<<"Dear Customer your current balance is Ghs "<<balance<<endl;return 0;}
     if(enteredPIN!=pin){cout<<"You have entered a wrong pin."<<endl; cout<<"\"Try again.\""<<endl; cout<<"Exiting."<<endl; return 0;}}
      
      //Option 3: Send Money
      int choice;
      string Enteredpin, number,reference;
      float amount;
      if(option==3){cout<<"Enter receipient number: ";
      cin>>number;
      cout<<"Enter amount: "; 
      cin>>amount;
      if(amount>balance){cout<<"Insufficient balance to continue transaction."<<endl; return 0;} cout<<"Enter reference: ";
      cin>>reference;
      cout<<"Enter Pin to proceed: ";
      cin>>Enteredpin;
      
   if (Enteredpin==pin){cout<<"Press 1 to continue your transaction or 2 to exit"<<endl;}
   if(Enteredpin!=pin){cout<<"Wrong pin input. Exiting"<<endl; return 0;}
      cin>>choice;
      if (choice==2){cout<<"Transaction failed. Exiting."<<endl; return 0;}
    
      if (choice==1){cout<< "Transaction Successful."<<endl;
      cout<<"You have successfully transferred Ghs "<<amount<< " to "<<number<< ", with reference: "<<reference<<"."<<endl;
      
      cout<<"Your current balance is Ghs " <<balance-amount<<"."<<endl;
      cout<<"TRANSACTION WAS FREE SINCE WE ARE OFFERING FREE TRANSACTIONS THIS YEAR AS A PROMO."<<endl; 
      cout<<"Thank you for using MTN MOMO."<<endl;return 0;}}
      
      //option 4: Pay Utility bills and other fees
      if(option==4){cout<<"This service is currently unavailable."<<endl; cout<<"Thank you for using MTN MOMO."<<endl;return 0;}
      
      //option 5: Help
      if (option==5){cout<<"Contact MTN main office on 0202381700. THANK YOU FOR USING MTN MOMO."<<endl; return 0;}
      
     //option 6: About
      if(option==6){cout<<"This program was written by MTN in the year 2004. It was designed to aid in easy transaction of money and payment of bills via phones."<<endl;
      cout<<"More services are yet to be added."<<endl; 
      cout<<"\"MTN, EVERYWHERE YOU GO!\""<<endl;return 0;}
      
      
      
      //option 7: Exit
      if (option==7){cout<<"\"Thank you for using MTN MOMO. Exiting\""<<endl; return 0;}
      
 } 
       
}
