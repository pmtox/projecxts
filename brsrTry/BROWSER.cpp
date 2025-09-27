#include <iostream>
#include <string>
#include <vector>

struct Node {
    std::string tag;
    std::vector<Node*> children;

    Node(const std::string& t) : tag(t) {}
    ~Node() {
        for (size_t i = 0; i < children.size(); ++i) {
            delete children[i];
        }
    }
};

Node* parseHTML(const std::string& html) {
    Node* root = new Node("html");
    Node* body = new Node("body");
    Node* p = new Node("p");
    p->children.push_back(new Node("text: Hello, World!"));
    body->children.push_back(p);
    root->children.push_back(body);
    return root;
}

void printDOM(Node* node, int indent = 0) {
    std::string pad(indent, ' ');
    std::cout << pad << "<" << node->tag << ">\n";
    for (size_t i = 0; i < node->children.size(); ++i) {
        printDOM(node->children[i], indent + 2);
    }
}

int main() {
    std::string html = "<html><body><p>Hello, World!</p></body></html>";
    Node* dom = parseHTML(html);

    std::cout << "DOM Tree:\n";
    printDOM(dom);

    delete dom;
    return 0;
}

