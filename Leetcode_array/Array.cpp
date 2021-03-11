// Remove Duplicates from Sorted+Array
// !!!!!!   Construct & print vector tutorial by myself !!!!!!!!!
#include <iostream>
#include <vector>

using namespace std;
int main(void)
{
    int num_duplicates = 0;
    int arr[] = {1, 3, 5, 5, 7};
    vector<int> nums(arr, arr + sizeof(arr)/ sizeof(int));  //Constructing the vector.

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            ++num_duplicates;
        } else {
            nums[i - num_duplicates] = nums[i];
        }
    }
    nums.erase(nums.end() - num_duplicates, nums.end());  // add this line!!!
// First way of printing the elements in vector(Here is vector<int> nums.) )
    cout << "Show vector nums: " << endl;
    for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

// Second way of printing the elements in vector(Here is vector<int> nums.) )
    for (int i = 0; i < nums.size(); i++){
        cout << ' ' << nums.at(i);
    }

        return 0;
}