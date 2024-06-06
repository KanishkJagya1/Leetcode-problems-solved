//Important to understand the approach using the maps in this question
// The hand arrays should always be a multiple of groupsize for the possibility of arrays of groupsize with consecutive nunmbers
// --> Iterate over each card in the map to count the occurances
// --> If the current card's count is greater than zero then start forming a group using this card 
// --> for each card in the group decrement the count in the map 
// --> If at any point the frequency of the card needed to make the group is less than zero then return false
// --> Else return that the solution is possible and true for hands

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        // sort(hand.begin(),hand.end());  # there will be no effect even after using the sort function
        if(hand.size()%groupSize != 0) {
            return false;
        }
        map<int,int> cardCount;
        for(int card:hand) {
            cardCount[card]++;
        }

        for(auto& [card,count] : cardCount) {
            if(count>0) {
                for(int i=1; i<groupSize; i++) {
                    cardCount[card + i] -= count;
                    if(cardCount[card + i] < 0) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};