"use strict";


class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}


class LinkedList {
    constructor(value) {
        this.head = {
            value,
            next: null
        };
        this.tail = this.head;
        this.length = 1;
    }

    static _traverseToIndex(index) {
        let currentNode = this.head;
        let i = 0;
        while (i !== index) {
            currentNode = currentNode.next;
            i++;
        }
        return currentNode;
    }

    prepend(value) {
        // head: {"apples", next: {"grapes", next: null}}
        // tail: {"grapes", null}
        const node = new Node(value);
        node.next = this.head;
        this.head = node;
        this.length++;
    }

    append(value) {
        this.tail.next = {
            value,
            next: null
        };
        this.tail = this.tail.next;
        this.length++;
        return this.tail;
    }

    insert(pos, value) {
    // this.head = { value: 'lemon', next: { value: 'apples', next: { value: 'grapes', next: [Object] } } }
    // obj.insert(1, "Unknown")
    // this.head = { value: 'lemon', next: { value: "Unknown", next: { value: 'apples', next: { value: 'grapes', next: [Object] } } } }
        if (pos >= this.length) {
            this.append(value);
            return value;
        }
        if (pos <= 0) {
            this.prepend(value);
            return value;
        }
        const node = new Node(value);
        const prevNode = this._traverseToIndex(pos - 1); 
        node.next = prevNode.next;
        prevNode.next = node;
        return value;
    }

    remove(pos) {
    // this.head = { value: 'lemon', next: { value: "Unknown", next: { value: 'apples', next: { value: 'grapes', next: [Object] } } } }
    // obj.delete(1, "Unknown")
    // this.head = { value: 'lemon', next: { value: 'apples', next: { value: 'grapes', next: [Object] } } }
        const prevNode = this._traverseToIndex(pos - 1);
        prevNode.next = prevNode.next.next;
        this.length--;
    }

    print() {
        let currentNode = this.head;
        while (currentNode !== null) {
            console.log(currentNode.value);
            currentNode = currentNode.next;
        }
    }

}

const list = new LinkedList("apples");
list.append("grapes");
list.append("oranges");
list.prepend("Omar Rafat");
list.insert(1, "Unknown");
list.remove(4); // oranges === tail


console.log("------------------------------------------------------------");
list.print();
