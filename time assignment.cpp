#include<iostream>
using namespace std;
class Time{
	int hour;
	int min;
	int sec;
	char mode;
	public:
		Time():hour(0),min(0),sec(0),mode(' ')
		{
		
		}
			Time(int h,int m,int s,char md):hour(h),min(m),sec(s),mode(md)
		{
		     if(h<1||h>12)
		     {
		     	cout<<"Enter the time again,the number should be between 1-12 "<<endl;
		     	cin>>h;
			 }
			 else if(m<1||m>12)
			 {
			 	cout<<"Enter the correct value ,the value should be between 1-12 "<<endl;
			 	cin>>m;
			 }
			  else if(s<0||s>59)
			 {
			 	cout<<"Enter the correct value ,the value should be between 0-59 "<<endl;
			 	cin>>s;
			 }
			 else if(md!='a'&&md!='p')
			 {
			 	cout<<"Enter the A for Am and P for Pm"<<endl;
			 	cin>>md;
			 }
		}
		Time(int o,int i,int e):hour(o),min(i),sec(e)
		{
			  if(o<1||o>12)
		     {
		     	cout<<"enter the time again,the number should be between 1-12 "<<endl;
		     	cin>>o;
			 }
			 else if(i<1||i>12)
			 {
			 	cout<<"Enter the correct value ,the value should be between 1-12 "<<endl;
			 	cin>>i;
			 }
			  else if(e<1||e>59)
			 {
			 	cout<<"Enter the correct value ,the value should be between 0-59 "<<endl;
			 	cin>>e;
			 }
		}
		Time(const Time& t)
		{
			hour=t.hour;
			min=t.min;
			sec=t.sec;
			mode=t.mode;
		}
		int get_Hours()
		{
			return hour;
		}
		int get_Minutes()
		{
			return min;
		}
		int get_Seconds()
		{
			return sec;
		}
		char get_Mode()
		{
			return mode;
		}
	    void set_Hours(int h)
		{
			hour=h;
		}
		void set_Minutes(int m)
		{
			min=m;
		}
		void set_Seconds(int s)
		{
			sec=s;
		}
		void set_Mode(char md)
		{
			mode=md;
		}
		void Display_time()
		{
			cout<<"The Time is:\n"<<hour<<"Hours\n"<<min<<"Minutes\n"<<sec<<"Seconds"<<mode<<"m"<<endl;
		}
		double convert_toHours()
		{
			double total_Hours=0;
			total_Hours=hour+min/60+sec/3600;
			return total_Hours;
		}
		double convert_toMinutes()
		{ 
			double total_min=0;
			total_min=hour*60+min+sec/60;
			return total_min;
		}
		double convert_toSeconds()
		{
			double total_sec=0;
			total_sec=hour/3600+min/60+sec;
			return total_sec;
		}
		double convert_to24hourformat()
		{
			int convert24_hour=hour;
		    if (mode == 'p')
			 {
            convert24_hour = hour % 12 + 12;
            mode = ' ';
            }
	     if (mode==12)
			{
				convert24_hour=0;
			}
		}
		void increment_Seconds(int s)
		{
			sec++;
		}
		void increment_Hours(int h)
		{
			hour++;
		}
};
int main()
{
	Time t1(9,11,32, 'a');
    t1.Display_time();
    Time t2(4,6,33);
    t2.Display_time();
    t1.set_Hours(9);
    t1.set_Minutes(11);
    t1.set_Seconds(56);
    t1.set_Mode('p');
    t1.Display_time();
    cout<<"The total Hours is: "<<t1.convert_toHours()<<endl;
    cout<<"The Minutes is: "<<t1.convert_toMinutes()<<endl;
    cout<<"The Total Seconds is: "<<t1.convert_toSeconds()<<endl;
    t1.increment_Hours(1);
    t1.increment_Seconds(5);
    t1.Display_time();
    
    
}









