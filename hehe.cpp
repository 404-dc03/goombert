#include <iostream>
#include <vector>

using namespace std;

struct Foo {
    int x;

    Foo(int x_) { x = x_; }

  private:
    Foo(Foo&&) {}
    Foo(const Foo&) {}
};

int main() {
    vector<Foo> foos{};
    foos.resize(1);

    for (int i : foos) {
        foos.push_back(i);
        cout << foos.back();
    }
}
