/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
using namespace std;

int main() {
    int age, height = 0, bounty = 0; // กำหนดค่าเริ่มต้นสำหรับ height และ bounty
    string character;

    // รับค่าอายุ
    cout << "Enter your age: ";
    cin >> age;

    if (age > 60) {
        character = "Brook";
    } else if (age > 25) {
        // รับค่าค่าหัว
        cout << "Enter your bounty: ";
        cin >> bounty;

        if (bounty > 500000000) {
            character = "Jinbe";
        } else {
            character = "Franky";
        }
    } else {
        // รับค่าส่วนสูง
        cout << "Enter your height: ";
        cin >> height;

        if (height < 100) {
            character = "Chopper";
        } else if (height < 180) {
            character = "Usopp";
        } else {
            // รับค่าค่าหัว
            cout << "Enter your bounty: ";
            cin >> bounty;

            if (bounty > 1100000000) {
                character = "Zoro";
            } else {
                character = "Sanji";
            }
        }
    }

    // แสดงผลลัพธ์
    cout << "Your character = " << character << endl;

    return 0;
}
