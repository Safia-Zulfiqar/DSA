#postOrder traversal

class BinaryTreeNode:
    def __init__(self,data):
        self.data=data
        self.leftchild=None
        self.rightchild=None
    
def insert(root,newvalue):
        if root is None:
            root=BinaryTreeNode(newvalue)
            return root
        
        if newvalue<root.data:
            root.leftchild=insert(root.leftchild,newvalue)
        else:
            root.rightchild=insert(root.rightchild,newvalue)
        return root

def postorder(root):
    if root is None:
        return
    postorder(root.leftchild)
    postorder(root.rightchild)
    print(root.data,end=",")


root=insert(None,50)
insert(root,20)
insert(root,53)
insert(root,11)
insert(root,22)
insert(root,52)
insert(root,78)

print("postorder traversal of given binary tree is:")
postorder(root)
