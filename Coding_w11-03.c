#include <stdio.h>

float arr[3][3]; // สร้างตัวแปร array 2 มิติ arr ขนาด 3x3 เพื่อเก็บคะเเนนของนักเรียน 3 คน ใน 3 วิชา

void inputScores() { // ฟังก์ชันสำหรับรับค่าคะเเนน
    for (int i = 0; i < 3; i++) { 
        printf("Enter score for Student %d:\n", i+1); 

        printf("    Math: ");
        scanf("%f",&arr[i][0]); // รับค่าคะเเนนวิชา Math เเล้วเก็บไว้ใน arr[i][0]
        
        printf("    Physics: ");
        scanf("%f",&arr[i][1]);  // รับค่าคะเเนนวิชา Physics เเล้วเก็บไว้ใน arr[i][1]
       
        printf("    Chemistry: ");
        scanf("%f",&arr[i][2]); // รับค่าคะเเนนวิชา Chemistry เเล้วเก็บไว้ใน arr[i][2]
    } // วนลูป 3 ครั้งเพื่อรับคะเเนนของนักเรียนแต่ละคนใน 3 วิชา
}

void printTable() { // ฟังก์ชันสำหรับแสดงตารางคะเเนน
    printf("\nScore Table:\n");
    printf("Student   Math   Physics   Chemistry\n");
    printf("1        %5.2f   %5.2f     %5.2f\n", arr[0][0], arr[0][1], arr[0][2]); 
    printf("2        %5.2f   %5.2f     %5.2f\n", arr[1][0], arr[1][1], arr[1][2]);
    printf("3        %5.2f   %5.2f     %5.2f\n", arr[2][0], arr[2][1], arr[2][2]);
}// แสดงตารางคะเเนนของนักเรียนทั้ง 3 คนใน 3 วิชา

void printAverage() { // ฟังก์ชันสำหรับคำนวณเเละแสดงค่าเฉลี่ยของแต่ละวิชา
    float avgMath = (arr[0][0] + arr[1][0] + arr[2][0]) / 3;
    float avgPhy = (arr[0][1] + arr[1][1] + arr[2][1]) / 3;
    float avgChem = (arr[0][2] + arr[1][2] + arr[2][2]) / 3;

    printf("Math: %.2f\n", avgMath);
    printf("Physics: %.2f\n", avgPhy);
    printf("Chemistry: %.2f\n", avgChem);
}

int main () {
    inputScores(); // เรียกใช้ฟังก์ชัน inputScores เพื่อรับค่าคะเเนน
    printTable(); // เรียกใช้ฟังก์ชัน printTable เพื่อแสดงตารางคะเเนน
    printf("\nAverage per subject:\n"); // เเสดงหัวข้อค่าเฉลี่ยของแต่ละวิชา
    printAverage(); // เรียกใช้ฟังก์ชัน printAverage เพื่อแสดงค่าเฉลี่ยของแต่ละวิชา
    return 0;
}