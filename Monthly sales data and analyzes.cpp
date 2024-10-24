// Header
#include <iostream>
#include <iomanip>
#include <vector> // Include vector library

using namespace std;

// Function for calculating total sales
int calculateOverall_sales(const vector<int>& amountSales) {
    int overall = 0; 
    for (int sale : amountSales) {
        overall += sale; 
    }
    return overall; // Return total sales
}

// Function for calculating the average sales
double calculateAverage_sales(const vector<int>& amountSales) {
    int total = calculateOverall_sales(amountSales); 
    return static_cast<double>(total) / amountSales.size(); 
}

// Function to find the lowest sales amount
int lowestSales(const vector<int>& amountSales) {
    int min_sales = amountSales[0]; 
    for (int sale : amountSales) {
        if (sale < min_sales) { 
            min_sales = sale;
        }
    }
    return min_sales; // Return the lowest sales amount
}

// Function to find the highest sales amount
int highestSales(const vector<int>& amountSales) {
    int max_sales = amountSales[0]; // Start with the first sales amount
    for (int sale : amountSales) {
        if (sale > max_sales) { 
            max_sales = sale;
        }
    }
    return max_sales; // Return the highest sales amount
}

// Function to get sales input from the user
void getUserInput(vector<int>& amountSales) {
    for (int i = 0; i < amountSales.size(); ++i) {
        cout << "Enter sales for day " << (i + 1) << ": ";
        cin >> amountSales[i]; 
    }
}

int main() {
    int size; 

    // Get the number of days for sales data
    cout << "Enter the number of days for sales data: ";
    cin >> size;

    vector<int> amountSales(size); 

    // Get user input for sales data
    getUserInput(amountSales);

    // Analyzing the sales data
    cout << "\nAnalysis for the Sales Data:" << endl;
    int total_sales = calculateOverall_sales(amountSales);
    double averageSales = calculateAverage_sales(amountSales);
    int lowestSalesValue = lowestSales(amountSales);
    int highestSalesValue = highestSales(amountSales);

    // Print results
    cout << fixed << setprecision(2); // Set precision for monetary values
    cout << " Total Sales: $" << total_sales << endl
        << " Average Sales: $" << averageSales << endl
        << " Lowest Sales: $" << lowestSalesValue << endl
        << " Highest Sales: $" << highestSalesValue << endl;

    return 0; // Return 0
}
