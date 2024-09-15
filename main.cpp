#include <bits/stdc++.h>
#include<Windows.h>
using namespace std;
enum ConsoleColor {
    BLACK = 0,
    BLUE = 1,
    GREEN = 2,
    CYAN = 3,
    RED = 4,
    MAGENTA = 5,
    BROWN = 6,
    LIGHT_GRAY = 7,
    DARK_GRAY = 8,
    LIGHT_BLUE = 9,
    LIGHT_GREEN = 10,
    LIGHT_CYAN = 11,
    LIGHT_RED = 12,
    LIGHT_MAGENTA = 13,
    YELLOW = 14,
    WHITE = 15
};

// 设置控制台文字颜色的函数
void SetColor(ConsoleColor color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
void print(string x,ConsoleColor color=WHITE){
    SetColor(color);
    printf("%s\n",x.c_str());
    SetColor(WHITE);
}
char str[138]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}
;
int main()
{
    //设置成中文，避免终端乱码
   SetConsoleOutputCP(65001); 
print("反应力测试",RED);
print("游戏会随机输出一个字符（大小写字母，数字），你需要迅速在键盘上输入对应字符，并且按下enter键。",YELLOW);
system("pause");
system("cls");
print("游戏准备开始",YELLOW);
system("cls");
cout<<3;
Sleep(1000);system("cls");
cout<<2;
Sleep(1000);system("cls");
cout<<1;
Sleep(1000);system("cls");
//----------------------------------------游戏开始----------------------------------------------------
double all_time=0;
int wrong=0;
for(int i=0;i<10;i++){
    system("cls");
    //设置随机种子
    srand(time(NULL));
    //生成随机数
    int x=rand()%62;
    print("请输入    "+string(1,str[x]),BLUE);
    clock_t start=clock();
    char c;
    cin>>c;
    clock_t end=clock();
    double time=(double)(end-start)/CLOCKS_PER_SEC;
    all_time+=time;
    if(c!=str[x]) {
        print("你输入的字符不正确 :-(",RED);
        wrong++;
    }
    else print("你输入的字符正确 :)",GREEN);
    cout<<"你输入了 "<<c<<" ，用时 "<<(double)time<<" 秒";
    system("pause");

}
cout<<"平均用时 "<<all_time/10<<" 秒"<<endl;
cout<<"错误次数 "<<wrong<<endl;
cout<<"分数 "<<all_time/(10-wrong)*1.0<<endl;
system("pause");

   return 0;
}
