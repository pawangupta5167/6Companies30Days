//https://leetcode.com/problems/find-in-mountain-array

int bin_search1(int st,int en,MountainArray &m,int t)

    {

        while(st<=en)

        {

            int mid=(st+en)/2;

            int val=m.get(mid);

            if(val==t) return mid;

            if(val<t)

            {

                st=mid+1;

            }

            else en=mid-1;

        }

        return -1;

    }

    int bin_search2(int st,int en,MountainArray &m,int t)

    {

        while(st<=en)

        {

            int mid=(st+en)/2;

            int val=m.get(mid);

            if(val==t) return mid;

            if(val>t)

            {

                st=mid+1;

            }

            else en=mid-1;

        }

        return -1;

    }

    int findInMountainArray(int t, MountainArray &m) {

        int n=m.length();

        int st=0,en=n-1;

        while(st<en)

        {

            int mid=(en+st)/2;

            if(m.get(mid)<m.get(mid+1))

            {

                st=mid+1;

            }

            else

            {

                en=mid;

            }

        }

        int ans=bin_search1(0,st,m,t);

        return ans!=-1?ans:bin_search2(st+1,n-1,m,t);

    }
