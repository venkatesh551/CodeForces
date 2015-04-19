num_dict = {
"0"  : "zero",
"10"  : "ten",
"1"  : "one",
"11"  : "eleven",
"2"  : "two",
"12"  : "twelve",
"20"  : "twenty",
"3"  : "three",
"13"  : "thirteen",
"30"  : "thirty",
"4"  : "four",
"14"  : "fourteen",
"40"  : "forty",
"5"  : "five",
"15"  : "fifteen",
"50"  : "fifty",
"6"  : "six",
"16"  : "sixteen",
"60"  : "sixty",
"7"  : "seven",
"17"  : "seventeen",
"70"  : "seventy",
"8"  : "eight",
"18"  : "eighteen",
"80"  : "eighty",
"9"  : "nine",
"19"  : "nineteen",
"90"  : "ninety",
}

def solve():
    num = raw_input()
    if num in num_dict:
        print num_dict[num]
    else:
        a = str((ord(num[0])-ord('0')) * 10)
        print num_dict[a] + "-"+ num_dict[num[1]]
if __name__ == '__main__':
    solve()
