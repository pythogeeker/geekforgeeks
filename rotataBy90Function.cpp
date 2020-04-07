void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=i+1;j<matrix.size();j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<matrix.size();i++)
    {
        int low=0,high=matrix.size()-1;
        while(low<high)
            {
                swap(matrix[low][i],matrix[high][i]);
                low++,high--;
            }
    }
}
