 #include <iostream.h>
 #include <conio.h>
  class calc
 {
	public:
	void get()
	{
		cout<<"Get 1 \n";
		getch();
	}
	void get(int i)
	{
		cout<<"Get 2 \n";
		getch();
	}
 };
 void main()
 {
	calc clk ;
	clk.get();
	clk.get(68);

	getch();
	clrscr();
 }
