def main():
    n = int(raw_input())
    q = raw_input()
    result = []
    d = dict()
    i, j = 0, 0
    while i < len(q) and j < n:
        if q[i] not in d:
            d[q[i]] = True
            result.append(i)
            j += 1
        i += 1
    if len(result) == n:
        print 'YES'
        result.append(len(q))
        for i in xrange(1, n+1, 1):
            print q[result[i-1]:result[i]]
    else:
        print 'NO'

if __name__ == '__main__':
    main()
