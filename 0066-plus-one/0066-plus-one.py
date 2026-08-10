class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        numstr = ""
        for i in digits:
            numstr += str(i)
        num = str(int(numstr)+1)
        newl = []
        for i in num:
            newl.append(int(i))
        return newl
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna