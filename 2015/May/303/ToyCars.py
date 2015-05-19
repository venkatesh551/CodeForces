def main():
    n = int(raw_input())
    result = [0] * n
    for i in xrange(n):
        A = map(int, raw_input().split())
        for j in xrange(n):
            if A[j] == 1:
                result[i] = -1
            elif A[j] == 2:
                result[j] = -1
            elif A[j] == 3:
                result[i], result[j] = -1, -1
    cnt = 0
    for ind in xrange(n):
        if result[ind] == 0:
            cnt += 1
    print cnt
    for ind in xrange(n):
        if result[ind] == 0:
            print ind+1,

if __name__ == '__main__':
    main()
