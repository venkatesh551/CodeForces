def main():
    s = raw_input()
    t = "CODEFORCES"
    m = len(s)
    n = len(t)
    ind = s.find(t)
    if (ind == 0) or (ind + n) == m:
        print 'YES'
    elif ind == -1:
        i, j = 0, 0
        while (i < m) and (j < n) and (s[i] == t[j]):
            i += 1
            j += 1
        k, l = m-1, n-1 
        while k > i and l > j and s[k] == t[l]:
            k -= 1
            l -= 1
        if s[j] == s[k]:
			print 'YES'
        else:
            print 'NO'
    else:
        print 'NO'

if __name__ == '__main__':
    main()
