#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node* prev;
		node(int d){
			data=d; next=NULL;prev=NULL;
		}};
		void forwardtraversing(node *n){
			node *temp=n;
			while(temp!=NULL){
				cout<<temp->data<<"--->>";
					temp=temp->next;	}	cout<<endl;}
	
void search(node *head,int num){
	node *temp=head;    
	int count=1;
	while(temp!=NULL){
		if(temp->data==num){
			cout<<" THE NUMBER U ENTERED ["<<num<<"]  AT NODE=["<<count<<"]"<<endl;
			return;
		}
		count++;
		temp=temp->next;
		}
		cout<<" THE NUMBER U ENTERED IS NOT PRESENT IN THE LINKLIST "<<endl;}
		int main(){
cout<<" Code is written by Muhammad Ishaq Registration num=21PWELE5902 SEC= [C] "<<endl;
			node *head;node *tail;
			node *n=new node(92);
			n->next=NULL;
			n->prev=NULL;
			head=n;tail=n;
			node *n2=new node(55);
			n2->next=NULL;
			n2->prev=tail;
			tail->next=n2;
			tail=n2;
			node *n3=new node(21);
			n3->next=NULL;
			n3->prev=tail;
			tail->next=n3;
			tail=n3;
			node *n4=new node(7);
			n4->next=NULL;
			n4->prev=tail;
			tail->next=n4;
			tail=n4;
			node *n5=new node(98);
			n5->next=NULL;
			n5->prev=tail;
			tail->next=n5;
			tail=n5;
			cout<<" ENTER THE NUMBER U WANT TO SEARCH "<<endl;
			int x; cin>>x;
			search(head,x);
				cout<<" THE TOTAL NODE ARE THE FOLLWING  U CAN VERIFY U R ANSWER  "<<endl;
	forwardtraversing(head);
		 	return 0;}
