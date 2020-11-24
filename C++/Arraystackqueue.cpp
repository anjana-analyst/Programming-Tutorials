#include <iostream>

using namespace std;

//array class
class array {

    protected:
    int arr[100];

    public:

    void disp(){

    }

};

//stack class
class stack : public array {

    int top=-1;

    public:

    //insert element
    void push(int n) {

        if(top == 100) {
            cout<<"Overflow Error"<<endl;
        } else {
            top++;
            arr[top] = n;
        }
    }

    //delete element
    void pop() {
        
        if ( top == -1) {
            cout<<"Underflow Error"<<endl;
        } else {
            cout<<arr[top]<<" is being deleted"<<endl;
            top--;
        }
    }

    //display stack
    void getElem() {

        if ( top == -1) {
            cout<<"Underflow Error"<<endl;
        } else {
            
            for(int i=top;i>=0;i--) {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

};


//queue class
class queue : public array {

    int front=-1,rear=-1;

    public: 

    //insert element
    void enque( int n) {
        
        if ( rear == 100 ) {

            cout<<"Overflow error"<<endl;

        } else if ( rear == front && rear == -1) {

            front++;
            arr[++rear] = n;
        
        } else { 

            arr[++rear] = n;
        }

    }

    //delete element
    void deque() {

        if ( front == -1) {

            cout<<"Underflow Error"<<endl;

        } else if ( front == rear ) {
            cout<<arr[front]<<" is being deleted"<<endl;
            front = -1; 
            rear = -1;
        } else {
            cout<<arr[front]<<" is being deleted"<<endl;
            front++;
        }
    }

    //display queue
    void dispElem() {

        if(front == -1 && front == rear ){

            cout<<"Underflow Error"<<endl;

        } else {

            for(int i = front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

};



int main() {

    //some shitty menu
    int n;
    cout<<"  MENU   "<<endl;
    cout<<" 1. stack  "<<endl;
    cout<<" 2. queue  "<<endl;
    cout<<" 3. exit "<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>n;

    switch(n){

        //stack operations
        case 1:{
            int flag=1;
            stack s;
            while(flag){
                
                //sub shitty menu for stack
                int ch;
                cout<<" 1. push "<<endl;
                cout<<" 2.pop "<<endl;
                cout<<" 3.print "<<endl;
                cout<<" 4.exit "<<endl;
                cout<<"Enter your Choice : ";
                cin>>ch;

                switch(ch){
                    case 1:{
                        int no;
                        cout<<"Enter the number to be entered : ";
                        cin>>no;
                        s.push(no);
                        break;
                    }

                    case 2: {
                        s.pop();
                        break;
                    }

                    case 3: {
                        s.getElem();
                        break;
                    }

                    case 4: {
                        flag=0;
                        break;
                    }

                    default : {
                        cout<<"Enter a valid choice "<<endl; 
                    }
                }

            }

            break;
        }

        //queue operations
        case 2: {
            int flag=1;
            queue q;
            while(flag){

                //sub shitty menu for queue
                int ch;
                cout<<" 1. enque "<<endl;
                cout<<" 2. deque "<<endl;
                cout<<" 3. print "<<endl;
                cout<<" 4. exit "<<endl;
                cout<<"Enter your Choice";
                cin>>ch;

                switch(ch){
                    case 1:{
                        int no;
                        cout<<"Enter the number to be entered : ";
                        cin>>no;
                        q.enque(no);
                        break;
                    }

                    case 2: {
                        q.deque();
                        break;
                    }

                    case 3: {
                        q.dispElem();
                        break;
                    }

                    case 4: {
                        flag=0;
                        break;
                    }

                    default : {
                        cout<<"Enter a valid choice "<<endl; 
                    }
                }

            }

            break;
        }

        case 3: {

            cout<<"terminating"<<endl;
            break;

        }

    }

    return 0;

}   
