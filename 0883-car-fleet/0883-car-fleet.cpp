class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) 
    {       
        int n=position.size();
       vector<pair<int,int>> carsInfo;
       for(int i=0;i<n;i++)
        carsInfo.push_back({ position[i] , speed[i] });

       // will sort the carsInfo vector in a decending order
       sort(carsInfo.begin(),carsInfo.end(), greater< pair<int,int> >()); 



       double prvTime=-1;
       int fleet=0;
       for(int i=0;i<carsInfo.size();i++)
       {
          int pos=carsInfo[i].first;
          int spd=carsInfo[i].second;

          double time=static_cast<double>(target-pos)/spd;
          if(time>prvTime)
          {
            fleet++;
            prvTime=time;
          }
       }
       return fleet;
    }
};