class HashTable:
    def __init__(self,size):
        self.size=size
        self.slots=[None]*self.size
        self.data=[None]*self.size

    def HashFunc(self,key,size):
        return key % size

    def reHash(self,oldHashvalue,size):
        return (oldHashvalue+1)%size

    def put(self,key,data):
        hashvalue=self.HashFunc(key,len(self.slots))
        if self.slots[hashvalue] is None:
            self.slots[hashvalue]=key
            self.data[hashvalue]=data
        else:
            if self.slots[hashvalue]==key:
                self.data[hashvalue]=data
            else:
                nextslot=self.reHash(hashvalue,len(self.slots))
                while self.slots[nextslot] is not None and self.slots[nextslot] != key:
                    nextslot=self.reHash(nextslot,len(self.slot))
                
                if self.slots[nextslot] is None:
                    self.slots[nextslot]=key
                    self.data[nextslot]=data
                else:
                    self.data[nextslot]=data
    
    def display(self):
        print('slots:',self.slots)

        print('data:',self.data)



ht = HashTable(11)
ht.put(23, "Apple")
ht.put(32, "Banana")
ht.put(45, "Cherry")
ht.put(32, "Blueberry") 

ht.display()    
                
            

    
             



    