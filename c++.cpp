#include<iostream>  
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<MMsystem.h>
#include "splash.h"
using namespace std;
class cust
{
	public:
	char name[20];
	char mob[12];
	char address[100];	
	
	void add_cust()
	{
		char a[10];
		gets(a);
		cout<<"\n\n\n\tNAME : ";
	    cin.getline(name,20);    
		cout<<"\n\tMOBILE : ";
		cin.getline(mob,12);
		cout<<"\n\tADDRESS : ";
		cin.getline(address,100);
	}
	
	void show_cust()
	{
		cout<<name<<"\t\t\t\t\t"<<mob<<"\t\t\t\t"<<address<<endl<<endl;
	}
	
	int match(string a)
    {
    	if(a==mob)
    	return 1;
    	else
		return 0;
	}
};

class repair  
{
	public:
	char name[20];
	char mob[12];
	char address[100];	
	char i_name[20];
	char model[100];
	char date_in[20];
	char date_out[20];
	char problem[100];
	int bill;
	
	repair()
	{
		bill=0;
	}
	
	void in_repair()
	{
		cin.ignore();
		cout<<"\nName Accessories : ";
		cin.getline(i_name,20);
		cout<<"\nRemark : ";
		cin.getline(model,100);
		cout<<"\nDate : ";
		cin.getline(date_in,20);
		cout<<"\nProblem : ";
		cin.getline(problem,100);	
	}
	void r_show()
	{	
		cout<<endl<<name<<"-"<<mob<<"\t\t"<<i_name<<"\t\t\t"<<problem<<"\t\t\t"<<date_out<<"\t\t"<<bill<<endl;	 	 
	}
	void edit_cust()
	{
		cout<<"Date : ";
		cin>>date_out;
		cout<<"Bill : ";
		cin>>bill;
	}
	int match(string a)
    {
    	if(a==mob)
    	return 1;
    	else
		return 0;
	}
	
	
};
class sell   
{
	public:
		
		char cust_name[20];
		char product1[10];
		char product2[10];
		char product3[10];
		char product4[10];
		char product5[10];
		int price[5];
		int bill;
		char date[20];
		sell()
		{
			 strcpy(product1,"         ");
			 strcpy(product2,"         ");
			 strcpy(product3,"         ");
			 strcpy(product4,"         ");
			 strcpy(product5,"         ");
			price[0]=0;
			price[1]=0;
			price[2]=0;
			price[3]=0;
			price[4]=0;		
		} 
		void get()
		{
				
			char ch='y';
			bill=0;
			cout<<"Enter Customer Name : ";
			cin>>cust_name;
			cout<<"Enter Date : ";
			cin>>date;
			
		 	cout<<"\n\nProduct : ";
		 	cin>>product1;
		 	cout<<"Price : ";
		 	cin>>price[0];		 	
		 	cout<<"Do you want to add Item";
		 	cin>>ch;
		 	if(ch=='n')
		 	goto end;
		 	
		 	cout<<"\n\nProduct : ";
		 	cin>>product2;
		 	cout<<"Price : ";
		 	cin>>price[1];		 	
		 	cout<<"Do you want to add Item";
		 	cin>>ch;
		 	if(ch=='n')
		 	goto end;
		 	
		 	cout<<"\n\nProduct : ";
		 	cin>>product3;
		 	cout<<"Price : ";
		 	cin>>price[2];		 	
		 	cout<<"Do you want to add Item";
		 	cin>>ch;
		 	if(ch=='n')
		 	goto end;
		 	
		 	cout<<"\n\nProduct : ";
		 	cin>>product4;
		 	cout<<"Price : ";
		 	cin>>price[3];		 	
		 	cout<<"Do you want to add Item";
		 	cin>>ch;
		 	if(ch=='n')
		 	goto end;
		 	
		 	cout<<"\n\nProduct : ";
		 	cin>>product5;
		 	cout<<"Price : ";
		 	cin>>price[4];		 	
		 	cout<<"Do you want to add Item";
		 	cin>>ch;
		 	if(ch=='n')
		 	goto end; 	
		 	 
			 		 	 
			end:
			bill=price[0]+price[1]+price[2]+price[3]+price[4];
			cout<<"\n\n\t\t\tBILL : "<<bill<<"\n\n\n";
		}
	void show_record()
		{	 
		   cout<<cust_name<<"  "<<date<<"\t"<<product1<<":"<<price[0];
		   cout<<"\t"<<product2<<":"<<price[1]<<"\t"<<product3<<":"<<price[2];
		   cout<<"\t"<<product4<<":"<<price[3]<<"\t"<<product5<<":"<<price[4];
		   cout<<"\tBILL : "<<bill<<endl<<endl;		   
		}
		
};
void f_add_cust(cust &o);
void f_show_cust(cust &o);
void f_search(cust &o);
void f_del(cust &o);
void fcheck();
void fcheck_repair();
void f_edit_cust(cust &o);
void in_repair(cust &o,repair &r);
void show_repair(repair &r);
void sell_product(sell &s);
void show_selled(sell &s);
void f_edit_repair(repair &r);

