//Leetcode Problem : https://leetcode.com/problems/two-sum/description/
vector<int>two.sum(vector<int>nums&,int target)
        {vector<int>ans;
        for(int x=0:x<num;x++)
            {for(int y=x+1;y<nums.size();y++)
                {
                    if(num[x]+num[y]==target)
                    {
                        ans.push_back(x);
                        ans.push_back(y);
                        return(ans);
                    }
                }
            }
        }