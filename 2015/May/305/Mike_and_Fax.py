'''
Created on 26-May-2015

@author: venkat
'''


def main():
    """ Starting point
    """
    inp = raw_input()
    k = int(raw_input())
    inp_len = len(inp)
    inc = inp_len / k
    if inp_len % k != 0:
        print "NO"
    else:
        for ind in xrange(0, inp_len, inc):
            substr = inp[ind:ind+inc]
            # print substr
            if substr != substr[::-1]:
                print "NO"
                return
        print "YES"


if __name__ == '__main__':
    main()
