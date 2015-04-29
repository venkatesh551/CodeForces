def main():
    s = raw_input()
    t = "CODEFORCES"
    m = len(s)
    n = len(t)
    if len(s) < n:
        print "NO"
    else:
        for i in xrange(n+1):
            if s[:n-i] + s[m-i:] == t:
                print "YES"
                return
        print "NO"

if __name__ == '__main__':
    main()
