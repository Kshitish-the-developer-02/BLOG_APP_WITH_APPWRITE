a={'key':'value',
   'kshitish':'hacker',
  'marks':'100',
  'list':[1,4,3]}
print(type(a))
print(a['key'])
print(a['marks'])
print(a['list'])

b={'xx':{'kshitish':'hacker'}}
print(b['xx']['kshitish'])

# dictionary methods
b={'name':'kshitish',
    'from':'deogarh',
    'marks':[90,70,80]}
print(list(b.keys()))
print(list(b.values()))
print(list(b.items()))
b.update({'friend':'sweety'}) #update a new key and values in the given dictionary
print(b)
print(b.get('name'))
print(b.get('marks'))

s=set()
print(type(s))
print(s)
s.add(1)
s.add(4) 
s.add(3)
s.add(2)
s.add(2)
print(set(s))
print(s)

print(len(s))
s.remove(4)
s.remove(1)
print(s)
print(s.pop())
s.clear()
print(s)

a={1,3,4}
# a.union({1,5,3,6})
print(a.union({1,5,3,6}))  #union
print(a.intersection({3,6}))   #intersection
