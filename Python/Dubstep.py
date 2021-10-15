"""Codeforces problem 208A - Dubstep
"""

if __name__ == "__main__":
    remix = input()
    song: list[str] = []

    while remix:
        if remix[:3] == 'WUB':
            remix = remix[3:]
        else:
            index = remix.find('WUB')

            if index == -1:
                song.append(remix)
                remix = ""
                continue

            song.append(remix[:index])
            remix = remix[index:]

    for word in song:
        print(word, end=" ")
