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
		cout<<"�������ı���ַ��";
		cin>>filename;
        ifstream o(filename,ios::in);
        int Count[4] = {0};
        TextCount(o,Count);
        cout<<"�ַ�����"<<Count[0]<<endl;
        cout<<"��������"<<Count[1]<<endl;
        cout<<"������"<<Count[3]<<endl;
		system("pause");

}

