#include <stdio.h>

float average(float a, float b, float c) {
    return (a + b + c) / 3; 
}
// สร้างฟังก์ชัน average เพื่อคำนวณค่าเฉลี่ย โดยกำหนดพารามิเตอร์ 3 ตัว คือ a, b, c 
// จากนั้น return เป็นผลลัพธ์ของ (a + b + c) / 3

int main() {
    int math, phy, chem; //กำหนดตัวแปร math, phy, chem เป็นตัวเเปร Local
    
    printf("Enter Math: ");
    scanf("%d",&math);

    printf("Enter Physics: ");
    scanf("%d",&phy);

    printf("Enter Chemistry: ");
    scanf("%d",&chem); //รับค่าของคะเเนนทั้ง 3 วิชา 

    printf("\nMath = %d\n",math);
    printf("Physics = %d\n",phy);
    printf("Chemistry = %d\n",chem); //แสดงผลค่าคะเเนนที่รับมา

    printf("Average = %.2f\n", average(math, phy, chem));
// แสดงผลค่าเฉลี่ย โดยการ เรียกใช้ฟังก์ชัน average โดยส่งค่าตัวแปร math, phy, chem เข้าไปเเทนที่ a, b, c
// จากนั้นเเสดงผลลัพธ์ที่ได้จากค่า return ของฟังก์ชัน average
    return 0;
}