int largestCommonAncestor(BinaryTreeNode<int>* root,int data1,int data2) 
{ 
    //If any of the values of the two given node data is equal to the root data, 
    //return the root’s data as it is definitely the largest common ancestor.
    if(root->data == data1 || root->data == data2) 
    {
        return root->data;
    }

    //If the root’s data is more than minimum of the two given data and less than the maximum of the two given data, 
    // return the root’s data as it is the largest common ancestor.  
    else if(root->data > data1 && root->data > data2)
    {
        return root->data;
    }

    // If both the given data values are less than the root’s data, 
    // this clearly means that root is the common ancestor along with other common ancestors in the left subtree. 
    else if(root->data > min(data1, data2) && root->data< max(data1,data2)) 
    {
        return root->data;
    }

    // If none of the above cases satisfies, then, along with the root, 
    // the possible ancestors are in the right subtree. 
    else 
    {
        return largestCommonAncestor(root->right, data1, data2);
    }

}
