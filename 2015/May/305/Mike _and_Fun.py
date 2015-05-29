'''
Created on 26-May-2015

@author: venkat
'''

def read_int_list():
    return [int(x) for x in raw_input().split()]

def main():
    """ Starting point
    """
    n, m, q = read_int_list()
    mat = []
    row = [0] * n
    for rind in xrange(n):
        mat.append(read_int_list())
        for cind in xrange(m):
            row[rind] += mat[rind][cind]
    for _ in xrange(q):
        r, c = read_int_list()
        r, c = r-1, c-1
        if mat[r][c] == 0:
            mat[r][c] = 1
            row[r] += 1
        else:
            mat[r][c] = 0
            row[r] -= 1
        print max(row)

if __name__ == '__main__':
    main()
   