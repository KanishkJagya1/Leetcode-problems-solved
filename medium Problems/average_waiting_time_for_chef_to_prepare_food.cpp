// Solution:
// Date: 2021-07-25 12:00:00
// The averageWaitingTime function takes a vector of vectors customers as input and returns the average waiting time for the chef to prepare food.
// The function initializes two variables, available_at and totalwait, to 0.
// The function iterates through the customers vector and calculates the arrival time and preparation time for each customer.
// The function updates the value of available_at to the maximum of the current available time and the arrival time of the customer plus the preparation time.
// The function adds the waiting time for the customer to the totalwait variable.
// Finally, the function returns the average waiting time by dividing the total waiting time by the number of customers.    
// The time complexity of this solution is O(n), where n is the number of customers, as the function iterates through the customers vector once.
// The code is given below:
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int available_at = 0;
        double totalwait = 0;
        for(auto& customer : customers) {
            int arrival = customer[0], t = customer[1];
            available_at = max(available_at,arrival) + t;
            totalwait += available_at - arrival;
        }

        return (double) totalwait / customers.size();
    }
};