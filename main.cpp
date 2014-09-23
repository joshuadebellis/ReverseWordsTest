#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <ios>

int main()
 {
    std::string word;
    std::vector<std::string> WordVector;
    std::vector<std::string> ReversedWordVector;

    //Reverse the initial text file
    std::ifstream input_file("TheReverseWordTest.txt", std::ios_base::binary);
    std::ofstream output_file("TheReverseWordTest_reversed.txt", std::ios_base::binary);
    std::istreambuf_iterator<char> input_begin(input_file);
    std::istreambuf_iterator<char> input_end;
    std::ostreambuf_iterator<char> output_begin(output_file);
    std::vector<char> input_data(input_begin, input_end);
    std::reverse_copy(input_data.begin(), input_data.end(), output_begin);
    input_file.close();
    output_file.close();
    
    //Construct a vector of words
    std::ifstream TestFile("TheReverseWordTest.txt");
    while (TestFile >> word) {
        WordVector.push_back(word);
    }
    TestFile.close();
    
    //Construct a vector of reversed words
    std::ifstream ReversedFile("TheReverseWordTest_reversed.txt");
    while (ReversedFile >> word) {
        ReversedWordVector.push_back(word);
    }
    ReversedFile.close();
    
    // Allocate space for intersection
    std::vector<std::string> IntersectionVector;
    // Sort as required by std::set_intersection
    std::sort(WordVector.begin(), WordVector.end());
    std::sort(ReversedWordVector.begin(), ReversedWordVector.end());
    // Compute the set intersection
    std::set_intersection(WordVector.begin(), WordVector.end(), ReversedWordVector.begin(), ReversedWordVector.end(), std::back_inserter(IntersectionVector));
    
    
  
    
    
    for (std::string n : IntersectionVector)
        std::cout << n << std::endl;

    return 0;

}














