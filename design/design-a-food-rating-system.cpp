class FoodRatings {
    unordered_map<string,string>foodtocuisine;
    unordered_map<string, int>foodtorating;
    unordered_map<string,set<pair<int,string>>>cuisinetofoods;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0; i<foods.size(); i++){
            foodtocuisine[foods[i]]=cuisines[i];
            foodtorating[foods[i]]=ratings[i];
            cuisinetofoods[cuisines[i]].insert({-ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine= foodtocuisine[food];
        int oldrating=foodtorating[food];
        foodtorating[food]=newRating;
        cuisinetofoods[cuisine].erase({-oldrating,food});
        cuisinetofoods[cuisine].insert({-newRating,food});
        
    }
    
    string highestRated(string cuisine) {
        return cuisinetofoods[cuisine].begin()->second;
        
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */