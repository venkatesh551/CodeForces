'''
Created on 16-Jul-2015

@author: Venkatesh
'''


def read_int_list():
    return [int(x) for x in raw_input().split()]


def read_int():
    return int(raw_input())


def main():
    n = read_int()
    neg_lst, pos_lst = [], []
    for _ in xrange(n):
        lst = read_int_list()
        if lst[0] < 0:
            neg_lst.append(lst)
        else:
            pos_lst.append(lst)
    neg_lst.sort(reverse=True)
    pos_lst.sort()
    x = len(neg_lst)
    y = len(pos_lst)
    z = min(x, y)
    ans, ind = 0, 0
    for ind in xrange(z):
        ans += neg_lst[ind][1] + pos_lst[ind][1]
    if x > y:
        ans += neg_lst[z][1]
    elif y > x:
        ans += pos_lst[z][1]
    print ans


if __name__ == '__main__':
    main()
