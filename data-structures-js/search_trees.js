var Node_ = /** @class */ (function () {
    function Node_(value) {
        this.value = value;
    }
    return Node_;
}());
var BinarySearchTree = /** @class */ (function () {
    function BinarySearchTree() {
        this.root = null;
    }
    BinarySearchTree.prototype.insert = function (value) {
        var newNode = new Node_(value);
        if (this.root === null) {
            this.root = newNode;
        }
        else {
            var currentNode = this.root;
            while (true) {
                if (value < currentNode.value) {
                    if (!currentNode.left) {
                        currentNode.left = newNode;
                        return this;
                    }
                    currentNode = currentNode.left;
                }
                else {
                    if (!currentNode.right) {
                        currentNode.right = newNode;
                        return this;
                    }
                    currentNode = currentNode.right;
                }
            }
        }
    };
    BinarySearchTree.prototype.lookup = function (value) {
        var currentNode = this.root;
        while (currentNode) {
            if (value === currentNode.value) {
                return currentNode;
            }
            else {
                if (value < currentNode.value) {
                    currentNode = currentNode.left;
                }
                else {
                    currentNode = currentNode.right;
                }
            }
        }
        return false;
    };
    return BinarySearchTree;
}());
var tree = new BinarySearchTree();
tree.insert(5);
tree.insert(7);
tree.insert(8);
tree.insert(4);
tree.insert(6);
// tree.remove(7);
console.log(tree.root);
