"""Codeforces problem 200B - Drinks
"""

if __name__ == "__main__":
    n = int(input())
    drinks = [int(x) for x in input().split()]

    percentage = sum(drinks) / n
    print(percentage)
