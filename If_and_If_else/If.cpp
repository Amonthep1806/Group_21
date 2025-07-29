#include<iostream> // เรียกใช้ library สำหรับการใช้งาน input/output
using namespace std; 

int main (){
    int A = 0; // ประกาศตัวแปร A และกำหนดค่าเริ่มต้นเป็น 0
    cout << "If Example" << endl; // แสดงข้อความบนหน้าจอ
    cout<<"Please enter a number to A: "<< endl; // ขอให้ผู้ใช้ป้อนค่าตัวแปร A
    cin >> A; // รับค่าจากผู้ใช้และเก็บไว้ในตัวแปร A

    if(A<5){ // ตรวจสอบว่าค่า A น้อยกว่า 5 หรือไม่
        cout<<"Condition met"<<endl; // ถ้า A น้อยกว่า 5 จะแสดง Condition met
    }
    
    return 0;
}