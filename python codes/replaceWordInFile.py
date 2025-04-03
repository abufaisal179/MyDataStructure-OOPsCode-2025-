with open("demo.txt" , "r") as f :
    data = f.read()
    print( data )
    f.close()
new_data = data.replace("python" , "JAVA")
print(new_data)

with open("demo.txt" , "w") as f :
    f.write(new_data)
