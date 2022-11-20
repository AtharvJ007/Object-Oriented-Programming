/*
Cycle 2
Program 1 : Average
Done by : Atharv J
Reg No : 20220028
Date: 16/11/2021
*/

#include <iostream>
using namespace std;

class Solution
{
private:
    static int array[50];
    static int size;
    
public:

    void input(){
        cout<<"Enter size of array : ";
        cin>>size;
        cout<<"Enter array elements :";
        for(int i=0;i<size;i++){
            std::cin>>array[i];
        }

    }

    void static avarage(){
        float  sum =0;
        
        for(int i=0;i<size;i++){
            sum += array[i];
            
        }
       
        cout<<"Avarage of elements = "<<(sum/size)<<endl;
    }
    void multiplier(int k){
        for(int i=0;i<size;i++){
            array[i] = array[i]*k;
        }
        
    }
    void display(){
       
        for(int i=0;i<size;i++){
            cout<<"["<<array[i]<<"] ,";
        }
        cout<<endl;
    }
    void sort(int k){
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(array[i]>array[j]){
                    
                    int temp = array[i];
                    array[i]=array[j];
                    array[j]=temp;
                   
                }
            }
        }

        cout<<"Multi Array elements are : "<<endl;
        display();

        for(int i=0;i<size;i++){
            array[i] = array[i]/k;
        }
        cout<<"Array elements are : "<<endl;
        display();

    }
    
};
int Solution::array[];
int Solution::size;


int main(){
    int multi;
    Solution obj1;
    Solution obj2;
    Solution obj3;

    obj1.input();
    obj1.avarage();
    cout<<"Enter the multipiler : ";
    cin>>multi;
    obj2.multiplier(multi);
    obj1.avarage();
    obj3.sort(multi);
    
    return 0;
}

/*
SAMPLE INPUT AND OUTPUT : 

Enter size of array : 5
Enter array elements : 1 4 2 1 2
Avarage of elements = 2
Enter the multipiler : 4
Avarage of elements = 8
Multi Array elements are : 
[4] ,[4] ,[8] ,[8] ,[16] ,
Array elements are : 
[1] ,[1] ,[2] ,[2] ,[4] ,
*/