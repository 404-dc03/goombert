#include <iostream>
#include <vector>

struct Foo {
    int x;

    Foo(int x_) { x = x_; }

  private:
    Foo(Foo&&) {}
    Foo(const Foo&) {}
};

int main() {
    std::vector<Foo> foos{};
    foos.resize(1);

    for (int i : foos) {
        foos.push_back(i);
        std::cout << foos.back();
    }
}
