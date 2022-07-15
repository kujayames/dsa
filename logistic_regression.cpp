// Trains and uses a logistic classifier.
#include <cmath>
#include <exception>
#include <iostream>
#include <vector>

#include "Eigen/Core"

using namespace std;

namespace ml {

class LogisticClassifier {
public:
  LogisticClassifier(const double& threshold_true) : threshold_true_(threshold_true) {
    if (threshold_true < 0 || threshold_true > 1) {
      throw "bad threshold";
    }
  }

  // Fit the classifier to data.
  void fit(const std::vector<double>& x, const std::vector<bool>& y) {
    x_ = x;
    y_ = y;
  }

  // Predict whether the input is true/false given the training data.
  const bool predict(const double x) {
    if (x_.size() == 0) {
      throw "no data";
    }
    if (x > threshold_true_) {
      return true;
    }
    return false;
  }
private:
  std::vector<double> x_;
  std::vector<bool> y_;
  const double threshold_true_;
};


}; // namespace ml

int main() {
  auto words = { "Hello, ", "World!", "\n" };
  for (const string& word : words) {
    cout << word;
  }
  return 0;
}
