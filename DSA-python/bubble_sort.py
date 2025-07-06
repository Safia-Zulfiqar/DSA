def bubble_sort(Lst):
    n=len(Lst)
    for i in range(n-1):
        for j in range((n-1)-i):
            if Lst[j]>Lst[j+1]:
                temp=Lst[j]
                Lst[j]=Lst[j+1]
                Lst[j+1]=temp


listA=[10,45,67,32,8,4,5,2,87]
print("list before sorting",listA)
bubble_sort(listA)
print("list after sorting",listA)

