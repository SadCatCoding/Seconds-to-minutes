//This code is made by SadCat

#include<iostream>
using std::cout; 
using std::cin;
int main()
 {

     int seconds;
     cout << "Introduce the number of seconds:\n";
     cin >> seconds;
     if(seconds == 60){
        cout << "60 seconds are 1 minute\n"; //this is for 60 seconds only
     }
     else if(seconds > 60 && seconds < 3600){
        cout << "There are approximately " << seconds/60 << " minutes in " << seconds << " seconds.\n"; //this is for minutes
     }
     else if(seconds == 3600){
        cout << "3600 seconds are 1 hour\n "; //this is for 3600 seconds only
     }
     else if(seconds >= 3600 && seconds < 86400){
        cout << "There are approximately " << seconds/3600 << " hours in " << seconds << " seconds.\n"; //this is for hours
     }
     else if(seconds == 86400){
        cout << "86400 seconds are 1 day\n"; //this is for 86400 seconds only
     }
     else if(seconds >= 86400){
        cout << "There are approximately " << seconds/86400 << " days in " << seconds << " seconds.\n"; // this is for days
     }
     return 0; //you can delete this line if you want
 }