fin = open("inp.txt","r")
fout=open("cse.txt","w")
fg=open("out6","w")
line_count=0
for i in fin:
	if(i!="\n"):
		line_count+=1
c1=line_count
fin = open("inp.txt","r")
k=fin.readlines()
newlist1=[]
dict1=dict()
for i in k:
	if(i not in dict1):
		newlist1.append(i)
		dict1[i]=1
	
	for j in k:
		if(i!=j):
			#print("i is",i," j is",j)
			if(i[0]==j[0] and i[2]==j[2] and i[4]==j[4]):
				#for mc in range(len(j)):
					#print(mc,j[mc])
					

				if(j not in dict1):
					str1=""
					str1="="+" "+i[6]+" "+"NULL"+" "+j[6]+"\n"
					newlist1.append(str1)
					dict1[j]=1
				

print("Eliminating common subexpression")
#print(newlist1)
for i in newlist1:
	fout.write(i)
	fg.write(i)
fout.close()
fg.close()
#print("unused variables counter")
fin = open("cse.txt","r")
fout = open("opti_icg3.txt", "w")

i = 0
label_flag = 1
list_of_lines = fin.readlines()
dictValues = dict()
constantFoldedList = []
print("------------------------------------------------Pass 2------------------------------------------------")
print("-------------------------------------------Constant Folding-------------------------------------------\n")
while(i < len(list_of_lines)):
    line = list_of_lines[i].strip("\n")
    i += 1
    op,arg1,arg2,res = line.split()
    if(op in ["+", "-", "*", "/", ">", "<", "<=", ">=", "==", "!="]):
        if(arg1.isdigit() and arg2.isdigit()):
            result = str(int(eval(arg1 + op + arg2)))
            dictValues[res] = result
            constantFoldedList.append(["=",result,"NULL",res])
            print("", "=", result, "NULL", res, sep="\t")
        elif(arg1.isdigit()):
            if(arg2 in dictValues):
                result = str(int(eval(arg1 + op + dictValues[arg2])))
                dictValues[res] = result
                constantFoldedList.append(["=",result,"NULL",res])
                print("", "=", result, "NULL", res, sep="\t")
            else:
                constantFoldedList.append([op,arg1,arg2,res])
                print("", op, arg1, arg2, res, sep="\t")
        elif(arg2.isdigit()):
            if(arg1 in dictValues):
                result = str(int(eval(dictValues[arg1] + op + arg2)))
                dictValues[res] = result
                constantFoldedList.append(["=",result,"NULL",res])
                print("", "=", result, "NULL", res, sep="\t")
            else:
                constantFoldedList.append([op,arg1,arg2,res])
                print("", op, arg1, arg2, res, sep="\t")
        else:
            flag1=0
            flag2=0
            arg1Res = arg1
            if(arg1 in dictValues):
                arg1Res = str(dictValues[arg1])
                flag1 = 1
            arg2Res = arg2
            if(arg2 in dictValues):
                arg2Res = str(dictValues[arg2])
                flag2 = 1
            if(flag1==1 and flag2==1):
                result = str(int(eval(arg1Res + op + arg2Res)))
                dictValues[res] = result
                constantFoldedList.append(["=",result,"NULL",res])
                print("", "=", result, "NULL", res, sep="\t")
            else:
                constantFoldedList.append([op,arg1Res,arg2Res,res])
                print("", op, arg1Res, arg2Res, res, sep="\t")
    elif(op=="="):
        if(arg1.isdigit()):
            dictValues[res]=arg1
            constantFoldedList.append(["=",arg1,"NULL",res])
            print("", "=", arg1, "NULL", res, sep="\t")
        else:
            if(arg1 in dictValues):
                dictValues[res]=dictValues[arg1]
                #print("YOLO",arg1,dictValues[arg1])
                    
                constantFoldedList.append(["=",dictValues[arg1],"NULL",res])
                print("", "=", dictValues[arg1], "NULL", res, sep="\t")
                if (arg1[0] == "t"):
                    dictValues.pop(arg1)
            else:
                constantFoldedList.append(["=",arg1,"NULL",res])
                #print("##arg1 yolooo",arg1,res)
                print("", "=", arg1, "NULL", res, sep="\t")
    elif(op == "ifFalse"):
        if(arg1 in dictValues):
            constantFoldedList.append([op, dictValues[arg1], arg2, res])
            print("", op, dictValues[arg1], arg2, res, sep="\t")
        else:
            constantFoldedList.append([op,arg1,arg2,res])
            print("", op, arg1, arg2, res, sep="\t")
    else:
        constantFoldedList.append([op,arg1,arg2,res])
        print("", op, arg1, arg2, res, sep="\t")

