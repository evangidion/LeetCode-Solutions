'''

A trie (pronounced as "try") or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

Implement the Trie class:

Trie() Initializes the trie object.
void insert(String word) Inserts the string word into the trie.
boolean search(String word) Returns true if the string word is in the trie (i.e., was inserted before), and false otherwise.
boolean startsWith(String prefix) Returns true if there is a previously inserted string word that has the prefix prefix, and false otherwise.

'''

class Trie:
    def __init__(self):
        self.h = {}
        self.h2 = {}
    def insert(self, word: str) -> None:
        self.h[word] = 0
        c = ""
        for i in range(len(word)):
            c += word[i]
            self.h2[c] = 0

    def search(self, word: str) -> bool:
        if word in self.h:
            return True
        else:
            return False

    def startsWith(self, prefix: str) -> bool:
        if prefix in self.h2:
            return True
        else:
            return False
        

# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)