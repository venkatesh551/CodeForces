def main():
    num = int(raw_input())
    result = []
    while num > 0:
        s = ''
        for d in str(num):
            if d > '0':
                s += '1'
            else:
                s += '0'
        temp = int(s)
        result.append(temp)
        num -= temp
    print len(result)
    for ele in result:
        print ele, 

if __name__ == '__main__':
    main()