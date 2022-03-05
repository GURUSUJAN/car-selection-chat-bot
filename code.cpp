#include<iostream>
using namespace std;
#include<string>
class com
{
    private:
    string modal;
    string company;
    int family;
    string name;
    string type;
    public:
    void info1()
    {
        string s1("SEDAN"),s2("SUV");
        cout<<"HOLA SOY NAIJU"<<endl;
        cout<<"YOUR GUIDE FOR THIS SESSION"<<endl;
        cout<<"SO WHAT KIND OF CAR YOU WANT TO BUY MATE"<<endl;
        cout<<"SEDAN"<<" "<<"SUV"<<endl;
        cout<<">";
        cin>>type;
        int x=s1.compare(type);
        if(type==s1)
        {
            string s3("HUNDAI"),s4("MAHINDRA"),s5("TATA"),s6("MARUTI-SUZUKI");
            cout<<"WOW!"<<endl;
            cout<<"IN SEDAN WHICH COMPANY YOU WOULD LIKE TO GO WITH "<<endl;
            cout<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<endl;
            cout<<">";
            cin>>company;
            if(company==s3)
            {
                string s7("AURA"),s8("VERNA"),s9("ELANTRA");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s7<<" "<<s8<<" "<<s9<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s7)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/hyundai/aura"<<endl;
                    exit(0);
                }
                else if(modal==s8)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/hyundai/verna"<<endl;
                    exit(0);
                }
                else if(modal==s9)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/hyundai/elantra"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                }
            }
           else if(company==s4)
            {
                string s7("VERITO"),s8("LOGAN");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s7<<" "<<s8<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s7)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/verito"<<endl;
                    exit(0);
                }
                else if(modal==s8)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/logan"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                }
            }
           else if(company==s5)
            {
                string s7("TIAGO"),s8("TIAGO"),s9("ALTROZ");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s7<<" "<<s8<<" "<<s9<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s7)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/tata/tiago"<<endl;
                    exit(0);
                }
                else if(modal==s8)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/tata/tigor"<<endl;
                    exit(0);
                }
                else if(modal==s9)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/tata/altroz"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                }
            }
           else if(company==s6)
            {
                string s7("SWIFT"),s8("SWIFT-DZIRE"),s9("CLAZ");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s7<<" "<<s8<<" "<<s9<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s7)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/maruti-suzuki/swift"<<endl;
                    exit(0);
                }
                else if(modal==s8)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/maruti-suzuki/swift-dzire"<<endl;
                    exit(0);
                }
                else if(modal==s9)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/maruti-suzuki/claz"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                }
            }
            else
            {
                cout<<"sorry mate we don't have the modal you are searching"<<endl;
                cout<<"we will add other companies in short period of time"<<endl;
                exit(0);
            }
            
        }
        else if(type==s2)
        {
            string s3("HUNDAI"),s4("MAHINDRA"),s5("TATA"),s6("MARUTI-SUZUKI"),s7("KIA"),s8("TOYOTA");
            cout<<"WOW!"<<endl;
            cout<<"IN SUV WHICH COMPANY YOU WOULD LIKE TO GO WITH "<<endl;
            cout<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<endl;
            cout<<">";
            cin>>company;
            if(company==s3)
            {
               string s9("CRETA"),s10("VENUE"),s11("TUSCON"),s12("ALCAZAR");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s9)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/hyundai/creta"<<endl;
                    exit(0);
                }
                else if(modal==s10)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/hyundai/venue"<<endl;
                    exit(0);
                }
                else if(modal==s11)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/hyundai/tuscon"<<endl;
                    exit(0);
                }
                else if(modal==s12)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/hyundai/alcazar"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                } 
            }
            else if(company==s8)
            {
               string s9("URBAN-CRUSIER"),s10("INNOVA-CRYSTA"),s11("FORTUNER");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s9<<" "<<s10<<" "<<s11<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s9)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/toyota/urban-crusier"<<endl;
                    exit(0);
                }
                else if(modal==s10)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/toyota/innova-crysta"<<endl;
                    exit(0);
                }
                else if(modal==s11)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/tata/fortuner"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                } 
            }
            else if(company==s7)
            {
              string s9("SONET"),s10("SELTOS"),s11("CARENS");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s9<<" "<<s10<<" "<<s11<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s9)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/kia/sonet"<<endl;
                    exit(0);
                }
                else if(modal==s10)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/kia/seltos"<<endl;
                    exit(0);
                }
                else if(modal==s11)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/kia/carens"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                }  
            }
            else if(company==s5)
            {
                string s9("HARRIER"),s10("NEXON"),s11("SAFARI"),s12("PUNCH");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s9)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/tata/harrier"<<endl;
                    exit(0);
                }
                else if(modal==s10)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/tata/nexon"<<endl;
                    exit(0);
                }
                else if(modal==s11)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/tata/safari"<<endl;
                    exit(0);
                }
                else if(modal==s12)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/tata/punch"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                }
            }
            else if(company==s6)
            {
              string s9("ERTIGA"),s10("S-PRESSO"),s11("VITARA-BREZZA");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s9<<" "<<s10<<" "<<s11<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s9)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/maruti/ertiga"<<endl;
                    exit(0);
                }
                else if(modal==s10)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/maruti/s-presso"<<endl;
                    exit(0);
                }
                else if(modal==s11)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/maruti/vitara-brezza"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                }   
            }
            else if(company==s4)
            {
                string s9("XUV-700"),s10("XUV-500"),s11("THAR"),s12("XUV-300"),s13("SCORPIO"),s14("BOLERO-NEO"),s15("BLOERO"),s16("MARAZZO"),s17("KUV-100 NXT"),s18("ALTURAS-G4");
                cout<<"GOOD CHOICE"<<endl;
                cout<<"CAN YOU SPECIFY THE MODAL!"<<endl;
                cout<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<" "<<s13<<" "<<s14<<" "<<s15<<" "<<s16<<" "<<s17<<" "<<s18<<endl;
                cout<<">";
                cin>>modal;
                if(modal==s9)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/xuv700"<<endl;
                    exit(0);
                }
                else if(modal==s10)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/xuv500"<<endl;
                    exit(0);
                }
                else if(modal==s11)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/thar"<<endl;
                    exit(0);
                }
                else if(modal==s12)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/xuv300"<<endl;
                    exit(0);
                }
                else if(modal==s13)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/SCORPIO"<<endl;
                    exit(0);
                }
                else if(modal==s14)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                   cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/bolero-neo"<<endl;
                    exit(0);
                }
                else if(modal==s15)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/bolero"<<endl;
                    exit(0);
                }
                else if(modal==s16)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/marazzo"<<endl;
                    exit(0);
                }
                else if(modal==s17)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/kuv-100#leadForm"<<endl;
                    exit(0);
                }
                else if(modal==s18)
                {
                    cout<<"HEY! PLEASE EXCUSE ME AND CAN YOU TELL ME YOUR FIRST NAME: ";
                    cin>>name;
                    cout<<name <<" CHECK OUT THE LINK GIVEN BELOW!!!"<<endl;
                    cout<<"https://www.cardekho.com/mahindra/alturas-g4#leadForm"<<endl;
                    exit(0);
                }
                else
                {
                    cout<<"sorry mate we don't have the modal you are searching"<<endl;
                    exit(0);
                }
            }
        else
        {
            cout<<"THE COMPANY YOU ARE LOOKING IS NOT YET UPDATED YET MATE!"<<endl;
            cout<<"SORRY FOR INCONVENIENCE"<<endl;
        }
        }
    }
};
main()
{
    string s0("A"),s99("a"),s100;
    cout<<"press A to continue:"<<endl;
    cin>>s100;
    if(s100==s0)
    {
        cout<<"GOOD TO GO MATE"<<endl;
    }
    else if(s100==s99)
    {
        cout<<"MAKES CAPSLOCK ON FOR FURTHER INSTRUCTIONS"<<endl;
    }
    else
    {
        cout<<"PRESS CORRECT CHARACTER MATE!"<<endl;
        exit(0);
    }
    com o1;
    o1.info1();
}
