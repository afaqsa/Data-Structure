
#include <iostream>
using namespace std;

// Class to represent the Nodes
class Node
{
public:
	string data;
	Node *left = NULL, *right = NULL;
	Node(string value)
	{
		data = value;
	}
};

// function that return the integer value of a given string
int StringToInteger(string s)
{
	int value = 0;

	// Check if the integral value is negative or not
	if(s[0]!='-'){
		for (unsigned int i=0; i<s.length(); i++)
			     value = value*10 + (int(s[i])-48);
        }
	else{
		for (unsigned int i=1; i<s.length(); i++)
			     value = value*10 + (int(s[i])-48);

        value = value*-1;
    }
	return value;
}
// Function that Evaluation the Expression
int Solve(Node* root)
{
	if (!root)
		return 0;


	if (!root->left && !root->right){
        cout<<root->data<<" ";
		return StringToInteger(root->data);

}

	int firstNum = Solve(root->left);
	int SecondNum = Solve(root->right);
    cout<<root->data<<" ";
	if (root->data=="+")
		return firstNum+SecondNum;

	if (root->data=="-")
		return firstNum-SecondNum;

	if (root->data=="*")
		return firstNum*SecondNum;

	return firstNum/SecondNum;
}


int main()
{

	Node *root = new Node("+");
	root->left = new Node("/");
    root->right = new Node("*");

	root->left->left = new Node("*");
	root->left->right = new Node("-");
	root->right->left = new Node("5");
	root->right->right = new Node("-");

    root->left->left->left = new Node("2");
    root->left->left->right = new Node("3");
    root->left->right->left = new Node("2");
    root->left->right->right = new Node("1");

    root->right->right->left = new Node("4");
    root->right->right->right = new Node("1");
    cout<<"Post Orde is :: ";
    int ans = Solve(root);
	cout << "\nThe Answer is "<< ans << endl;

	return 0;
}
