def dist(s, t):
    n = len(s)
    cnt = 0
    for i in xrange(n):
        if s[i] != t[i]:
            cnt += 1
    return cnt


def main():
    s = raw_input()
    t = raw_input()
    ans, turn = "", 0
    for i in xrange(len(s)):
        if s[i] == t[i]:
            ans += s[i]
        else:
            if turn == 0:
                ans += s[i]
            else:
                ans += t[i]
            turn = 1 - turn
    if dist(s, ans) == dist(t, ans):
        print ans
    else:
        print "impossible"
if __name__ == '__main__':
    main()
