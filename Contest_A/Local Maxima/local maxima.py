def main():
    n = int(input())
    arr = list(map(int, input().split()))
    
    ans = []
    for i in range(1, n-1):
        if arr[i] > arr[i-1] and arr[i] > arr[i+1]:
            ans.append(arr[i]);
    
    if len(ans) > 0:
        print(' '.join(map(str, ans)))
    else:
        print(-1)
    
if __name__ == "__main__":
    for _ in range(int(input())):
        main()