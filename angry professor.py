def angry_professor(sut_list,th):
    no_of_student=0
    for i in sut_list:
        if i<=0:
            no_of_student+=1
    if no_of_student>=th:
        print("Yes")
    else:
        print("No")
    return
#driver code
test_case=int(input())
for i in range(test_case):
    instructions=input().rstrip().split()
    size=int(instructions[0])
    th=int(instructions[1])
    student_list=list(map(int, input().rstrip().split()))
    angry_professor(student_list,th)
                    