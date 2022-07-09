def minion_game(string):
    # your code goes here
    stuart = 0
    kevin = 0
    count = len(string)
    vowels = ['a', 'e', 'i', 'o', 'u']
    string = string.lower()
    string = string.replace(' ', '')
    for i in string:
        if i in vowels:
            kevin += count
        else:
            stuart += count
        count -= 1
    print('Draw' if kevin == stuart else 'Kevin {}'.format(kevin) if kevin >
          stuart else 'Stuart {}'.format(stuart))


if __name__ == '__main__':
    s = input()
    minion_game(s)
