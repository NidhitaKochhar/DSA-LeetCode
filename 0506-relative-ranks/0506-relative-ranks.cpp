class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        priority_queue<pair<int,int> >pq;
        vector<string>ans(score.size());

        int i=0; 
        for(int x:score){ 
            pq.push(make_pair(x,i++));
        }
        int count=0; 
        while(!pq.empty()){
           count++;
           if(count==1){
            ans[pq.top().second]="Gold Medal";
            pq.pop();
           }
           else if(count==2){
            ans[pq.top().second]="Silver Medal";
            pq.pop();
           }
           else if(count==3){
            ans[pq.top().second]="Bronze Medal";
            pq.pop();
           }
           else{
            ans[pq.top().second]=to_string(count);
            pq.pop(); 
           }
        }
             return ans;
    }
};       