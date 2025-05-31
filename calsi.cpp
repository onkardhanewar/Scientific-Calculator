#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<bitset>
using namespace std;

// Function prototypes
void exponential(); 
void trignometric();
void logarithms();
void squareroots();
void hyperbolic();
void statistics();
void fraction();
void binary();
void airhmatic();
void addition();
void substraction();
void multiplication();
void division();
void percentage();
void universal();

int main(){
    system("cls");
    int c;
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tWELCOME TO DIGITAL CALCULATOR"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    cout<<"\t\t\t\t\t\tPress 1 for arithmetic operations"<<endl;
    cout<<"\t\t\t\t\t\tPress 2 for exponential operations"<<endl;
    cout<<"\t\t\t\t\t\tPress 3 for trigonometric functions"<<endl;
    cout<<"\t\t\t\t\t\tPress 4 for logarithms"<<endl;
    cout<<"\t\t\t\t\t\tPress 5 for square roots"<<endl;
    cout<<"\t\t\t\t\t\tPress 6 for hyperbolic functions"<<endl;
    cout<<"\t\t\t\t\t\tPress 7 for statistics"<<endl;
    cout<<"\t\t\t\t\t\tPress 8 for fractions"<<endl;
    cout<<"\t\t\t\t\t\tPress 9 for binary operations"<<endl;
    cout<<"\t\t\t\t\t\tPress 10 to EXIT the operation"<<endl;
    cout<<"\t\t\t\t\t\tPlease select your choice given above : "; 
    cin>>c;
     
    switch(c){
        case 1:
            airhmatic();
            break;
        case 2:
            exponential();
            break;
        case 3:
            trignometric();
            break;
        case 4:
            logarithms();
            break;
        case 5:
            squareroots();
            break;
        case 6:
            hyperbolic();
            break;
        case 7:
            statistics();
            break;
        case 8:
            fraction();
            break;
        case 9:
            binary();
            break;
        case 10:
            cout<<"THANK YOU !!\n";
            break;
        default:
            system("cls");
            cout<<"PLEASE SELECT THE OPTION WHICH IS GIVEN BELOW"<<endl;
            main();
    }
    return 0;
}

// Arithmetic functions
void airhmatic(){
    system("cls");
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tWELCOME TO DIGITAL CALCULATOR"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    int n;
    cout<<"\t\t\t\t\t\tPress 1 for ADDITION"<<endl;
    cout<<"\t\t\t\t\t\tPress 2 for SUBTRACTION"<<endl;
    cout<<"\t\t\t\t\t\tPress 3 for MULTIPLICATION"<<endl;
    cout<<"\t\t\t\t\t\tPress 4 for DIVISION "<<endl;
    cout<<"\t\t\t\t\t\tPress 5 for PERCENTAGE"<<endl;
    cout<<"\t\t\t\tPress 6 --> UNIVERSAL CALCULATOR <-- "<<endl;
    cout<<"\t\t\t\tPress 7 to return to MAIN MENU"<<endl;
    cin>>n;
    system("cls");
    
    switch(n){
        case 1:
            addition();
            break;
        case 2:
            substraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            percentage();
            break;
        case 6:
            universal();
            break;
        case 7:
            main();
            break;
        default:
            system("cls");
            cout<<"PLEASE SELECT THE OPTION ARE GIVEN BELOW"<<endl;
            airhmatic();
    }
}

