#include <iostream>
#include <vector>
using namespace std;
int main()
{
   /* vector <char> vowels;  empty
    vector <char> vowels (5);  5 initialized to zero
    vector <char> vowels {'a','e','i','o','u'}; 
    
      cout << vowels[0] << endl;
      cout << vowels[4] << endl; */
      
     // vector <int> test_scores (3);
    //  vector <int> test_scores (3, 100);
 
        vector <int> test_scores {54, 65, 98};
        
        cout << "\n Test scores array syntax: " << endl;
        cout << test_scores [0] << endl;
        cout << test_scores [1] << endl;
        cout << test_scores [2] << endl;
        cout << test_scores [3] << endl;
        
        cout <<"\n Test scores vector syntax: "<< endl;
        
        cout << test_scores.at(0) << endl;
        cout << test_scores.at(1) << endl;
        cout << test_scores.at(2) << endl;
        cout << "==========================="<< endl;
        cout << "There are " << test_scores.size() << " scores in the vector" << endl;
        
        cout << "\nEnter three test scores: ";
        cin >> test_scores[0];
        cin >> test_scores[1];
        cin >> test_scores[2];
        
        cout << "\n Update test scores: " << endl;
        cout << test_scores.at(0) << endl;
        cout << test_scores.at(1) << endl;
        cout << test_scores.at(2) << endl;
        
        cout << "\n Enter a test score to add to the vector: ";
        
        int score_to_add {0};
        cin >> score_to_add;
        
        test_scores.push_back(score_to_add);
        
        cout << "\n Enter one more test score to add to the vector: ";
        
        cin >> score_to_add;
        
        test_scores.push_back(score_to_add);
        
        cout << "\n Test score are now: "<< endl;
        
        cout << test_scores[0] << endl;
        cout << test_scores[1] << endl;
        cout << test_scores[2] << endl;
        cout << test_scores[3] << endl;
        cout << test_scores[4] << endl;
        
        cout <<"\n There are now " <<test_scores.size()<< " scores in the vector" << endl;
        
        cout << test_scores[4] << endl;
        
        // 2D Vector
        
        vector <vector<int>> movie_ratings{
            {19,2,3,4},
            {1,23,4},
            {1,2,46,56}
        };
         cout <<"\n Here are the movie rating array syntax :" <<endl;
         cout << movie_ratings[0][0] << endl;
         cout << movie_ratings[1][1] << endl;
         cout << movie_ratings[2][2] << endl;
         cout << movie_ratings[2][3] << endl;
        
        cout <<" \n Here are the movie rating for using vector syntax : " << endl;
        cout << movie_ratings.at(0).at(0) << endl;
        cout << movie_ratings.at(1).at(1) << endl;
        cout << movie_ratings.at(2).at(2) << endl;
        cout << movie_ratings.at(2).at(3) << endl;
 
 return 0;
 
}
