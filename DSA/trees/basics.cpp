#include <iostream>
#include <vector>
using namespace std;


class Node{
public:    

    int val;
    Node* left;
    Node* right;


    Node( int x ){

        val = x;
        left = right = NULL;

    }





};

int idx = -1;

    Node* build( vector<int> &nums ){

        idx++;


        if( nums[idx] == -1 ){

            return NULL;
        }

        

        Node* root = new Node(nums[idx]);

        root->left = build( nums );                                    
        root->right = build( nums );


        return root;

        
    }




    void preOrder( Node* root ){                     //preorder traversal

        if( root == NULL  ){

            return;
        }

        cout << root->val << " ";

        preOrder( root->left );
        preOrder( root->right );


    }

    void inOrder( Node* root ){                       //inorder traversal

        if( root == NULL ){

            return;
        }

        inOrder( root->left );
        cout << root->val << " ";

        inOrder( root->right );


    }      
    
    
    void postOrder( Node* root ){            //postorder traversal

        if( root == NULL ){

            return;
        }

        postOrder( root->left );
        postOrder( root->right );

        cout << root->val << " ";



    }

    void LevelOrder( Node* root ){           //levelOrder traversal

        queue<Node*> q;

        q.push(root);
        q.push(NULL);

        while( !q.empty() ){

            Node* curr = q.front();
            q.pop();

            if( curr == NULL ){          // line wise levelorder

                if( !q.empty() ){

                    q.push(NULL);

                    cout << endl;

                    continue;
                }

                else{ 

                    break;
                }


            }

            cout << curr->val << " ";

            if( curr->left != NULL ){

                q.push(curr->left);
            }

            if( curr->right != NULL ){

                q.push( curr->right );

            }







        }
    }


int main(){

    vector<int> preBuild = { 1 , 2 , -1 , -1  , 3 , 4 , -1 , -1 , 5 , -1 ,-1  };
    
    Node* root = build( preBuild );

    LevelOrder( root );


}