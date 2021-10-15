"""Codeforces problem 228A - Is Your Horseshoe on the Other Hoof?
"""

if __name__ == "__main__":
    shoes = [int(x) for x in input().split()]

    print(4 - len(set(shoes)))