void addition(){
    system("cls");
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\t----- ADDITION -----\n"<<endl;
    double a,b;
    cout<<"\n\t\t\t\t\t\tenter FIRST number : ";
    cin>>a;
    cout<<"\t\t\t\t\t\tenter second number : ";
    cin>>b;
    cout<<"\n\t\t\t\t\t\tADDITION IS : "<<a+b<<endl;
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        addition();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

void substraction(){
    system("cls");
    cout<<"\t\t\t\t\t\t----- SUBTRACTION -----"<<endl;
    double a,b;
    cout<<"\n\t\t\t\t\t\tenter FIRST number : ";
    cin>>a;
    cout<<"\t\t\t\t\t\tenter second number : ";
    cin>>b;
    cout<<"\n\t\t\t\t\t\tSUBTRACTION IS : "<<a-b<<endl;
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        substraction();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

void multiplication(){
    system("cls");
    cout<<"\t\t\t\t\t\t----- MULTIPLICATION -----"<<endl;
    double a,b;
    cout<<"\n\t\t\t\t\t\tenter FIRST number : ";
    cin>>a;
    cout<<"\t\t\t\t\t\tenter second number : ";
    cin>>b;
    cout<<"\n\t\t\t\t\t\tMULTIPLICATION IS : "<<a*b<<endl;
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        multiplication();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

void division(){
    system("cls");
    cout<<"\t\t\t\t\t\t----- DIVISION -----"<<endl;
    double a,b;
    cout<<"\n\t\t\t\t\t\tenter FIRST number : ";
    cin>>a;
    cout<<"\t\t\t\t\t\tenter second number : ";
    cin>>b;
    
    if(b == 0){
        cout<<"\n\t\t\t\t\t\tERROR: Division by zero!"<<endl;
    }
    else{
        cout<<"\n\t\t\t\t\t\tDIVISION IS : "<<a/b<<endl;
    }
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        division();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

void percentage(){
    system("cls");
    cout<<"\t\t\t\t\t\t----- PERCENTAGE -----"<<endl;
    double a,b;
    cout<<"\n\t\t\t\t\t\tenter FIRST number : ";
    cin>>a;
    cout<<"\t\t\t\t\t\tenter second number : ";
    cin>>b;
    
    if(b == 0){
        cout<<"\n\t\t\t\t\t\tERROR: Division by zero!"<<endl;
    }
    else{
        cout<<"\n\t\t\t\t\t\tPERCENTAGE IS : "<<(a/b)*100<<"%"<<endl;
    }
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        percentage();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

void universal(){
    system("cls");
    cout<<"\t\t\t\t\t\t----- UNIVERSAL CALCULATOR -----"<<endl;
    cout<<"\t\t\t\t\t\tEnter expression (e.g., 2 + 3 * 5): ";
    
    // This is a simplified version - a full expression parser would be more complex
    double result = 0, num;
    char op;
    cin >> result; // Get the first number
    
    while(cin >> op >> num) {
        switch(op) {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if(num == 0) {
                    cout << "ERROR: Division by zero!" << endl;
                    main();
                    return;
                }
                result /= num;
                break;
            default:
                cout << "Invalid operator!" << endl;
                main();
                return;
        }
    }
    
    cout << "\n\t\t\t\t\t\tRESULT: " << result << endl;
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin.clear(); // Clear any error flags
    cin.ignore(10000, '\n'); // Ignore any remaining input
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        universal();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

// Exponential functions
void exponential(){
    system("cls");
    int choice;
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tEXPONENTIAL OPERATIONS"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    cout<<"\t\t\t\t\t\tPress 1 for Power (x^y)"<<endl;
    cout<<"\t\t\t\t\t\tPress 2 for Square (x^2)"<<endl;
    cout<<"\t\t\t\t\t\tPress 3 for Cube (x^3)"<<endl;
    cout<<"\t\t\t\t\t\tPress 4 for Square Root"<<endl;
    cout<<"\t\t\t\t\t\tPress 5 for Cube Root"<<endl;
    cout<<"\t\t\t\t\t\tPress 6 for e^x"<<endl;
    cout<<"\t\t\t\t\t\tPress 7 to return to MAIN MENU"<<endl;
    cout<<"\t\t\t\t\t\tEnter your choice: ";
    cin>>choice;
    
    double x, y, result;
    switch(choice){
        case 1:
            cout<<"\t\t\t\t\t\tEnter base (x): ";
            cin>>x;
            cout<<"\t\t\t\t\t\tEnter exponent (y): ";
            cin>>y;
            result = pow(x, y);
            cout<<"\t\t\t\t\t\t"<<x<<"^"<<y<<" = "<<result<<endl;
            break;
        case 2:
            cout<<"\t\t\t\t\t\tEnter number (x): ";
            cin>>x;
            result = x*x;
            cout<<"\t\t\t\t\t\t"<<x<<"^2 = "<<result<<endl;
            break;
        case 3:
            cout<<"\t\t\t\t\t\tEnter number (x): ";
            cin>>x;
            result = x*x*x;
            cout<<"\t\t\t\t\t\t"<<x<<"^3 = "<<result<<endl;
            break;
        case 4:
            cout<<"\t\t\t\t\t\tEnter number: ";
            cin>>x;
            if(x < 0){
                cout<<"\t\t\t\t\t\tCannot calculate square root of negative number!"<<endl;
            }
            else{
                result = sqrt(x);
                cout<<"\t\t\t\t\t\tsqrt("<<x<<") = "<<result<<endl;
            }
            break;
        case 5:
            cout<<"\t\t\t\t\t\tEnter number: ";
            cin>>x;
            result = cbrt(x);
            cout<<"\t\t\t\t\t\tcbrt("<<x<<") = "<<result<<endl;
            break;
        case 6:
            cout<<"\t\t\t\t\t\tEnter exponent (x): ";
            cin>>x;
            result = exp(x);
            cout<<"\t\t\t\t\t\te^"<<x<<" = "<<result<<endl;
            break;
        case 7:
            main();
            return;
        default:
            cout<<"\t\t\t\t\t\tInvalid choice!"<<endl;
    }
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        exponential();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

// Trigonometric functions
void trignometric(){
    system("cls");
    int choice;
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tTRIGONOMETRIC FUNCTIONS"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    cout<<"\t\t\t\t\t\tPress 1 for Sine (sin)"<<endl;
    cout<<"\t\t\t\t\t\tPress 2 for Cosine (cos)"<<endl;
    cout<<"\t\t\t\t\t\tPress 3 for Tangent (tan)"<<endl;
    cout<<"\t\t\t\t\t\tPress 4 for Arc Sine (asin)"<<endl;
    cout<<"\t\t\t\t\t\tPress 5 for Arc Cosine (acos)"<<endl;
    cout<<"\t\t\t\t\t\tPress 6 for Arc Tangent (atan)"<<endl;
    cout<<"\t\t\t\t\t\tPress 7 to return to MAIN MENU"<<endl;
    cout<<"\t\t\t\t\t\tEnter your choice: ";
    cin>>choice;
    
    double angle, result;
    bool isDegree = true;
    char unit;
    
    if(choice >= 1 && choice <= 6){
        cout<<"\t\t\t\t\t\tEnter angle: ";
        cin>>angle;
        cout<<"\t\t\t\t\t\tIs this in degrees (D) or radians (R)? ";
        cin>>unit;
        
        if(toupper(unit) == 'R'){
            isDegree = false;
        }
        
        if(isDegree){
            angle = angle * M_PI / 180.0; // Convert to radians
        }
    }
    
    switch(choice){
        case 1:
            result = sin(angle);
            cout<<"\t\t\t\t\t\tsin("<<(isDegree ? angle*180/M_PI : angle)<<(isDegree ? "°" : " rad")<<") = "<<result<<endl;
            break;
        case 2:
            result = cos(angle);
            cout<<"\t\t\t\t\t\tcos("<<(isDegree ? angle*180/M_PI : angle)<<(isDegree ? "°" : " rad")<<") = "<<result<<endl;
            break;
        case 3:
            result = tan(angle);
            cout<<"\t\t\t\t\t\ttan("<<(isDegree ? angle*180/M_PI : angle)<<(isDegree ? "°" : " rad")<<") = "<<result<<endl;
            break;
        case 4:
            if(angle < -1 || angle > 1){
                cout<<"\t\t\t\t\t\tInvalid input for arc sine (must be between -1 and 1)!"<<endl;
            }
            else{
                result = asin(angle);
                cout<<"\t\t\t\t\t\tasin("<<angle<<") = "<<(isDegree ? result*180/M_PI : result)<<(isDegree ? "°" : " rad")<<endl;
            }
            break;
        case 5:
            if(angle < -1 || angle > 1){
                cout<<"\t\t\t\t\t\tInvalid input for arc cosine (must be between -1 and 1)!"<<endl;
            }
            else{
                result = acos(angle);
                cout<<"\t\t\t\t\t\tacos("<<angle<<") = "<<(isDegree ? result*180/M_PI : result)<<(isDegree ? "°" : " rad")<<endl;
            }
            break;
        case 6:
            result = atan(angle);
            cout<<"\t\t\t\t\t\tatan("<<angle<<") = "<<(isDegree ? result*180/M_PI : result)<<(isDegree ? "°" : " rad")<<endl;
            break;
        case 7:
            main();
            return;
        default:
            cout<<"\t\t\t\t\t\tInvalid choice!"<<endl;
    }
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        trignometric();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

// Logarithmic functions
void logarithms(){
    system("cls");
    int choice;
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tLOGARITHMIC FUNCTIONS"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    cout<<"\t\t\t\t\t\tPress 1 for Natural Logarithm (ln)"<<endl;
    cout<<"\t\t\t\t\t\tPress 2 for Common Logarithm (log10)"<<endl;
    cout<<"\t\t\t\t\t\tPress 3 for Logarithm with custom base"<<endl;
    cout<<"\t\t\t\t\t\tPress 4 to return to MAIN MENU"<<endl;
    cout<<"\t\t\t\t\t\tEnter your choice: ";
    cin>>choice;
    
    double x, base, result;
    switch(choice){
        case 1:
            cout<<"\t\t\t\t\t\tEnter number (x > 0): ";
            cin>>x;
            if(x <= 0){
                cout<<"\t\t\t\t\t\tInvalid input for logarithm!"<<endl;
            }
            else{
                result = log(x);
                cout<<"\t\t\t\t\t\tln("<<x<<") = "<<result<<endl;
            }
            break;
        case 2:
            cout<<"\t\t\t\t\t\tEnter number (x > 0): ";
            cin>>x;
            if(x <= 0){
                cout<<"\t\t\t\t\t\tInvalid input for logarithm!"<<endl;
            }
            else{
                result = log10(x);
                cout<<"\t\t\t\t\t\tlog10("<<x<<") = "<<result<<endl;
            }
            break;
        case 3:
            cout<<"\t\t\t\t\t\tEnter number (x > 0): ";
            cin>>x;
            cout<<"\t\t\t\t\t\tEnter base (base > 0, base ≠ 1): ";
            cin>>base;
            if(x <= 0 || base <= 0 || base == 1){
                cout<<"\t\t\t\t\t\tInvalid input for logarithm!"<<endl;
            }
            else{
                result = log(x) / log(base);
                cout<<"\t\t\t\t\t\tlog"<<base<<"("<<x<<") = "<<result<<endl;
            }
            break;
        case 4:
            main();
            return;
        default:
            cout<<"\t\t\t\t\t\tInvalid choice!"<<endl;
    }
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        logarithms();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

// Square root function
void squareroots(){
    system("cls");
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tSQUARE ROOT FUNCTION"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    
    double x;
    cout<<"\t\t\t\t\t\tEnter number (x >= 0): ";
    cin>>x;
    
    if(x < 0){
        cout<<"\t\t\t\t\t\tCannot calculate square root of negative number!"<<endl;
    }
    else{
        double result = sqrt(x);
        cout<<"\t\t\t\t\t\tsqrt("<<x<<") = "<<result<<endl;
    }
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        squareroots();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

// Hyperbolic functions
void hyperbolic(){
    system("cls");
    int choice;
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tHYPERBOLIC FUNCTIONS"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    cout<<"\t\t\t\t\t\tPress 1 for Hyperbolic Sine (sinh)"<<endl;
    cout<<"\t\t\t\t\t\tPress 2 for Hyperbolic Cosine (cosh)"<<endl;
    cout<<"\t\t\t\t\t\tPress 3 for Hyperbolic Tangent (tanh)"<<endl;
    cout<<"\t\t\t\t\t\tPress 4 for Inverse Hyperbolic Sine (asinh)"<<endl;
    cout<<"\t\t\t\t\t\tPress 5 for Inverse Hyperbolic Cosine (acosh)"<<endl;
    cout<<"\t\t\t\t\t\tPress 6 for Inverse Hyperbolic Tangent (atanh)"<<endl;
    cout<<"\t\t\t\t\t\tPress 7 to return to MAIN MENU"<<endl;
    cout<<"\t\t\t\t\t\tEnter your choice: ";
    cin>>choice;
    
    double x, result;
    switch(choice){
        case 1:
            cout<<"\t\t\t\t\t\tEnter number: ";
            cin>>x;
            result = sinh(x);
            cout<<"\t\t\t\t\t\tsinh("<<x<<") = "<<result<<endl;
            break;
        case 2:
            cout<<"\t\t\t\t\t\tEnter number: ";
            cin>>x;
            result = cosh(x);
            cout<<"\t\t\t\t\t\tcosh("<<x<<") = "<<result<<endl;
            break;
        case 3:
            cout<<"\t\t\t\t\t\tEnter number: ";
            cin>>x;
            result = tanh(x);
            cout<<"\t\t\t\t\t\ttanh("<<x<<") = "<<result<<endl;
            break;
        case 4:
            cout<<"\t\t\t\t\t\tEnter number: ";
            cin>>x;
            result = asinh(x);
            cout<<"\t\t\t\t\t\tasinh("<<x<<") = "<<result<<endl;
            break;
        case 5:
            cout<<"\t\t\t\t\t\tEnter number (x >= 1): ";
            cin>>x;
            if(x < 1){
                cout<<"\t\t\t\t\t\tInvalid input for acosh (must be >= 1)!"<<endl;
            }
            else{
                result = acosh(x);
                cout<<"\t\t\t\t\t\tacosh("<<x<<") = "<<result<<endl;
            }
            break;
        case 6:
            cout<<"\t\t\t\t\t\tEnter number (-1 < x < 1): ";
            cin>>x;
            if(x <= -1 || x >= 1){
                cout<<"\t\t\t\t\t\tInvalid input for atanh (must be between -1 and 1)!"<<endl;
            }
            else{
                result = atanh(x);
                cout<<"\t\t\t\t\t\tatanh("<<x<<") = "<<result<<endl;
            }
            break;
        case 7:
            main();
            return;
        default:
            cout<<"\t\t\t\t\t\tInvalid choice!"<<endl;
    }
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        hyperbolic();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

// Statistics functions
void statistics(){
    system("cls");
    int choice;
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tSTATISTICAL FUNCTIONS"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    cout<<"\t\t\t\t\t\tPress 1 for Mean"<<endl;
    cout<<"\t\t\t\t\t\tPress 2 for Median"<<endl;
    cout<<"\t\t\t\t\t\tPress 3 for Mode"<<endl;
    cout<<"\t\t\t\t\t\tPress 4 for Standard Deviation"<<endl;
    cout<<"\t\t\t\t\t\tPress 5 for Variance"<<endl;
    cout<<"\t\t\t\t\t\tPress 6 to return to MAIN MENU"<<endl;
    cout<<"\t\t\t\t\t\tEnter your choice: ";
    cin>>choice;
    
    int n;
    double sum = 0, mean, variance, stdDev;
    vector<double> data;
    
    if(choice >= 1 && choice <= 5){
        cout<<"\t\t\t\t\t\tEnter number of data points: ";
        cin>>n;
        
        if(n <= 0){
            cout<<"\t\t\t\t\t\tInvalid number of data points!"<<endl;
            statistics();
            return;
        }
        
        cout<<"\t\t\t\t\t\tEnter the data points:"<<endl;
        for(int i = 0; i < n; i++){
            double value;
            cout<<"\t\t\t\t\t\tData point "<<i+1<<": ";
            cin>>value;
            data.push_back(value);
            sum += value;
        }
        sort(data.begin(), data.end());
        mean = sum / n;
    }
    
    switch(choice){
        case 1: // Mean
            cout<<"\t\t\t\t\t\tMean = "<<mean<<endl;
            break;
        case 2: // Median
            if(n % 2 == 1){
                cout<<"\t\t\t\t\t\tMedian = "<<data[n/2]<<endl;
            }
            else{
                cout<<"\t\t\t\t\t\tMedian = "<<(data[n/2 - 1] + data[n/2]) / 2<<endl;
            }
            break;
        case 3: // Mode
            {
                double currentNum = data[0];
                int currentCount = 1;
                double mode = currentNum;
                int maxCount = currentCount;
                
                for(int i = 1; i < n; i++){
                    if(data[i] == currentNum){
                        currentCount++;
                    }
                    else{
                        if(currentCount > maxCount){
                            maxCount = currentCount;
                            mode = currentNum;
                        }
                        currentNum = data[i];
                        currentCount = 1;
                    }
                }
                
                // Check last number
                if(currentCount > maxCount){
                    mode = currentNum;
                    maxCount = currentCount;
                }
                
                cout<<"\t\t\t\t\t\tMode = "<<mode<<" (appears "<<maxCount<<" times)"<<endl;
            }
            break;
        case 4: // Standard Deviation
            variance = 0;
            for(int i = 0; i < n; i++){
                variance += pow(data[i] - mean, 2);
            }
            variance /= n;
            stdDev = sqrt(variance);
            cout<<"\t\t\t\t\t\tStandard Deviation = "<<stdDev<<endl;
            break;
        case 5: // Variance
            variance = 0;
            for(int i = 0; i < n; i++){
                variance += pow(data[i] - mean, 2);
            }
            variance /= n;
            cout<<"\t\t\t\t\t\tVariance = "<<variance<<endl;
            break;
        case 6:
            main();
            return;
        default:
            cout<<"\t\t\t\t\t\tInvalid choice!"<<endl;
    }
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        statistics();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

// Fraction functions
void fraction(){
    system("cls");
    int choice;
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tFRACTION OPERATIONS"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    cout<<"\t\t\t\t\t\tPress 1 for Fraction Addition"<<endl;
    cout<<"\t\t\t\t\t\tPress 2 for Fraction Subtraction"<<endl;
    cout<<"\t\t\t\t\t\tPress 3 for Fraction Multiplication"<<endl;
    cout<<"\t\t\t\t\t\tPress 4 for Fraction Division"<<endl;
    cout<<"\t\t\t\t\t\tPress 5 to Simplify Fraction"<<endl;
    cout<<"\t\t\t\t\t\tPress 6 to return to MAIN MENU"<<endl;
    cout<<"\t\t\t\t\t\tEnter your choice: ";
    cin>>choice;
    
    int num1, den1, num2, den2, resultNum, resultDen;
    
    if(choice >= 1 && choice <= 4){
        cout<<"\t\t\t\t\t\tEnter first fraction (numerator denominator): ";
        cin>>num1>>den1;
        cout<<"\t\t\t\t\t\tEnter second fraction (numerator denominator): ";
        cin>>num2>>den2;
        
        if(den1 == 0 || den2 == 0){
            cout<<"\t\t\t\t\t\tError: Denominator cannot be zero!"<<endl;
            fraction();
            return;
        }
    }
    else if(choice == 5){
        cout<<"\t\t\t\t\t\tEnter fraction to simplify (numerator denominator): ";
        cin>>num1>>den1;
        
        if(den1 == 0){
            cout<<"\t\t\t\t\t\tError: Denominator cannot be zero!"<<endl;
            fraction();
            return;
        }
    }
    
    switch(choice){
        case 1: // Addition
            resultNum = num1 * den2 + num2 * den1;
            resultDen = den1 * den2;
            break;
        case 2: // Subtraction
            resultNum = num1 * den2 - num2 * den1;
            resultDen = den1 * den2;
            break;
        case 3: // Multiplication
            resultNum = num1 * num2;
            resultDen = den1 * den2;
            break;
        case 4: // Division
            if(num2 == 0){
                cout<<"\t\t\t\t\t\tError: Cannot divide by zero!"<<endl;
                fraction();
                return;
            }
            resultNum = num1 * den2;
            resultDen = den1 * num2;
            break;
        case 5: // Simplify
            resultNum = num1;
            resultDen = den1;
            break;
        case 6:
            main();
            return;
        default:
            cout<<"\t\t\t\t\t\tInvalid choice!"<<endl;
            fraction();
            return;
    }
    
    // Simplify the result
    int gcd = 1;
    int a = abs(resultNum);
    int b = abs(resultDen);
    
    // Find GCD
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    
    resultNum /= gcd;
    resultDen /= gcd;
    
    if(choice != 5 || (choice == 5 && (num1 != resultNum || den1 != resultDen))){
        cout<<"\t\t\t\t\t\tResult: "<<resultNum<<"/"<<resultDen<<endl;
    }
    else{
        cout<<"\t\t\t\t\t\tFraction is already in simplest form: "<<resultNum<<"/"<<resultDen<<endl;
    }
    
    int menu;
    cout<<"\n\t\t\t\t\t\t ENTER 1 TO TRY AGAIN\n";
    cout<<"\n\t\t\t\t\t\tENTER 0 TO MAIN MENU : ";
    cin>>menu;
    if(menu==0){
        main();
    }
    else if(menu==1){
        fraction();
    }
    else{
        cout<<"SYNTAX ERROR";
        main();
    }
}

// Binary operations
void binary(){
    system("cls");
    int choice;
    cout<<"\t\t\t_______________________________________________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\tBINARY OPERATIONS"<<endl;
    cout<<"\t\t\t_______________________________________________________________________________\n\n"<<endl;
    cout<<"\t\t\t\t\t\tPress 1 for Binary Addition"<<endl;
    cout<<"\t\t\t\t\t\tPress 2 for Binary Subtraction"<<endl;
    cout<<"\t\t\t\t\t\tPress 3 for Binary Multiplication"<<endl;
    cout<<"\t\t\t\t\t\tPress 4 for Binary Division"<<endl;
    cout<<"\t\t\t\t\t\tPress 5 for Decimal to Binary"<<endl;
    cout<<"\t\t\t\t\t\tPress 6 for Binary to Decimal"<<endl;
    cout<<"\t\t\t\t\t\tPress 7 for Binary AND"<<endl;
    cout<<"\t\t\t\t\t\tPress 8 for Binary OR"<<endl;
    cout<<"\t\t\t\t\t\tPress 9 for Binary XOR"<<endl;
    cout<<"\t\t\t\t\t\tPress 10 for Binary NOT"<<endl;
    cout<<"\t\t\t\t\t\tPress 11 to return to MAIN MENU"<<endl;
    cout<<"\t\t\t\t\t\tEnter your choice: ";
    cin>>choice;
    
    string bin1, bin2;
    long dec1, dec2, result;
    
    if(choice >= 1 && choice <= 4 || choice == 7 || choice == 8 || choice == 9){
        cout<<"\t\t\t\t\t\tEnter first binary number: ";
        cin>>bin1;
        cout<<"\t\t\t\t\t\tEnter second binary number: ";
        cin>>bin2;
        
        // Validate binary numbers
        for(char c : bin1){
            if(c != '0' && c != '1'){
                cout<<"\t\t\t\t\t\tInvalid binary number!"<<endl;
                binary();
                return;
            }
        }
        for(char c : bin2){
            if(c != '0' && c != '1'){
                cout<<"\t\t\t\t\t\tInvalid binary number!"<<endl;
                binary();
                return;
            }
        }
        
        dec1 = stol(bin1, nullptr, 2);
        dec2 = stol(bin2, nullptr, 2);
    }
    else if(choice == 5){
        cout<<"\t\t\t\t\t\tEnter decimal number: ";
        cin>>dec1;
    }
    else if(choice == 6){
        cout<<"\t\t\t\t\t\tEnter binary number: ";
        cin>>bin1;
        
        // Validate binary number
        for(char c : bin1){
            if(c != '0' && c != '1'){
                cout<<"\t\t\t\t\t\tInvalid binary number!"<<endl;
                binary();
                return;
            }
        }
    }
    else if(choice == 10){
        cout<<"\t\t\t\t\t\tEnter binary number: ";
        cin>>bin1;
        
        // Validate binary number
        for(char c : bin1){
            if(c != '0' && c != '1'){
                cout<<"\t\t\t\t\t\tInvalid binary number!"<<endl;
                binary();
                return;
            }
        }
    }
    
    switch(choice){
        case 1: // Addition
            result = dec1 + dec2;
     cout<<"\t\t\t\t\t\t"<<bin1<<" + "<<bin2<<" = "<<bitset<32>(result).to_string().substr(bitset<32>(result).to_string().find('1'))<<endl;
    }
}