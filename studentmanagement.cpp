#include<iostream>
using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total =  0;

void enter(){
 int choice;
 cout<<"\nHow many students do you want to enter: ";
 cin>>choice;

 if (total==0){
 total = total + choice;
 for (int i = 0; i < choice; i++)
 {
    cout<<"\nEnter data of student: "<<i+1<<endl<<endl;
    cout<<"Enter the name: ";
    cin>>arr1[i];
    cout<<"Enter the roll no: ";
    cin>>arr2[i];
    cout<<"Enter the course: ";
    cin>>arr3[i];
    cout<<"Enter the class: ";
    cin>>arr4[i];
    cout<<"Enter the contact: ";
    cin>>arr5[i];
 }
}
else{
   for (int i = total; i < total+choice; i++)
 {
    cout<<"\nEnter data of student: "<<i+1<<endl<<endl;
    cout<<"Enter the name: ";
    cin>>arr1[i];
    cout<<"Enter the roll no: ";
    cin>>arr2[i];
    cout<<"Enter the course: ";
    cin>>arr3[i];
    cout<<"Enter the class: ";
    cin>>arr4[i];
    cout<<"Enter the contact: ";
    cin>>arr5[i];
 }
    total = total + choice; 
}   
}



void show()
{

   if (total == 0)
   {
      cout<<"\nNo data to show\n";
   }
   else
   { 
     for (int i = 0; i < total; i++)
     {
        cout<<"\n\nData of Students: "<<i+1<<endl<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Roll No.: "<<arr2[i]<<endl;
        cout<<"Course: "<<arr3[i]<<endl;
        cout<<"Class: "<<arr4[i]<<endl;
        cout<<"Contact: "<<arr5[i]<<endl;
     }
 
   }
}



void search()
{
   if (total == 0)
   {
      cout<<"\nNo data to show\n";
   }
   else
   { 
     string rollno;
     cout<<"\nEnter the roll no. of the student you want to search: ";
     cin>>rollno;
     for(int i = 0; i<total; i++)
     {
        if(rollno == arr2[i])
        {
           cout<<"\n\nData of Students: "<<i+1<<endl<<endl;
           cout<<"Name: "<<arr1[i]<<endl;
           cout<<"Roll No.: "<<arr2[i]<<endl;
           cout<<"Course: "<<arr3[i]<<endl;
           cout<<"Class: "<<arr4[i]<<endl;
           cout<<"Contact: "<<arr5[i]<<endl;
        }
      }
   }

}




void update(){

   if (total == 0)
   {
      cout<<"\nNo data to show\n";
   }
   else
   { 

string rollno;
   cout<<"\nEnter the roll no. of the student you want to search: ";
   cin>>rollno;
   for(int i = 0; i<total; i++)
   {
      if(rollno == arr2[i])
      {
         cout<<"Previous  data"<<endl<<endl;

         cout<<"\n\nData of Students: "<<i+1<<endl<<endl;
         cout<<"Name: "<<arr1[i]<<endl;
         cout<<"Roll No.: "<<arr2[i]<<endl;
         cout<<"Course: "<<arr3[i]<<endl;
         cout<<"Class: "<<arr4[i]<<endl;
         cout<<"Contact: "<<arr5[i]<<endl;

         cout<<"\n\nEnter the new data"<<endl<<endl;

         cout<<"Enter the name: ";
         cin>>arr1[i];
         cout<<"Enter the roll no: ";
         cin>>arr2[i];
         cout<<"Enter the course: ";
         cin>>arr3[i];
         cout<<"Enter the class: ";
         cin>>arr4[i];
         cout<<"Enter the contact: ";
         cin>>arr5[i];
      }
      
    }

   }
}

void deleterecord(){
   if (total == 0)
   {
      cout<<"\nNo data to show\n";
   }
   else
   { 
  int s, j;
  cout<<"Press 1 to delete all records"<<endl;
  cout<<"Press 2 to delete a specific record"<<endl;
  cin>>s;
   if(s==1){
       total=0;
       cout<<"All records deleted"<<endl;
   }
   else if(s==2){
      string rollno;
      cout<<"Enter the roll no. of the student you want to delete: ";
      cin>>rollno;
      for(int i=0;i<total;i++){
         if(rollno==arr2[i]){
         for ( j = i; j < total; j++)
             {
                arr1[j]= arr1[j+1];
                arr2[j]= arr2[j+1];
                arr3[j]= arr3[j+1];
                arr4[j]= arr4[j+1];
                arr5[j]= arr5[j+1];
             }
             total--;
             cout<<"Your required record is deleted";
         }
      }
   }    

}
}



int main(){

    int value;
    while(true)
    {
     cout<<"Press 1 to enter data"<<endl;
     cout<<"Press 2 to show  data"<<endl;
     cout<<"Press 3 to search data"<<endl;
     cout<<"Press 4 to update data"<<endl;
     cout<<"Press 5 to delete data"<<endl;
     cout<<"Press 6 to exit\n"<<endl;

     cout<<"Enter the number: ";
     cin>>value;



      switch(value)
      {

        case 1:
           enter();
           break;
        case 2:
           show();
           break;
        case 3:
           search();
           break;
        case 4:
           update();
           break;
        case 5:
           deleterecord();
           break;
        case 6:
           exit(0);
           break;
        default:
           cout<<"Invalid Input"<<endl;
           break;
      }
    }


   




    return 0;
}