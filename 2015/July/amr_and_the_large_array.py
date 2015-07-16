'''
Created on 16-Jul-2015

@author: Venkatesh
'''

from collections import defaultdict


def read_int_list():
    return [int(x) for x in raw_input().split()]


def read_int():
    return int(raw_input())


def main():
    _ = read_int()
    num_lst = read_int_list()
    seg_dict = dict()
    cnt_dict = defaultdict(int)
    for idx, ele in enumerate(num_lst):
        cnt_dict[ele] += 1
        if ele in seg_dict:
            seg_dict[ele][1] = idx
        else:
            seg_dict[ele] = [idx, idx]
    max_len = max(cnt_dict.values())
    ans, seg_len = None, 1e6
    for key, val in seg_dict.iteritems():
        if cnt_dict[key] == max_len:
            cur_seg_len = val[1] - val[0] + 1
            if cur_seg_len < seg_len:
                seg_len = cur_seg_len
                ans = val
    print ans[0] + 1, ans[1] + 1


if __name__ == '__main__':
    main()