void before_add_cust()
{
		char z=219;		
		cout<<"\n\n\t\t\t\t\tNEW  CUSTOMER ENTRY"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<z;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
}
void before_search_cust()
{
	char z=219;		
		cout<<"\n\n\t\t\t\t\tSEARCH CUSTOMER RECORD"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<z;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
}
void before_update_cust()
{
	char z=219;		
		cout<<"\n\n\t\t\t\t\tUPDATE CUSTOMER RECORD"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<z;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
}
void before_delete_cust()
{
	char z=219;		
		cout<<"\n\n\t\t\t\t\tDELETE  CUSTOMER RECORD"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<z;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
}
void before_repair()
{
	char z=219;		
		cout<<"\n\n\t\t\t\t\tENTRY FOR REPAIRING ACCESSORIES"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<z;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
}
void before_return()
{
		char z=219;		
		cout<<"\n\n\t\t\t\t\tRETURN OF REPAIRED ACCESSORIES"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<z;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
}
void before_selled()
{
	char z=219;		
		cout<<"\n\n\t\t\t\t\tSELL ACCESSORIES"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<z;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
}
int main()
{	 

		/*CODE TO INCREASE CONSOLE SIZE STARTS HERE*/
        CONSOLE_FONT_INFOEX cfi;
		cfi.cbSize = sizeof(cfi);
		cfi.nFont = 0;
		cfi.dwFontSize.X = 0;                   
		cfi.dwFontSize.Y = 24;                 
		cfi.FontFamily = FF_DONTCARE;
		cfi.FontWeight = FW_NORMAL;
		std::wcscpy(cfi.FaceName, L"Consolas"); 
		SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
		/*CODE TO INCREASE CONSOLE SIZE ENDS HERE*/
 cust o;
 repair r;
 sell s;
 splash();
 PlaySound(TEXT("1.wav"),NULL,SND_SYNC);
 system("CLS");
 	main_menu:	 
	 	char z=219;		
		cout<<"\n\n\t\t\t\t\t\t\tMENUS"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<z;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		 
	cout<<"\n\n\n1. Add New Customer\n";
	cout<<"\n2. Serch For  Customer\n";
	cout<<"\n3. Update  Customer Detail\n";
	cout<<"\n4. Delete  Customer Record\n";	
	cout<<"\n5. Add Accessories For Repairing\n";
	cout<<"\n6. Return Accessories After Repairing\n";
	cout<<"\n7. Sell Accessories\n";
	cout<<"\n8. Show Repairing Details\n";
	cout<<"\n9. Show Selled Accessories Details\n";
	cout<<"\n10. Show Customers\n";
	
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1:
		system("CLS");
			before_add_cust();	
			o.add_cust();
			f_add_cust(o);
			cout<<"\n\n  CUSTOMER ADDED SUCCESSFULLY\n\n";
			PlaySound(TEXT("4.wav"),NULL,SND_SYNC);
			system("PAUSE");
			system("CLS");
			goto main_menu;
			break;
		case 2:
			system("CLS");
			before_search_cust();
			f_search(o);
			system("PAUSE");
			system("CLS");
			goto main_menu;
			break;
		case 3:
			system("CLS");
			before_update_cust();
			f_edit_cust(o);	
			system("PAUSE");
			system("CLS");
			goto main_menu;			
			break;
		case 4:
		    system("CLS");
		    before_delete_cust();
			f_del(o);
			system("PAUSE");
			system("CLS");
			goto main_menu;
			break;
		case 5:	
			system("CLS"); 
			before_repair();
			in_repair(o,r);
		    system("PAUSE");
			system("CLS");
			goto main_menu;
			break;
		case 6:
			system("CLS");
			before_return();
			f_edit_repair(r);
		    system("PAUSE");
			system("CLS");
			goto main_menu;
			break;
		case 7:
			system("CLS");
			before_selled();
			sell_product(s);
			system("PAUSE");
			system("CLS");
			goto main_menu;
			break;
		case 8:
			system("CLS");
			show_repair(r);
			system("PAUSE");
			system("CLS");
			goto main_menu;
			break;
		case 9:
			system("CLS");
			show_selled(s);
			system("PAUSE");
			system("CLS");
			goto main_menu;
			break;
		case 10:
			system("CLS");
			f_show_cust(o);
			system("PAUSE");
			system("CLS");
			goto main_menu;
			break;
		default:
			system("CLS");
			cout<<"\n\n\n\n\n\n\n\t\t\tTHANK YOU";			
			exit(0);
			
	}
	
	 
 	return 0;
}
void f_add_cust(cust &o)
{
	fstream file("cust_record.txt",ios::ate | ios::app |ios::out | ios::binary);
	file.write((char *)&o,sizeof(o));
	file.close();
}

