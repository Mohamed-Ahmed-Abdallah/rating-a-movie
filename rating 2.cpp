#include <iostream>
#include <valarray>
using namespace std;

class movie
{
  private:

      string name;
      int m,w=0; // m is the number of people and w is a counter for people who rate correctly
      int sum=0;

  public:

    movie(){

      m=0;

      }

    movie(int y,string x ){

      name=x;
      m=y;

      }

    float addrating(){

      int z=0,c=0,v=0,b=0,n=0;
      for (int i=1;i<=m;i++){

      cout<<"enter rating "<<i<<" : ";

      int l;         // l is the number of stars
      cin>>l;
      cout<<endl;

      if (l==1)
      z++;           // z is a counter for people who terrible
      else if (l==2)
      c++;           // c is a counter for people who bad
      else if (l==3)
      v++;           // v is a counter for people who ok
      else if (l==4)
      b++;           // b is a counter for people who good
      else if (l==5)
      n++;           // n is a counter for people who great


      if (5<l){
      cout<<"rating "<<i<<" is not valid we won't calculate it "<<endl<<endl;
      }
      else{
      sum+=l;
      w++;
      }

      }

      cout<<endl<<endl<<"number of people who rate correctly is "<<w<<" people"<<endl<<endl<<endl<<endl;
      cout<<"Terrible : "<<z<<" people"<<endl<<endl;
      cout<<"Bad  :     "<<c<<" people"<<endl<<endl;
      cout<<"Ok   :     "<<v<<" people"<<endl<<endl;
      cout<<"Good :     "<<b<<" people"<<endl<<endl;
      cout<<"Great:     "<<n<<" people"<<endl<<endl;

    }

    int getAverage(){

      if ((sum/w)==1){
      cout <<"Terrible :";
      cout<<" the rating of the movie is : ";
      return(sum/w);
      }

      else if ((sum/w)==2){
      cout <<"Bad :";
      cout<<" the rating of the movie is : ";
      return(sum/w);
      }

      else if ((sum/w)==3){
      cout <<"Ok :";
      cout<<" the rating of the movie is : ";
      return(sum/w);
      }

      else if ((sum/w)==4){
      cout <<"Good :";
      cout<<" the rating of the movie is : ";
      return(sum/w);
      }

      else if ((sum/w)==5){
      cout <<"Great :";
      cout<<" the rating of the movie is : ";
      return(sum/w);
      }

    }

};


int main()
{
    int c;
    cout<<"We collect rating from 5 persons of 2 movies"<<endl;
    cout<<"*********************************************"<<endl<<endl;
    cout<<"The rating between 1 to 5 stars"<<endl;
    cout<<"********************************"<<endl<<endl;

    cout<<"The movie 1 is : Feruy"<<endl<<endl<<endl<<endl;
    movie a1(20,"Feruy");
    a1.addrating();
    cout<<endl<<endl;
    cout<<a1.getAverage()<<endl<<endl;

    cout<<endl<<endl<<"********************************************"<<endl<<endl<<endl<<endl;

    cout<<"The movie 2 is : 21 Jump Street"<<endl<<endl<<endl<<endl;
    movie a2(5,"21 Jump Street");
    a2.addrating();
    cout<<endl<<endl;
    cout<<a2.getAverage()<<endl<<endl;
}

