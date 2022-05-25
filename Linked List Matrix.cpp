Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    vector<vector<Node*>>v(n,vector<Node*>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
           v[i][j]=new Node(mat[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            v[i][j]->right=j+1<n?v[i][j+1]:NULL;
            v[i][j]->down=i+1<n?v[i+1][j]:NULL;
        }
    }
    return v[0][0];
}
