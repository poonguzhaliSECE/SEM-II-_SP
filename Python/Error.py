a=int(input())
b=int(input())
try:
    if b==0:
        raise Exception
    d=a/b
    print(d)
except :
    print("Exception Raised")
finally:
    print("Successfull!")