#include<iostream>
using namespace std;


class numerocomplexos
{
	private:
	  float numeroreal , numeroim;
	public:
	  numerocomplexos();
	  void setnumreal();
	  void setnumim();
	  float getnumreal();
	  float getnumim();
	  bool diferente();
	  bool igual();
	  float soma();
	  float subtracao();
	  float divisao();
	  float mult();  
};

    numerocomplexos::numerocomplexos()
    {
		numeroreal=numeroim=0;
	}
	
	void numerocomplexos::setnumreal()
	{
		cin>>numeroreal;
	}
	
	void numerocomplexos::setnumim()
	{
		cin>>numeroim;
	}
	
	float numerocomplexos::getnumreal()
	{
		return numeroreal;
	}
	
	float numerocomplexos::getnumim()
	{
		return numeroim;
	}
	
	bool numerocomplexos::diferente()
	{
		if(numeroreal != numeroim)
		{
		  return true;
	    }
		  return false;
	}
	
	bool numerocomplexos::igual()
	{
		if(numeroreal == numeroim)
		{
		  return true;
	    }
		  return false;
	}
	
	
   int main()
   {
	   numerocomplexos a;
	   
	   
	   cout<<"Digite o valor real";
	   a.setnumreal();
	   cout<<a.getnumreal();
   }
   
	
	 
    
