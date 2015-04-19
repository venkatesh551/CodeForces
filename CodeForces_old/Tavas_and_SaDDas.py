def solve():
    num = raw_input()
    n = len(num)
    ans = 2**n - 1
    p = 1
    for i in range(n):
        if num[n-i-1] == '7':
            ans += p
        p *= 2
    print ans
if __name__ == '__main__':
    solve()
