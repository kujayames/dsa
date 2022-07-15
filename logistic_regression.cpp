#include <iostream>
#include "Eigen/Core"

using namespace std;


// Trains a logistic classifier

namespace ml {

// A logistic classifier.
class LogisticClassifier {
public:
  LogisticClassifier() {
  }

  void fit(const Eigen::MatrixXd X, const std::vector<bool>& y) {

  }

  const bool predict(const Eigen::MatrixXd x) {
  }
private:

};


}; // namespace ml

// To execute C++, please define "int main()"
int main() {
  auto words = { "Hello, ", "World!", "\n" };
  for (const string& word : words) {
    cout << word;
  }
  return 0;
}
