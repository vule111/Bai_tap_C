#include<stdio.h>
#include<stdint.h>
#include<math.h>

class Animal{
    private:
        const char* ten;
        int tuoi;
        int trong_luong;
        int chieu_cao;
        typedef enum{
            ss_tuoi,
            ss_trongluong
        }sosanh;
        sosanh ss;
    public:
        Animal(const char* ten, int tuoi , int trong_luong );
        void tinhBMI(int chieu_cao, int trong_luong);
        void Sosanhtuoi(Animal other);
        void Sosanhtrongluong(Animal other);
};

Animal::Animal(const char* ten, int tuoi, int trong_luong){
    Animal::ten = ten;
    Animal::tuoi = tuoi;
    Animal::trong_luong = trong_luong;
    Animal::chieu_cao = chieu_cao;
}
void Animal::Sosanhtuoi(Animal other){
    if(Animal::tuoi > other.tuoi){
        printf("%s luon tuoi hon %s\n" ,Animal::ten, other.ten);
    } else if(Animal::tuoi == other.tuoi){
        printf("%s bang tuoi %s\n ", Animal::ten, other.ten);
    } else {
        printf("%s nho tuoi hon %s\n" ,Animal::ten, other.ten);
    }
}

void Animal::Sosanhtrongluong(Animal other){
    if(Animal::trong_luong > other.trong_luong){
        printf("%s nang can hon %s\n", Animal::ten, other.ten);
    } else if(Animal::trong_luong == other.trong_luong){
        printf("%s bang can %s\n" ,Animal::ten, other.ten);
    } else {
        printf("%s nhe can hon %s\n", Animal::ten, other.ten);
    }
}

void Animal::tinhBMI(int chieu_cao, int trong_luong){
    // chieu_cao = Animal::chieu_cao;
    // trong_luong = Animal::trong_luong;
    float BMI = trong_luong/(chieu_cao * 2);
    if(BMI < 18.5){
        printf("%s gay\n",ten);
    } else if(BMI >= 18.5 && BMI <=22.9){
        printf("%s binh thuong\n",ten);
    } else {
        printf("%s tang can\n",ten);
    }
}

int main(){
    const char* ten_meo = "meo";
    const char* ten_cho = "cho";
    Animal meo(ten_meo, 4, 5);
    Animal cho(ten_cho, 2, 3);
    meo.tinhBMI(2,5);
    meo.Sosanhtrongluong(cho);
    meo.Sosanhtuoi(cho);
}