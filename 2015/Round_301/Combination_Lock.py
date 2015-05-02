def main():
    n = int(raw_input())
    A = raw_input()
    B = raw_input()
    total = 0
    for i in xrange(n):
        c = ord(A[i]) - ord('0')
        d = ord(B[i]) - ord('0')
        if c > d:
            f_mvs = 10 - c + d
            b_mvs = c - d
        else:
            f_mvs =  d-c
            b_mvs = 10 +c-d
        total += min(f_mvs, b_mvs)
    print total

if __name__ == '__main__':
    main()
