//C++ program for function overloading

using namespace std;
class Geeks
{
  public:
//function with 1 int parameter
void func(int x)
{
  cout<<"value of x is"<<x<<endl;
}
//function with same name but 1 double parameter
void func(double x)
{
  cout<<"value of is"<<x<<endl;
}

//function with same name and 2 int parameters
void func(intx,int y)
{
  cout<<"volue of x and y is"<<x<<","<<y<<endl;
}


};

int main(){
  Geeks  obj1;

  //Which function is called will depend on the parameters passed

  //The first  'funct' is called obj1.func(7);

  //The secuónd 'func' is called obj1.func(9.132);

  //The third 'func' is called obj1.func(85,64);
  return 0;
}