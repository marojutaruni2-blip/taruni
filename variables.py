#variables(local and global)
#local
def display():
    a=10
    print("inside value is:",a)
display()
#global
x=10
def display():
    print("inside fun:",x)
display()
print("outside fun:",x)
#locla(VS)global
x=100
def display():
    x=10
    print("the value for inside:",x)
display()
print("the value for outside:",x)
#how to change global variable value
y=20
def change():
    y=40
    print(y)
change()
print(y)
