#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

 void task_5() {

    double x, y, r, t;

    cout << "Enter Cartesian coordinates x and y: ";
    cin >> x >> y;

    r = sqrt(x * x + y * y);
    t = atan2(y, x) * 180.0 / M_PI;

    cout << "Polar coordinates: (" << r << ", " << t << " degrees)" << endl;
    
}

void task_6() {
    
    double r, t, x, y;

    cout << "Enter polar coordinates r and theta (in degrees): ";
    cin >> r >> t;

    x = r * cos(t * M_PI / 180.0);
    y = r * sin(t * M_PI / 180.0);

    cout << "Cartesian coordinates: (" << x << ", " << y << ")" << endl;
 
}


void task_7() {

    double a, b, c;

    cout << "Enter coefficients a, b, c of quadratic equation ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    double discr = b * b - 4 * a * c;
    if (discr < 0) {
        cout << "No real roots" << endl;
    }
    else if (discr == 0) {
        double root = -b / (2 * a);
        cout << "Single root: " << root << endl;
    }
    else {
        double root1 = (-b + sqrt(discr)) / (2 * a);
        double root2 = (-b - sqrt(discr)) / (2 * a);
        cout << "Two roots: " << root1 << ", " << root2 << endl;
    }

}

void  tasl_8() {

    double a, b, c, ma, mb, mc;

    cout << "Enter sides of triangle: ";
    cin >> a >> b >> c;

    ma = sqrt(2 * b * b + 2 * c * c - a * a) / 2;
    mb = sqrt(2 * a * a + 2 * c * c - b * b) / 2;
    mc = sqrt(2 * a * a + 2 * b * b - c * c) / 2;

    cout << "Medians of triangle with sides " << a << ", " << b << ", " << c << " are: " << ma << ", " << mb << ", " << mc << endl;
}

void task_14() {
    int duration, day;

    cout << "Enter duration of call (in minutes) and day of week (1-7): ";
    cin >> duration >> day;

    double cost_per_minute = 0.25;
    if (day == 6 || day == 7) { // 6 is Saturday, 7 is Sunday
        cost_per_minute *= 0.8;
    }

    double cost = duration * cost_per_minute;
   
    cout << "Cost of call: $" << cost << endl;
}

void task_15() {

    int month;
    string month_name, season;
   
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch (month) {
    case 1:
        month_name = "January";
        season = "Winter";
        break;
    case 2:
        month_name = "February";
        season = "Winter";
        break;
    case 3:
        month_name = "March";
        season = "Spring";
        break;
    case 4:
        month_name = "April";
        season = "Spring";
        break;
    case 5:
        month_name = "May";
        season = "Spring";
        break;
    case 6:
        month_name = "June";
        season = "Summer";
        break;
    case 7:
        month_name = "July";
        season = "Summer";
        break;
    case 8:
        month_name = "August";
        season = "Summer";
        break;
    case 9:
        month_name = "September";
        season = "Autumn";
        break;
    case 10:
        month_name = "October";
        season = "Autumn";
        break;
    case 11:
        month_name = "November";
        season = "Autumn";
        break;
    case 12:
        month_name = "December";
        season = "Winter";
        break;
   
    default:
        month_name = "Unknown";
        season = "Unknown";
    }

    cout << month_name << " is in " << season << endl;
 
}

void task_18() {

    int num, num2;
    cout << "Enter a four-digit number: ";
    cin >> num;
    num2 = num;
 
    int original_num = num2;
    int reversed_num = 0;
    
    while (num2 > 0) {
        int digit = num2 % 10;
        reversed_num = reversed_num * 10 + digit;
        num2 /= 10;
    }
    bool palindrome = (original_num == reversed_num);
    
    if (palindrome) {
        cout << num << " is a palindrome." << endl;
    }
    else {
        cout << num << " is not a palindrome." << endl;
    }
}


bool is_digit_product_greater(int num, int b) { // for task 19
    int digit_product = 1;
    while (num > 0) {
        int digit = num % 10;
        digit_product *= digit;
        num /= 10;
    }
    return (digit_product > b);
}

bool is_sum_of_digits_divisible_by_7(int num) { // for task 19
    int sum_of_digits = 0;
    while (num > 0) {
        int digit = num % 10;
        sum_of_digits += digit;
        num /= 10;
    }
    return (sum_of_digits % 7 == 0);
}

void task_19(){

    int num, b;
    cout << "Enter a three-digit number: ";
    cin >> num;
    cout << "Enter a number b: ";
    cin >> b;

    bool digit_product_greater = is_digit_product_greater(num, b);
    bool sum_of_digits_divisible = is_sum_of_digits_divisible_by_7(num);
    if (digit_product_greater) {
        cout << "The product of the digits of " << num << " is greater than " << b << endl;
    }
    else {
        cout << "The product of the digits of " << num << " is not greater than " << b << endl;
    }
    if (sum_of_digits_divisible) {
        cout << "The sum of the digits of " << num << " is divisible by 7" << endl;
    }
    else {
        cout << "The sum of the digits of " << num << " is not divisible by 7" << endl;
    }
}

int main() {

    task_5();

    task_6();

    task_7();

    tasl_8();

    task_14();

    task_15();

    task_18();

    task_19();

    return 0;

}