def main():
    t = int(input())

    while t > 0:
        n = int(input())
        arr = list(map(int, input().split()))

        arr.sort()
        ans = 0

        for i in range(1, n):
            if arr[i] <= arr[i - 1]:
                ans += arr[i - 1] - arr[i] + 1
                arr[i] = arr[i - 1] + 1

        print(ans)
        t -= 1

if __name__ == "__main__":
    main()
