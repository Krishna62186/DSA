class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int counter =0;
        int sum =0;
        for(int i =0; i<events.size(); i++){
            if(events[i] == "W"){
                counter++;
            }else if(events[i] == "WD" || events[i] == "NB"){
                sum++;
            }else{
                sum+= stoi(events[i]);
            }
            if(counter == 10){
                break;
            }
        }
        return {sum , counter};
    }
};