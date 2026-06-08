#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for std::transform (case handling)
#include "calculator.hpp"

/*
 * Function: print_error
 * Description: Prints an error message explaining that the user supplied
 * an invalid arithmetic expression.
 */
void print_error() {
    std::cout << "That isn't a valid arithmetic expression.\n";
}

/*
 * Function: prompt_for_arithmetic_expression
 * Description: Prompts the user for an arithmetic expression and returns
 * the trimmed input.
 */
std::string prompt_for_arithmetic_expression() {
    std::cout << "Enter a valid arithmetic expression: ";
    std::string user_input;
    std::getline(std::cin, user_input);
    
    // Trim leading and trailing whitespace
    size_t start = user_input.find_first_not_of(" \t");
    if (start == std::string::npos) return "";
    
    size_t end = user_input.find_last_not_of(" \t");
    return user_input.substr(start, end - start + 1);
}

/*
 * Function: prompt_for_retry
 * Description: Asks the user whether they'd like to enter another expression.
 * Returns true if user wants to continue.
 */
bool prompt_for_retry() {
    std::cout << "Would you like to enter another expression? (Y/n): ";
    std::string user_input;
    std::getline(std::cin, user_input);
    
    if (user_input.empty()) return true;
    
    // Convert to uppercase for case-insensitive check
    std::transform(user_input.begin(), user_input.end(), user_input.begin(),
                   [](unsigned char c){ return std::toupper(c); });
    
    return user_input[0] == 'Y';
}

/*
 * Function: print_history_header
 * Description: Prints the header that precedes the history of values.
 */
void print_history_header() {
    std::cout << "\nHistory of computed values:\n";
}

/*
 * Function: print_history
 * Description: Prints the history of computed values.
 */
void print_history(const std::vector<double>& history) {
    for (const auto& value : history) {
        std::cout << value << '\n';
    }
}

int main() {
    std::vector<double> history;
    history.reserve(100);  // Pre-allocate for efficiency
    
    bool go_again = true;
    
    while (go_again) {
        std::string expression = prompt_for_arithmetic_expression();
        
        if (expression.empty()) {
            print_error();
            go_again = prompt_for_retry();
            continue;
        }
        
        // Check if expression is valid
        if (is_valid_expression(expression)) {
            double value = compute_value(expression);
            std::cout << value << '\n';
            
            // Store in history (limit to 100 entries)
            if (history.size() < 100) {
                history.push_back(value);
            }
            
            go_again = prompt_for_retry();
        } else {
            print_error();
            go_again = true;  // Stay in loop after error
        }
    }
    
    // Print history at the end
    if (!history.empty()) {
        print_history_header();
        print_history(history);
    } else {
        std::cout << "\nNo valid expressions were evaluated.\n";
    }
    
    return 0;
}