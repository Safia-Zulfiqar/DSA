#preorder traversal

class BinaryTreeNode:
    def __init__(self,data):
        self.data=data
        self.leftchild=None
        self.rightchild=None

def insert(root,newValue):
        if root is None:
            root=BinaryTreeNode(newValue)
            return root
        
        if newValue<root.data:
            root.leftchild=insert(root.leftchild,newValue)
        else:
            root.rightchild=insert(root.rightchild,newValue)
        return root

def preorder(root):
        if root is None:
            return
        print(root.data,end=',')

        preorder(root.leftchild)
        preorder(root.rightchild)


root=insert(None,50)
insert(root,20)
insert(root,53)
insert(root,11)
insert(root,22)
insert(root,52)
insert(root,78)

print("the preorder traversal of given binary tree:")
preorder(root)
