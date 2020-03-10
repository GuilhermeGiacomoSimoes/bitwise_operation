#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int shift_to_rigth(int x);
int shift_to_left(int x);
int AND(int x, int y);
int OR(int x, int y);
int XOR(int x, int y);
int NOT(int x);

int main() {
    int choice;

    do{
        cout << "=== choose an option ===" << endl;
        cout << "1) operator >>" << endl;    
        cout << "2) operator <<" << endl;    
        cout << "3) operator &" << endl;    
        cout << "4) operator |" << endl;
        cout << "5) operator ^" << endl;
        cout << "6) operator ~" << endl;
        cout << "0) EXIT" << endl;    
        cout << "-----------------------" << endl;
        cin >> choice;

        if(choice == 1){
            int x;
            cout << "x: ";
            cin >> x;
            cout << " ==== RESULT ===== " << endl; 
            cout << x << " >> 1 = " << shift_to_rigth(x) << endl;
            cout << " ================= " << endl;
        }

        else if (choice == 2){
            int x;
            cout << "x: ";
            cin >> x;
            cout << " ==== RESULT ===== " << endl;
            cout << x << " << 1 = " << shift_to_left(x) << endl;    
            cout << " ================= " << endl;
        }

        else if (choice == 3){
            int x;
            cout << "x: ";
            cin >> x;
            
            int y;
            cout << "y: ";
            cin >> y;
            cout << " ==== RESULT ===== " << endl;
            cout << x << " & " << y << ": " << AND(x, y) << endl;
            cout << " ================= " << endl;
        }

        else if (choice == 4){
            int x;
            cout << "x: ";
            cin >> x;
            
            int y;
            cout << "y: ";
            cin >> y;
            cout << " ==== RESULT ===== " << endl;
            cout << x << " | " << y << ": " << OR(x, y) << endl;
            cout << " ================= " << endl;
        }

        else if (choice == 5){
            int x;
            cout << "x: ";
            cin >> x;
            
            int y;
            cout << "y: ";
            cin >> y;
            cout << " ==== RESULT ===== " << endl;
            cout << x << " ^ " << y << ": " << XOR(x, y) << endl;
            cout << " ================= " << endl;
        }

        else if (choice == 6){
            int x;
            cout << "x: ";
            cin >> x;
            cout << " ==== RESULT ===== " << endl;
            cout << "~" << x << ": " << NOT(x) << endl;
            cout << " ================= " << endl;
        }
    }while (choice != 0);
}

int shift_to_rigth(int x){
    //This operator shift one bit to rigth.
    //For example: if x == 8 decimal, then i conclude that x == 1000 binary,
    //so if move 1 bit to the rigth, i have x == 100 binary or x == 4 decimal.
    return x >> 1; 
}

int shift_to_left(int x){
    //This operator shift one bit to left.
    //For example: if x == 4 decimal, then i conclude that x == 100 binary,
    //so if move 1 bit to the left, i have x == 1000 binary or x == 4 decimal.
    return x << 1;
}

int AND(int x, int y){
    //The operator & (and) performs an AND operation with each bit fo the number.
    //For example: 11 & 10 = 10 binary, then return the decimal number 2.
    //The bit only assumes a value of 1 if thw two compared values are 1.
    return x & y;
}

int OR(int x, int y){
    //The operator | (or) performs an OR operation with each bit to the number.
    //For example: 11 & 10 = 11 binary, then return the decimal number 3.
    //The bit only assumes a value of 0 if the two compared values are 0.
    return x | y;
}

int XOR(int x, int y) {
    //The operator ^ (exclusive or) return 1 when the bits are different.
    //For example: 1001 ^ 1111 = 0110 binary, then return the decimal number 6
    return x^y;
}

int NOT(int x){
    //The operator ~ (not) inverts the sinal and adds -1
    //For example: 5 = -6
    return ~x;
}