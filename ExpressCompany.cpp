#include <iostream>
#include <string>
using namespace std;
class Expresscom
{
    protected:
        int no,num;
        double w;
    public:
        Expresscom(int i, int j, double k)
        {
            no = i;
            num = j;
            w = k;
        }
        virtual double cost(int )=0;
        virtual void disp()=0;
        void SetData(int i, int j, double k)
        {
            no = i;
            num = j;
            w = k;
        }
        void edisp()
        {
            string citylist[] = {"天津", "上海", "太原", "广州", "昆明", "新疆"};
            cout << "目的地：" << citylist[no - 1] << endl;
            cout << "重量：" << w << "KG" << endl;
            cout << "货物个数：" << num << endl;
        }
};
class Eyoubao: public Expresscom
{
    public:
        Eyoubao(int no=0, int num=0, double w=0): Expresscom(no, num, w) {}
        double cost(int postage)
        {
            return num * postage;
        }
        void disp()
        {
            int postage[6][3] = {10, 14, 18, 15, 19, 23, 15, 19, 23, 15, 21, 27, 15, 21, 27, 15, 25, 35};
            cout << "公司名称：E通宝" << endl;
            edisp();
            cout << "单价：" << postage[no - 1][int(w) - 1] << endl;
            cout << "总运费：" << cost(postage[no - 1][int(w) - 1]) << endl;
        }
};
class SFexpress: public Expresscom
{
    public:
        SFexpress(int no=0, int num=0, double w=0): Expresscom(no, num, w) {}
        double cost(int postage)
        {
            return num * postage;
        }
        void disp()
        {
            int postage[6][3] = {12, 14, 16, 20, 30, 40, 20, 28, 36, 20, 34, 46, 20, 32, 44, 20, 34, 48};
            cout << "公司名称：顺风" << endl;
            edisp();
            cout << "单价：" << postage[no - 1][int(w) - 1] << endl;
            cout << "总运费：" << cost(postage[no - 1][int(w) - 1]) << endl;
        }
};
class EMS: public Expresscom
{
    public:
        EMS(int no=0, int num=0, double w=0): Expresscom(no, num, w) {}
        double cost(int postage)
        {
            return num * postage;
        }
        void disp()
        {
            int postage[6][3] = {26, 38, 50, 26, 38, 50, 26, 38, 50, 29, 47, 65, 35, 65, 95, 38, 66, 95};
            cout << "公司名称：EMS" << endl;
            edisp();
            cout << "单价：" << postage[no - 1][int(w) - 1] << endl;
            cout << "总运费：" << cost(postage[no - 1][int(w) - 1]) << endl;
        }
};
class Ytoexpress: public Expresscom
{
    public:
        Ytoexpress(int no=0, int num=0, double w=0): Expresscom(no, num, w) {}
        double cost(int postage)
        {
            return num * postage;
        }
        void disp()
        {
            int postage[6][3] = {10, 18, 26, 10, 18, 26, 12, 24, 36, 12, 22, 32, 15, 27, 39, 18, 33, 48};
            cout << "公司名称：圆通" << endl;
            edisp();
            cout << "单价：" << postage[no - 1][int(w) - 1] << endl;
            cout << "总运费：" << cost(postage[no - 1][int(w) - 1]) << endl;
        }
};
int main()
{
    int ExNum, CityNum, num;
    double weight;
    Eyoubao Eyb;
    SFexpress SF;
    EMS Ems;
    Ytoexpress Yto;
    Expresscom *p[4] = {&Eyb, &SF, &Ems, &Yto};
    cin >> ExNum >> CityNum >> num >> weight;
    p[ExNum - 1]->SetData(CityNum, num, weight);
    p[ExNum - 1]->disp();
    
    return 0;
}
