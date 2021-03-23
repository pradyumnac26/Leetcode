class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        c = 0
        for word in words:
            x = list(chars)
            flag = 1
            for i in word:
                if i not in x:
                    flag = 0
                    break
                else:
                    x.remove(i)
            if flag != 0:
                c += len(word)
        return c
