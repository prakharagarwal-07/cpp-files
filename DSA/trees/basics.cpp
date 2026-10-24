#include <iostream>
#include <vector>
#include <queue>
#include <map>
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

    int height( Node* root ){

        if( root == NULL ){

            return 0;

        }

        int leftHt = height( root->left );
        int rightHt = height( root->right );

        return max( leftHt , rightHt )+1;
    }

    int countNodes( Node* root ){

        if( root == NULL ){

            return 0;
        }

        int leftNode = countNodes( root->left );
        int rightNode = countNodes( root->right );

        return leftNode + rightNode + 1;
    }

    int sumNodes( Node* root ){

        if( root == NULL ){

            return 0;
        }

        int leftSum = sumNodes( root->left );
        int rightSum = sumNodes( root->right );

        return leftSum + rightSum + root->val;
    }





    void topView( Node* root ){

        queue<pair<Node* , int>> q;

        map<int , int> m;

        q.push( { root , 0 } );

        int dist = 0;

        while( !q.empty() ){

            Node* curr = q.front().first;
            int currDist = q.front().second;

            if( m.find(currDist) == m.end() ){

                m[currDist] = curr->val;

            }

            q.pop();


             
            if( curr->left != NULL ){

                
                q.push( { curr->left , currDist-1 } );
            }

            if( curr->right != NULL ){

            
                q.push( { curr->right , currDist+1 } );
            }
        }

        for( auto x: m ){

            cout << x.second << " ";
        }




    }


int main(){

    vector<int> preBuild = { 1 , 2 , 8 , -1 , -1 , 3 , -1 , -1 , 4 , -1 , 5 , -1 ,-1  };
    
    Node* root = build( preBuild );

    cout << height( root ) << endl;

    cout << "number of nodes - " << countNodes( root ) << endl;

    cout << sumNodes(root) << endl;

    topView( root );


}   