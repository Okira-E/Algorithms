"use strict";

class HashTable {
    constructor(size) {
        this.data = new Array(size);
    }

    _hash(key) {
        let hash = 0;
        for (let i = 0; i < key.length; ++i) {
            hash = (hash + key.charCodeAt(i) * i) % this.data.length;
        }
        return hash;
    }

    set(key, value) {
        const address = this._hash(key);
        if (!this.data[address]) {
            this.data[address] = [];
        }
        this.data[address].push([key, value]);
    }

    get(key) {
        for (let i = 0; i < this.data.length; ++i) {
            if (this.data[i]) {
                if (this.data[i][0][0] === key)
                return this.data[i][0][1];
            }
        }
        return -1;
    }

    keys() {
        let keys = [];
        for (let bucket of this.data) {
            if (bucket) {
                for (let i of bucket) {
                    keys.push(i[0]);
                }    
            }
        }
        return keys;
    }
}

const obj = new HashTable(50);

obj.set("grapes", 100);
obj.set("apples", 432);
obj.set("oranges", 432);

console.log(obj.keys());