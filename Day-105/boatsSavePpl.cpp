int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());

        int i = 0, j = people.size()-1;
        int boat = 0;
        while(i<=j){
            if(i==j){
                boat++;
                i++;
                j--;
            }
            else if(people[i]+people[j]<=limit){
                boat++;
                i++;
                j--;
            }
            else{
                boat++;
                j--;
            }
        }

        return boat;
    }
