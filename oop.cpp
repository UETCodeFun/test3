#include<iostream>
#include<string>

using namespace std;

class Phu_nu
{
public:
    string ho_ten;
    Phu_nu(const string &ht, int t, bool cz){ // nếu không có &, sao chép toàn bộ dữ liệu
       ho_ten = ht;
       con_zin = cz;
       tuoi = t;
    }
    //Phu_nu(const string &ht,int t, bool cz)
    //: ho_ten(ht), tuoi(t), con_zin(cz){}
    ~Phu_nu()
    {
        cout << "Chia tay " << ho_ten << endl;
    }
    void Trang_diem()
    {}

    string choi_nhac_cu(string nhac_cu)  
    {
        cout << ho_ten << " thoi ken rat gioi" << endl;
        return nhac_cu;
    }
    string choi_nhac_cu_2(string nhac_cu_2){

    }
    void va_zin(){
        if ( tuoi < 25){ 
            con_zin = true;
        }
    }
    void show_hang(){
        cout << ho_ten << " " << (con_zin ? "con zin" : "mat zin") << endl;
    }
    
protected: // cho phép kế thừa bên trong class Phu_nu
    int tuoi;
    bool con_zin;
};
class Gai_ngoan : public Phu_nu{
    public:
    Gai_ngoan(const string &ht, int t, bool cz = true)
    : Phu_nu(ht, t, cz){}
    void noi_tro(){
        cout << ho_ten << " biet noi tro" << endl;
    }
    string choi_nhac_cu(string nhac_cu){
        return "á á á á";
    }
};
class Gai_hu : public Phu_nu{
    public:
    Gai_hu(const string &ht, int t, bool cz = true)
    : Phu_nu(ht, t , cz){}
    void di_bar(){
        cout << ho_ten << "quay rat xung" << endl;
    }
    string choi_nhac_cu(string nhac_cu){
        return "ơ ơ ơ ơ";
    }
};
class Dan_ong
{};
int main()
{
    Gai_ngoan *hoang_lan = new Gai_ngoan("Hoang Lan", 21, true);
    hoang_lan -> ho_ten = "Hoang Lan";
    hoang_lan -> choi_nhac_cu("ken");
    hoang_lan -> va_zin();
    hoang_lan -> show_hang();
    hoang_lan -> noi_tro();
    cout << hoang_lan->choi_nhac_cu ("ken") << endl;
    delete hoang_lan;
    Dan_ong *Son = new Dan_ong;
    return 0;
}