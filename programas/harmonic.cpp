#include<iostream>
#include<cstdlib>

int main()
{
  int i,n;
  double answer;
  std::cout<<"Enter 'n'\n";
  std::cin>>n;
  answer=0;
  if(n!=0)
    {
      for(i=1;i<=n;i++)
	{
	  answer = answer + (1.0/i);
	}
      std:: cout<<"Answer is "<<answer<<"\n";
    }
  else
    {
      std::cout<<"Answer not defined! :(\n";
    }
  return (0);
}
