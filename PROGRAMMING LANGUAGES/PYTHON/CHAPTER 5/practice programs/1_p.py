mydict={
    'ghadi':'watch',
    'pankha':'fan',
    'pyar':'love'
}
print('options are',list(mydict.keys()))
a=input("entre the hindi word \n")
print("the meaning of your word is:",mydict.get(a))