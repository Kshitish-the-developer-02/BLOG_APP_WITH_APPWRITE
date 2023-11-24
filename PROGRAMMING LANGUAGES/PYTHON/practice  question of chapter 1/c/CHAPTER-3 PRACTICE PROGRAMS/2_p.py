letter= '''<|name|>,
greetings from kk coding house,iam happy to tell
you are selected!
have a great day ahead!
thanks and regards,
bill
date:<|date|>'''

name=input('entre your name\n')
date=input('entre date\n')
letter=letter.replace("<|name|>", name)
letter=letter.replace("<|date|>", date)
print(letter)

