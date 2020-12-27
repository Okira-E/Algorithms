class Node_ {
    public value: number;
    public left: Node_;
    public right: Node_;

    constructor(value) {
        this.value = value;
    } 
}


class BinarySearchTree {
    public root: Node_;

    constructor() {
        this.root = null;
    }

    insert(value) {
        const newNode: Node_ = new Node_(value);

        if (this.root === null) {
            this.root = newNode;
        } else {
            let currentNode = this.root;
            while (true) {
                if (value < currentNode.value) {
                    if (!currentNode.left) {
                        currentNode.left = newNode;
                        return this;
                    }
                    currentNode = currentNode.left;
                } else {
                    if (!currentNode.right) {
                        currentNode.right = newNode;
                        return this;
                    }
                    currentNode = currentNode.right;
                }
            }
        }
    }

    lookup(value) {
        let currentNode = this.root;
        while (currentNode) {
            if (value === currentNode.value) {
                return currentNode;
            } else {
                if (value < currentNode.value) {
                    currentNode = currentNode.left;
                } else {
                    currentNode = currentNode.right;
                }
            }
        }
        return false;
    }

    // remove(value) {
    //     let currentNode = this.root;
    //     let parentNode: Node_;
    //     let parentNodeRight: Node_;
    //     while (currentNode) {
    //         if (value === currentNode.value) {
    //             parentNode = currentNode;
    //             parentNodeRight = currentNode.right;
    //             while (currentNode.right) {
    //                 currentNode = currentNode.right;
    //             }
    //             while (currentNode.left) {
    //                 currentNode = currentNode.left;
    //             }
    //             parentNode = currentNode;
    //             parentNode.right = parentNodeRight;
    //             return parentNode;
    //         }
    //         if (value < currentNode.value) {
    //             currentNode = currentNode.left;
    //         } else {
    //             currentNode = currentNode.right;
    //         }
    //     }
    // }
}

const tree = new BinarySearchTree();

tree.insert(5);
tree.insert(7);
tree.insert(8);
tree.insert(4);
tree.insert(6);

// tree.remove(7);

console.log(tree.root);