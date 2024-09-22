fo=open('C://files//sample.txt','rt')
content=fo.readlines()
fo.close()

fo1=open('C://files//output.txt','wt')
fo1.writelines(content)
fo1.close()