void f_show_cust(cust &o)
{
		char ch=219;		
		cout<<"\n\n\t\t\t\t\tCUSTOMER LIST"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<ch;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"NAME \t\t\t\t\t MOBILE \t\t\t ADDRESS"<<endl;
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
	fstream file("cust_record.txt",ios::in | ios::binary);
	file.seekg(0);
 
 	while(file.read((char *)&o,sizeof(o)))
 	{
		o.show_cust();
	}	
	file.close();
}

void f_search(cust &o)
{
	fstream file("cust_record.txt",ios::in | ios::binary);	
	char ch;
        
	file.seekg(0); 	
    char mob[10];
 	cout<<"Enter Mobile Number to Search : ";
 	cin>>mob;
 	cout<<endl<<endl;
    int flag=0;
     
    while(file.read((char *)&o,sizeof(o)))
    {
		    if(o.match(mob)==1)
		    {
		    	flag=1;
				break;
			}
	
	}
    if(flag==1)
    o.show_cust();
    else{
    cout<<"\n SORRY RECORD NOT FOUND \n";
	}
     
    file.close();
}


void f_del(cust &o)
{
	
	fstream file("cust_record.txt",ios::in | ios::binary);
	fstream file1("new_cust_record.txt",ios::ate | ios::app |ios::out | ios::binary);		
	char ch;
        
	file.seekg(0); 
	file1.seekg(0); 	
    char mob[10];
 	cout<<"Enter Mobile Number to Delete : ";
 	cin>>mob;
    int flag=0;
     
    while(file.read((char *)&o,sizeof(o)))
    {
    	flag=0;
		    if(o.match(mob)==1)
		    {
		    	flag=1;		
			}
			if(!flag)
			{
			file1.write((char *)&o,sizeof(o));
			}
	}
	file.close();
    file1.close();    
    fcheck();
}
  
void f_edit_cust(cust &o)
{
	
	fstream file("cust_record.txt",ios::in | ios::binary);
	fstream file1("new_cust_record.txt",ios::ate | ios::app |ios::out | ios::binary);		
	char ch;
        
	file.seekg(0); 
	file1.seekg(0); 	
    char mob[10];
 	cout<<"Enter Mobile Number to Edit : ";
 	cin>>mob;
    int flag=0;
     
    while(file.read((char *)&o,sizeof(o)))
    {
    	flag=0;
		    if(o.match(mob)==1)
		    {
		    	flag=1;		
		    	o.add_cust();
		    	file1.write((char *)&o,sizeof(o));
			}
			if(!flag)
			{
			   file1.write((char *)&o,sizeof(o));
			}
	}
	file.close();
    file1.close();    
    fcheck();
}

