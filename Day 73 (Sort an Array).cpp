class Solution {
public:
	void sort(vector<int>& nums, int s, int e)
	{
		int mid=(s+e)/2;	
		int len1=mid-s+1;
		int len2=e-mid;
	
		int arr1[len1];
		int arr2[len2];
		int index=s;
		for(int i=0;i<len1;i++)
		{
			arr1[i]=nums[index];
			index++;
		}
		index=mid+1;
		for(int i=0;i<len2;i++)
		{	
			arr2[i]=nums[index];
			index++;
		}
		int index1=0;
		int index2=0;
		index=s;
		while(index1<len1 && index2<len2)
		{
			if(arr1[index1]<arr2[index2])
			{
				nums[index]=arr1[index1];
				index++;
				index1++;
			}
			else
			{
				nums[index]=arr2[index2];
				index++;
				index2++;
			}
		}
		while(index1<len1)
		{
			nums[index]=arr1[index1];
			index++;
			index1++;	
		}
		while(index2<len2)
		{
			nums[index]=arr2[index2];
			index++;
			index2++;
		}
	}

	void solve(vector<int>& nums, int s, int e)
	{	
		if(s>=e)
		{
			return ;
		}
		int mid=(s+e)/2;
		solve(nums,s,mid);
		solve(nums,mid+1,e);
		sort(nums,s,e);
	}

  vector<int> sortArray(vector<int>& nums) {
		solve(nums,0,nums.size()-1);
		return nums;		
    }
};
