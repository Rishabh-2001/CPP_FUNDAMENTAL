#include<iostream>
using namespace std;
class BST{
private:
    binarytreenode<int>*root;

public:
    BST(){
    root=NULL;
    }
    ~BST()
    {
        delete root;
    }
    private:
    binarytreenode<int>*helper_delete(binarytreenode<int>*root,int data)
    {
        if(root==NULL)
        {
            return NULL;
        }

//        if(!hasData(key))
//        {
//            return root;
//        }
         if(data<root->data)
         {
             root->left=helper_delete(root->left,data);
             return root;
         }
         else if(data>root->data)
         {
             root->right=helper_delete(root->right,data);
             return root;
         }
         else{
            if(root->data==data)
              {
                  if(root->left==NULL&&root->right==NULL)
                  {
                      delete root;
                      return NULL;
                  }
                  else if(root->left==NULL&&root->right!=NULL)
                  {
                      binarytreenode<int>*temp=root->right;
                      root->right=NULL;
                      delete root;
                      return temp;
                  }
                  else if(root->right==NULL&&root->left!=NULL)
                  {
                      binarytreenode<int>*temp=root->left;
                      root->left=NULL;
                      delete root;
                      return temp;
                  }
                  else{             //MOST IMPORTANT CASE
                       binarytreenode<int>*minnode=root->right;
                       while(minnode->left!=NULL)
                       {
                           minnode=minnode->left;
                       }
                       int rightminel=minnode->data;
                       root->data=rightminel;
                       root->right=helper_delete(root->right,rightminel);
                       return root;



                  }

              }
         }


            return root;
        }
        public:
    void print()
    {
        binarytreenode<int>*root=this->root;
        queue<binarytreenode<int>*>q;
        q.push(root);
        while(!q.empty())
        {
            binarytreenode<int>*front=q.front();
            q.pop();
            cout<<front->data<<":";
            if(front->left!=NULL)
            {
                cout<<" L "<<front->left->data;
                q.push(front->left);
            }
            if(front->right!=NULL)
            {
                cout<<" R "<<front->right->data;
                q.push(front->right);
            }
            cout<<endl;

        }

    }
    public:
    void deleteData(int data)
    {
       this->root=helper_delete(this->root,data);
    }
private:
    binarytreenode<int>* helper_insert(binarytreenode<int>*node,int data)
    {
        if(node==NULL)
        {
            binarytreenode<int>*newn=new binarytreenode<int>(data);
            return newn;
        }

        if(data<node->data)
        {
           node->left=helper_insert(node->left,data);
        }
        else
        {
          node->right=helper_insert(node->right,data);
        }
        return node;
    }
    public:
    void insert(int data)
    {
        this->root=helper_insert(this->root,data);
    }
private:
    bool helper(binarytreenode<int>*node,int key)
    {
        if(node==NULL)
        {
            return false;
        }
        if(node->data==key)
        {
            return true;
        }
       else if(node->data>key)
        {
            return helper(node->left,key);
        }
        else{
            return helper(root->right,key);
        }
    }

    public:
       bool hasData(int key)
        {
            return helper(root,key);
        }

};
