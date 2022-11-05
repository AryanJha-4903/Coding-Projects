# function
def repeater_string(input_string, rep):
    string_multple = rep//len(input_string)
    result = input_string.count('a')*string_multple
    for i in range(rep % len(input_string)):
        ele = input_string[i % len(input_string)]
        if ele == "a":
            result += 1
    return result
# driver code
string_input = input()
rep = int(input())
print(repeater_string(string_input, rep))
