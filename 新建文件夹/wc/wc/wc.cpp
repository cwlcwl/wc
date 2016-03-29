#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int *TextCount(ifstream &o, int *Count)
{
        char FT[30];
        while(!o.eof())
        {
                o.getline(FT,30,'\n');
                if(o.eof())
                        break;               
                int charCount = 0;                
                char *FTStr = FT;
                while (*FTStr!= '\0')
                {
                        charCount++;
                        if(*FTStr == ' ')
                                Count[1]++;               
                        else 
							Count[0]++;               
                        FTStr++;
                }
                if(charCount<29)
                {     
					
                    Count[1]++;
                    Count[2]++;	
					Count[3]++;
                }
				else o.clear();               
        }
        return Count;
}
void main()
{
        int *TextCount(ifstream &,int *);
		char filename[256];
		cout<<"请输入文本地址：";
		cin>>filename;
        ifstream o(filename,ios::in);
        int Count[4] = {0};
        TextCount(o,Count);
        cout<<"字符数："<<Count[0]<<endl;
        cout<<"单词数："<<Count[1]<<endl;
        cout<<"行数："<<Count[3]<<endl;
		system("pause");

}

