def solve():
    n = int(raw_input())
    if n <= 2:
        print "1\n1"
    elif n == 3:
        print "2\n1 3"
    else:
        p = n/2
        print n
        for i in range(1, p+1, 1):
            print p+i, i,
        if n % 2 == 1:
            print n
if __name__ == '__main__':
    solve()
