"""Codeforces problem 1030A "In Search of an Easy Problem"
"""

if __name__ == "__main__":
    n = int(input())

    answers = [int(x) for x in input().split()]

    if any(answers):
        print("HARD")
    else:
        print("EASY")
