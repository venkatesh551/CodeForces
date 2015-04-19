def solve():
    n = int(raw_input())
    s = raw_input()
    t = raw_input()
    d = dict()
    cnt = 0
    for i in xrange(n):
        if s[i] != t[i]:
            d[v_a] = (v_b, i+1)
            cnt += 1
    ans = cnt
    for k, v in d.items():
        if d.has_key(v[0]) and d[v[0]][0] == k:
            ans = cnt-2
            ind_i = v[1]
            ind_j = d[v[0]][1]
        elif ans != cnt-2 and :


        
if __name__ == '__main__':
    solve()
