
#include <iostream>
#include <string>
    class EnumConverter {
    public:
enum class MyEnum {
    Fiat,
    Mercedes,
    BMW,
    Audi,
    Subaru,
    Lexus,
    Honda,
    Mini,
    Porsche,
    Polestar,
    Tesla,
    Toyota,
    RollsRoyce,
    Lamborghini,
    };
       static std::string ConvertToString(MyEnum enumValue) {
            switch (enumValue) {
            case MyEnum::Lamborghini:
                return "Lamborghini";
            case MyEnum::RollsRoyce:
                return "RollsRoyce";
            case MyEnum::Toyota:
                return "Third";
            case MyEnum::Tesla:
                return "Tesla";
            case MyEnum::Polestar:
                return "Polestar";
            case MyEnum::Porsche:
                return "Porsche";
            case MyEnum::Mini: 
                return "Mini";
            case MyEnum::Honda:
                return "Honda";
            case MyEnum::Lexus:
                return "Lexus";
            case MyEnum::Subaru:
                return "Subaru";
            case MyEnum::Audi:
                return "Audi";
            case MyEnum::BMW:
                return "BMW";
            case MyEnum::Mercedes:
                return "Mercedes";
            }
        }
    };

    int main() {
        MyEnum enumValue = EnumConverter::MyEnum::Mercedes;
        EnumConverter converter;

        std::string stringValue = converter.ConvertToString(enumValue);

        std::cout << "Car Brand: " << stringValue << std::endl;

        return 0;
    }
