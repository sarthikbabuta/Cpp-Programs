#include<iostream>
using namespace std;
class node
{
	   protected:
		char brand_name[100];
		int manufacturing_year,warranty_year;
		public:
		void get_node()
		{
			cout<<"enter the brand name";
			cin>>brand_name;
			cout<<"enter the manufacturing year";
			cin>>manufacturing_year;
			cout<<"enter the warranty year";
			cin>>warranty_year;	
		}
		void put_node()
		{
				cout<<brand_name<<"\n";
				cout<<manufacturing_year<<"\n";
				cout<<warranty_year<<"\n";	
		}
};
class server: protected node
{
	protected:
		int mttr,mttf,tps;
		public:
		void get_server()
		{
			cout<<"enter the mttr";
			cin>>mttr;
			cout<<"enter the mttf";
			cin>>mttf;
			cout<<"enter the tps";
			cin>>tps;	
		}
		void put_server()
		{
				cout<<mttr<<"\n";
				cout<<mttf<<"\n";
				cout<<tps<<"\n";	
		}
};
class device: protected server
{
	protected:
		int nof;
		public:
		void get_device()
		{
			
			get_node();
			get_server();
			cout<<"enter the no of device";
			cin>>nof;	
		}
		void put_device()
		{
			put_node();
			put_server();
			cout<<mttr<<"\n";
		}
};
int  main()
{
	device d;
	d.get_device();
	d.put_device();
	return 0;
	
}
