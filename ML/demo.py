from PIL import Image

image=Image.open('eight.png')

data=list(image.getdata())

# print(data)

for i in range(len(data)):
    data[i]=255-data[i]
    
print(data)