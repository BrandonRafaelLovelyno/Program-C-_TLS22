
#include <iostream>
using namespace std;

union nilai {
	int interger;
	char chara;
	
};

int main()
{
	nilai input;
	int a,b,c,d;
	int mode;
	double IP;
	

	
	
	cout << "Kalkulus Variabel Tunggal" << endl;
	cout<<"Ketik 1 jika nilai berbentuk angka"<<endl;
	cout<<"Ketik 2 jika nilai berbentuk huruf(Gunakan Huruf Besar)"<<endl;
	cout<<"Masukkan pilihan anda : ";
	cin>>mode;
	
	
	
	
	if(mode==1)
	{	cout << "Masukkan nilai mata kuliah :"<<" ";
		cin >> input.interger;
		cout<<endl;
		if(input.interger>=50)
		{a=2;
			if(input.interger>=65)
			{a=3;
				if(input.interger>=75)
				{a=4;}}}
				
		else{a=1;}
		
		
		}cout<<endl<<endl;
		
	
	if(mode==2)
	{	cout << "Masukkan nilai mata kuliah :"<<" ";
		cin>>input.chara;
		cout<<endl;
		
		a=69-input.chara;
		
	    
	}cout<<endl<<endl;
	
		cout << "Matematika Diskrit" << endl;
	cout<<"Ketik 1 jika nilai berbentuk angka"<<endl;
	cout<<"Ketik 2 jika nilai berbentuk huruf"<<endl;
	cout<<"Masukkan pilihan anda : ";
	cin>>mode;
	
	
	
	
	if(mode==1)
	{	cout << "Masukkan nilai mata kuliah :"<<" ";
		cin >> input.interger;
		cout<<endl;
		if(input.interger>=50)
		{b=2;
			if(input.interger>=65)
			{b=3;
				if(input.interger>=75)
				{b=4;}}}
				
		else{b=1;}
		
		}cout<<endl<<endl;
		
	
	if(mode==2)
	{	cout << "Masukkan nilai mata kuliah :"<<" ";
		cin>>input.chara;
		cout<<endl;
		
		b=69-input.chara;
		
	    
	}cout<<endl<<endl;
	
		cout << "Teori Vektor Matriks" << endl;
	cout<<"Ketik 1 jika nilai berbentuk angka"<<endl;
	cout<<"Ketik 2 jika nilai berbentuk huruf"<<endl;
	cout<<"Masukkan pilihan anda : ";
	cin>>mode;
	
	
	
	
	if(mode==1)
	{	cout << "Masukkan nilai mata kuliah :"<<" ";
		cin >> input.interger;
		cout<<endl;
		if(input.interger>=50)
		{c=2;
			if(input.interger>=65)
			{c=3;
				if(input.interger>=75)
				{c=4;}}}
				
		else{c=1;}
		
		}cout<<endl<<endl;
		
	
	if(mode==2)
	{	cout << "Masukkan nilai mata kuliah :"<<" ";
		cin>>input.chara;
		cout<<endl;
		
		c=69-input.chara;
		
	   
	}
	cout<<endl<<endl;
	
		cout << "Fisika Mekanika Klasik" << endl;
	cout<<"Ketik 1 jika nilai berbentuk angka"<<endl;
	cout<<"Ketik 2 jika nilai berbentuk huruf"<<endl;
	cout<<"Masukkan pilihan anda : ";
	cin>>mode;
	
	
	
	
	if(mode==1)
	{	cout << "Masukkan nilai mata kuliah :"<<" ";
		cin >> input.interger;
		cout<<endl;
		if(input.interger>=50)
		{d=2;
			if(input.interger>=65)
			{d=3;
				if(input.interger>=75)
				{d=4;}}}
				
		else{d=1;}
		
		}cout<<endl<<endl;
		
	
	if(mode==2)
	{	cout << "Masukkan nilai mata kuliah :"<<" ";
		cin>>input.chara;
		cout<<endl;
		
		d=69-input.chara;
	    
	}cout<<endl<<endl;
			
	
	
	IP = (a+b+c+d)/4;
	cout<<"Keterangan!!"<<endl<<endl;
	cout<<"Jika IP anda di atas 2 dan tidak ada nilai D, maka status AMAN!!"<<endl<<endl;
	cout<<"Jika salah satu syarat tidak terpenuhi, maka status TIDAK AMAN!!"<<endl<<endl;
	if (IP > 2.00 && a>=2&&b>=2&&c>=2&&d>=2)
	{
	cout << "Status Anda adalah AMAN" << endl<<endl;
	cout <<"IP Anda adalah  "<< IP<<endl<<endl;
	}
	else
	{
	cout << "Status Anda adalah TIDAK AMAN" << endl<<endl;
	cout <<"IP Anda adalah  "<< IP<<endl;
	}
	

	return 0;

}







