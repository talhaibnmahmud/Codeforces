"""Codeforces problem 136A "Present"
"""

if __name__ == "__main__":
    n = int(input())

    friend_list = [int(x) for x in input().split()]

    result_list = [0] * n
    for index, friend in enumerate(friend_list):
        result_list[friend - 1] = index + 1

    for item in result_list:
        print(item, end=" ")
