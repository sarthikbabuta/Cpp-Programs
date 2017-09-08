//dangling refernces for mcq
int func()
{
	int *ptr;
	example A,B;
	ptr=&A;
	delete ptr;
	ptr->getdata(50,40);
	return 0;
}

