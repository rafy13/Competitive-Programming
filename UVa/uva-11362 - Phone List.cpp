#include<iostream>
#include<string.h>
using namespace std;
struct node
{
	bool endmark;
	node *next[10+1];
	node()
	{
		endmark=false;
		for(int i=0;i<10;i++) next[i]=NULL;
	}
};

int insert(char *str,node* root)
{
	node *curr=root;
	int f=0, len = strlen(str);
	for(int i=0;i<len;i++)
	{
		int id=str[i]-'0';

		if(curr->next[id]==NULL)
		{
		    curr->next[id]=new node();
		    f=1;
		}
		else if(curr->next[id]->endmark==true)
            return 0;

		curr=curr->next[id];
	}
	curr->endmark=true;
	return f;

}
void phone()
{
    int t,f=1;
    cin>>t;
    node* root = new node();
    while(t--)
    {
        char ph_no[11];
        cin>>ph_no;
        if(!f)
            continue;
        f=insert(ph_no,root);

    }
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
	int N;
	cin>>N;
	while(N--)
    {
        phone();
    }
    return 0;
}
