#write a functiton to calculate sum of list of list
def sum_list_list(list):
    sum = 0
    for i in list:
        sum += sum_list(i)
    return sum
list = [[1,2,3],[4,5,6],[7,8,9]]
print(sum_list_list(list))
