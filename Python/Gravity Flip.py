"""Codeforces problem 405A - Gravity Flip
"""

if __name__ == "__main__":
    n = int(input())
    columns = [int(x) for x in input().split()]
    columns.sort()

    for item in columns:
        print(item, end=" ")
