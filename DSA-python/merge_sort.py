def merge_sort(Lst):
    n=len(Lst)
    print("spliting",Lst)
    if n>1:
        mid=n//2
        lefthalf=Lst[:mid]
        righthalf=Lst[mid:]

        merge_sort(lefthalf)
        merge_sort(righthalf)

        i=0    # for left half
        j=0    # for right half
        k=0    #for original array

        while i<len(lefthalf) and j<len(righthalf):
            if lefthalf[i]<righthalf[j]:
                Lst[k]=lefthalf[i]
                i+=1
            else:
                Lst[k]=righthalf[j]
                j+=1
            k+=1

        while i<len(lefthalf):
            Lst[k]=lefthalf[i]
            i+=1
            k+=1
        
        while j<len(righthalf):
            Lst[k]=righthalf[j]
            j+=1
            k+=1
        
        print("merging",Lst)

        
        
        

alist = [38, 27, 43, 3, 9, 82, 10]
print("Original list:", alist)
merge_sort(alist)
print("Sorted list:", alist)

        
