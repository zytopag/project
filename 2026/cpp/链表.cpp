#include <iostream>
#include <cstring>
using namespace std;

struct student{
    string num;
    string name;
    int score;
    student* next;
    
    student(string number,string nam,int scr):
        num(number),name(nam),score(scr),next(NULL){};
};

class StudentList{
    private:
        student* head;
    public:
        StudentList():head(NULL){};
        
        void Init_List(){
            cout<<"Input student information(end of num<0)"<<endl;
            cout<<"num "<<"name "<<"score "<<":"<<endl;
            string name,number;
            int score;
            do{
                cin>>number>>name>>score;
                if(score<0){
                    return;
                }
                student* newnode = new student(number,name,score);
                
                if(head == nullptr){
                    head = newnode;
                    continue;
                }
                
                student* temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;//find final element
                }
                
                temp->next = newnode;
                
            }while(score>0);
        }
        
        void print(){
            student* temp = head;
            if(temp==NULL){
                cout<<"no element"<<endl;
                return;
            }
            while(temp!=NULL){
                cout<<"number:"<<temp->num<<","<<"name:"<<temp->name<<","<<"score:"<<temp->score<<endl;
                temp = temp->next;
            }
            cout<<endl;
        }
        
        int student_num(){
            student* temp = head;
            int count_s = 0;
            while(temp != NULL){
                temp = temp->next;
                count_s++;
            }
            return count_s;
        }
        
        void Delete_Student(string n){
            if(head == NULL){
                cout<<"Not found!"<<endl;
                return;
            }
            
            if(head->num == n){
                student* todelete = head;
                head = head->next;
                delete todelete;
                cout<<"success"<<endl;
                print();
                return;
            }
            
            student* temp = head;
            while(temp->next != NULL&&temp->next->num != n){
                temp = temp->next;
            }
            
            if(temp->next == NULL){
                cout<<"Not found!"<<endl;
                return;
            }else{
                student* todelete = temp->next;
                temp->next = temp->next->next;
                delete todelete;
                cout<<"success"<<endl;
                cout << "The number of the students:" << student_num() << "\n"; 
                print();
            }
        }
        
        ~StudentList(){
            student*temp = head;
            while(temp!=NULL){
                student* next = temp->next;
                delete temp;
                temp = next;
            }
    	}
};

int main()
{ 
    StudentList L; 
	L.Init_List();
	L.print();
	cout << "The number of the students:" << L.student_num() << "\n"; 
	string number;
	cout << "Input delete Num:" << endl;
	cin>>number;
	L.Delete_Student(number);
	return 0;
}