void f_edit_repair(repair &r)
{
	
	fstream file("add_repair.txt",ios::in | ios::binary);
	fstream file1("new_add_repair.txt",ios::ate | ios::app |ios::out | ios::binary);		
	char ch;        
	file.seekg(0); 
	file1.seekg(0); 	
    char mob[10];
 	cout<<"Enter Mobile Number to Return : ";
 	cin>>mob;
 	cout<<"\n\n";
    int flag=0;
     
    while(file.read((char *)&r,sizeof(r)))
    {
    	flag=0;
		    if(r.match(mob)==1)
		    {
		    	flag=1;		
		    	r.edit_cust();
		    	file1.write((char *)&r,sizeof(r));
			}
			if(!flag)
			{
			file1.write((char *)&r,sizeof(r));
			}
	}
	file.close();
    file1.close();    
    fcheck_repair();
}

void in_repair(cust &o,repair &r)
{
	fstream file("cust_record.txt",ios::in | ios::binary);	
	file.seekg(0); 	
    char mob[10];
 	cout<<"Enter Mobile Number to Search : ";
 	cin>>mob;
 	cout<<"\n\n";
    int flag=0;
     
    while(file.read((char *)&o,sizeof(o)))
    {
		    if(o.match(mob)==1)
		    {
		    	flag=1;
				break;
			}
	}
    if(flag==1)
    {
    	for(int i=0;i<20;i++)
    	{
    	r.name[i]=o.name[i];
    	}
    	for(int i=0;i<10;i++)
    	{
    	r.mob[i]=o.mob[i];
    	}    	
    	for(int i=0;i<100;i++)
    	{
    	r.address[i]=o.address[i];
    	}
    	r.in_repair();
    	cout<<"\nACCESSORIES ADDED FOR REPAIRING \n";
	}
    
    else{
    cout<<"\nSORRY RECORD NOT FOUND\n";
	 
	}
     
    file.close();
    
	fstream file1("add_repair.txt",ios::ate | ios::app |ios::out | ios::binary);
	file1.write((char *)&r,sizeof(r));
	file1.close();
}
void show_repair(repair &r)
{
		char ch=219;		
		cout<<"\n\n\t\t\t\t\tBILLING DETAILS"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<ch;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"NAME \t MOBILE \t ACCESSORIES \t\t PROBLEM \t\t\t DATE OUT \t\t\t BILL"<<endl;
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
	fstream file("add_repair.txt",ios::in | ios::binary);
	file.seekg(0);
 
 	while(file.read((char *)&r,sizeof(r)))
 	{
		r.r_show();
	}	
	file.close();
}

void sell_product(sell &s)
{
	s.get();
	fstream file("sell_record.txt",ios::ate | ios::app |ios::out | ios::binary);
	file.write((char *)&s,sizeof(s));
	file.close();
}

void show_selled(sell &s)
{
		char ch=219;		
		cout<<"\n\n\t\t\t\t\tBILLING DETAILS"<<"\n\n";
		for(int i=0;i<120;i++)
		{
			cout<<ch;
		}
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"NAME \t DATE \t\t\t PRODUCT DETAILS \t\t\t\t\t\t\t BILL"<<endl;
		for(int i=0;i<120;i++)
		{
			cout<<"_";
		}
		cout<<"\n\n\n";
	fstream file("sell_record.txt",ios::in | ios::binary);
	file.seekg(0); 
 	while(file.read((char *)&s,sizeof(s)))
 	{
		s.show_record();
	}	
	file.close();
}


void fcheck()
{
	 int a=remove("cust_record.txt");  
	 if(!a) 
    { 
   	//	cout<<"File removed successfully"<<endl; 
    } 
    else
    { 
       cout<<"Error1"<<endl;
    } 	    
    char old_name[] = "new_cust_record.txt";  
    char new_name[] = "cust_record.txt"; 
    int value; 
    value = rename(old_name, new_name); 
    if(!value) 
    { 
   			//cout<<"File name changed successfully"; 
    } 
    else
    { 
       cout<<"Error2"<<endl;
    } 	
}  	 

void fcheck_repair()
{
	 int a=remove("add_repair.txt");  
	 if(!a) 
    { 
   	//	cout<<"File removed successfully"<<endl; 
    } 
    else
    { 
       cout<<"Error1"<<endl;
    } 	    
    char old_name[] = "new_add_repair.txt";  
    char new_name[] = "add_repair.txt"; 
    int value; 
    value = rename(old_name, new_name); 
    if(!value) 
    { 
   			//cout<<"File name changed successfully"; 
    } 
    else
    { 
       cout<<"Error2"<<endl;
    } 	
}  	 
 
 

