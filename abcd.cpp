class string
{
	char *p;
	int len;
	public:
		string()
		{
			len=0;
			p=0;
		}
		string(const char *s);
		string(const string &s);
		~string()
		{
			dalete p;
		 } 
		 friend string operator+(const string &s,const stirng &t);
		 friend int operator<=(const string &s,const string &s);
		 friend void show(connst string s);
};
string ::string(const char *s)
{
	len=strlen(s);
	p=new char [len+1];
	strcpy(p,s);
}
strings::strings(const string &s)
{
	len=s.len;
	p=new char[len+1];
}
