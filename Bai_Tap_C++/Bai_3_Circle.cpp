#include<stdint.h>
#include<stdio.h>
#include<math.h>

class HinhTron{
    private:
        int R;
        typedef enum{
            chuvi,
            dientich
        }tinhtoan;
        tinhtoan tinh;
    public:
        HinhTron(int R = 0);
        void ChuVi(int R);
        void DienTich(int R);
};

HinhTron::HinhTron(int R){
    HinhTron::R = R;
}

void HinhTron::ChuVi(int R){
    HinhTron::R = R;
    printf("Chu vi cua hinh tron la: %f\n" ,2 * R * 3.14);
}

void HinhTron::DienTich(int R){
    HinhTron::R = R;
    printf("Dien tich cua hinh tron la: %f\n" , R * R * 3.14);
}

int main(){
    int R;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%d" ,&R);
    HinhTron test;
    test.ChuVi((float)R);
    test.DienTich((float)R);
}