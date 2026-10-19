#include<iostream>
using namespace std;
class animal
{

    public:
    virtual void sound()
    {
    	
        cout<<"MAKE GENERIC SOUND:"<<endl;
        
    }
    
    virtual ~animal() {}
};

    class dog:public animal
{
	
	public:
		void sound() override{
	    
			cout<<"DOGS SAY WOOF!WOOF!"<<endl;
		}

};

     class cat:public animal
     {
     	public:
     		void sound() override{
     		cout<<"CATS SAY MEOW!MEOW!"<<endl;
			 }
			 
	 };
	 
	 class cow:public animal
	 {
	 	public:
	 		void sound() override{
	 		cout<<"COWS SAY MOOOO!MOOO!"<<endl;
			 }

	 };
	 int main()
	 {  
	 	animal* a1=new dog();
	 	animal* a2= new cat();
	 	animal* a3= new cow();
	 	
	 	a1->sound();
	 	a2->sound();
	 	a3->sound();
	 	
	 	delete a1;
	 	delete a1;
	 	delete a3;

	 	return 0;		
	 	
	 }