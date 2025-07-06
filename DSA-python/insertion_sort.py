def insertion_sort(Lst):
    n=len(Lst)
    for i in range(1,n):
        key=Lst[i]
        j=i-1
        while j>=0 and Lst[j]>key:
            Lst[j+1]=Lst[j]
            j-=1
        Lst[j+1]=key
    
    
my_list=[23,93,54,100,76,18]
print('list before sorting',my_list)
insertion_sort(my_list)
print('list after sorting',my_list)