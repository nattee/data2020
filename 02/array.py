def append(l):
    l.append(9)

def assign(l):
    l = [2,3]

a = [2,3]
b = a

a[0] = 10
print "a: ", a
print "b: ", b

append(a)
print "after append"
print "a: ", a

assign(a)
print "after assign"
print "a: ", a


