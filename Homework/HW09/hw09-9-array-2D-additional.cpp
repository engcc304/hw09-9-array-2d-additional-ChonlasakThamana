/*
    ผู้ใช้กรอกจำนวนอาเรย์ 2 มิติขึ้นมา 2 ชุด และกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณสร้างอาเรย์ที่ 3 ขึ้นมาเก็บผลรวมของอาเรย์ทั้ง 2 ชุดนี้ โดยกำหนดให้ Element ของ Array1 , Array2 และ Array3 เท่ากัน
    
    Test case:
        Array1 element : 
            3 3
        Input :
            1 2 3
            4 5 6
            7 8 9
        Array2 element : 
            3 3
        Input :
            1 1 1
            1 1 1
            1 1 1
    Output:
        Array1 + Array2 = Array3
            2 3 4
            5 6 7
            8 9 10

*/#include <stdio.h>

int main() {
    int m, n; // ประกาศตัวแปร m และ n สำหรับกำหนดขนาดของอาเรย์ 2 มิติ
    
    // รับขนาดของอาเรย์ 2 ชุด
    printf("Array1 element :\n");
    scanf("%d %d", &m, &n);
    
    // ประกาศอาเรย์ 3 ชุดที่มีขนาดเท่ากับอาเรย์ 1 และ 2
    int array1[m][n];
    int array2[m][n];
    int array3[m][n];
    
    // รับค่าภายในอาเรย์ 1
    printf("Input :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array1[i][j]);
        }
    }
    
    // รับขนาดของอาเรย์ 2 ชุด
    printf("Array2 element :\n");
    scanf("%d %d", &m, &n);
    
    // รับค่าภายในอาเรย์ 2
    printf("Input :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array2[i][j]);
        }
    }
    
    // ทำการบวกค่าของอาเรย์ 1 และ 2 แล้วเก็บในอาเรย์ 3
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }
    
    // แสดงผลลัพธ์อาเรย์ 3
    printf("Array1 + Array2 = Array3\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
