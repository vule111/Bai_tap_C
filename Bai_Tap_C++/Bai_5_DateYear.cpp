#include<stdint.h>
#include<stdio.h>
#include<math.h>

class Information{
    private:
        int8_t ID;
        char* Name;
        int YearOfBirth;
        char* Address;
    public:
        Information(int8_t ID, char* Name, int YearOfBirth, char* Address);
        void Show_Information();
        int Caclulate_Age();
};

Information::Information(int8_t ID, char* Name, int YearOfBirth, char* Address){
    Information::ID = ID;
    Information::Name = Name;
    Information::YearOfBirth = YearOfBirth;
    Information::Address = Address;
}

void Information::Show_Information(){
    printf("ID %d co ten la: %s\n" ,ID ,Name);
    printf("ID %d co nam sinh la: %d\n",ID, YearOfBirth);
    printf("ID %d co dia chi o: %s\n", ID, Address);
}

int Information::Caclulate_Age(){
    int Year = Information::YearOfBirth;
    return 2023 - Year;
}

int main(){
    int ID ,YearOfBirth;
    char Name[100], Address[100];
    printf("nhap ID:");
    scanf("%d", &ID);
    printf("thong tin:");
    scanf("%s %d %s" ,Name ,&YearOfBirth, Address);
    Information test1(ID, Name, YearOfBirth, Address);
    test1.Show_Information();
    printf("tuoi: %d", test1.Caclulate_Age());
    return 0;
}