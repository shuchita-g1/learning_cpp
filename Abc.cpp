class Abc{
 int i;           //data variable
 void display(){         //Member Function 
   cout<<"Inside Member Function";  //Printing
  }
}; // Class ends here

int main(){
 Abc obj;  // Creating Abc class's object
 obj.display();  //Calling member function using class object
}
