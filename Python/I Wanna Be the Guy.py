"""Codeforces problem 469A - I Wanna Be the Guy
"""

if __name__ == "__main__":
    n = int(input())
    little_X = [int(x) for x in input().split()]
    little_Y = [int(y) for y in input().split()]

    combined_levels = set(little_X[1:] + little_Y[1:])
    if len(combined_levels) == n:
        print('I become the guy.')
    else:
        print('Oh, my keyboard!')
