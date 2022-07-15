#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
#include <optional>
#include <vector>

using namespace std;

namespace graph {

class Node {
public:
  Node(string data) : data_(data){}

  void add_neighbor(Node& node) {
    neighbors_.emplace_back(&node);
  }

  void print_neighbors() {
    for (const auto neighbor : neighbors_) {
      std::cout << neighbor->data() << "\n";
    }
  }

  string data() {
    return data_;
  }
private:
  vector<Node*> neighbors_;
  string data_;
};

TEST_CASE("Can construct graph") {
  Node node1{"1"};
  Node node2{"2"};

  node1.add_neighbor(node2);

  node1.print_neighbors();
}

}
