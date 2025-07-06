def selection_sort(Lst):
    n=len(Lst)
    for i in range(n-1):
        indOFmin=i
        for j in range(i+1,n):
            if Lst[j]<Lst[indOFmin]:
                indOFmin=j
            temp=Lst[i]
            Lst[i]=Lst[indOFmin]
            Lst[indOFmin]=temp

my_list=[23,93,54,100,76,18]
print('list before sorting',my_list)
selection_sort(my_list)
print('list after sorting',my_list)