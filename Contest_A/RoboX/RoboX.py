def main():
    t = int(input())

    while t > 0:
        n, p = map(int, input().split())

        str_input = input()
        ans = 1 if p % 2 == 0 else 0

        for char in str_input:
            if char == 'R':
                p += 1
            elif char == 'L':
                p -= 1

            if p % 2 == 0:
                ans += 1

        print(ans)

        t -= 1

if __name__ == "__main__":
    main()