print()
print("--------------------------------------Constant folded expression--------------------------------------\n")
for i in constantFoldedList:
    if(i[0]=="="):
        print("", i[3], i[0], i[1], sep="\t")
        print(i[3], i[0], i[1], file=fout)
    elif(i[0] in ["+","-","*","/","==","<=","<",">",">="]):
        print("", i[3], "=", i[1], i[0], i[2], sep="\t")
        print(i[3], "=", i[1], i[0], i[2],file=fout)
    elif(i[0] in ["ifFalse","goto","Label","not"]):
        if(i[0]=="ifFalse"):
            print("", i[0], i[1], "goto", i[3], sep="\t")
            print(i[0], i[1], "goto", i[3], file=fout)
        if(i[0]=="goto"):
            print(i[0],i[3])
        if(i[0]=="Label"):
            print("", i[3], ":", sep="\t")
            print(i[3], ":",file=fout)
        if(i[0]=="not"):
            print(i[3],"=",i[0],i[1])
fin.close()
fout.close()


print("unused variables counter")
f1=open("cse.txt","r")
f2=open("dead.txt","w")
k=f1.readlines()
#print("k is",k)
dict2=dict()
for i in k:
	for j in k:
		if(i!=j and i[0] !="="):
		
			#print("len",len(i))
			if(not (i[2].isdigit())):
				if i[2] not in dict2:
					dict2[i[2]]=1
				elif(j[2]==i[2] or j[4]==i[2] or j[6]==i[2]):
					dict2[i[2]]+=1
			if(not i[4].isdigit()):
				if i[4] not in dict2:
					dict2[i[4]]=1
				elif(j[2]==i[4] or j[4]==i[4] or j[6]==i[4]):
					dict2[i[4]]+=1
			if(not i[6].isdigit()):
				if i[6] not in dict2:
					dict2[i[6]]=1
					
				
				elif(j[2]==i[6] or j[4]==i[6] or j[6]==i[6]):
					dict2[i[6]]+=1

f1.close()
f1=open("cse.txt","r")
newlist2=set()
for i in dict2:

	if(dict2[i]>2):
		for m in f1:
			if("if" in m) or ("goto" in m):
				newlist2.add(m)
			elif(m[2]==i or m[4]==i or m[6]==i):
				newlist2.add(m)
			
#print(newlist2)				
#print("dict2 is",dict2)					
fg1=open("dead.txt","w")
for i in newlist2:
	fg1.write(i)

print("\n")
print("After dead code elimination - ")
print("------------------------------")
for i in constantFoldedList:
    if(i[0]=="="):
        pass
    elif(i[0] in ["+","-","*","/","==","<=","<",">",">="]):
        print(i[3],"=",i[1],i[0],i[2])
    elif(i[0] in ["if","goto","label","not"]):
        if(i[0]=="if"):
            print(i[0],i[1],"goto",i[3])
        if(i[0]=="goto"):
            print(i[0],i[3])
        if(i[0]=="label"):
            print(i[3],":")
        if(i[0]=="not"):
            print(i[3],"=",i[0],i[1])
                
        




