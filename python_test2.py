import math

FileName=["file00.txt","file01.txt","file02.txt"];
NumberList=[]
def openingFile(file_name):
	number=0;
	with open(file_name, 'r') as f:
    		lines = f.read().splitlines()
    		last_line = lines[-1]
    		#print last_line
    		last=len(last_line)-3
    		#print last
    		
    		for index,item in enumerate(last_line):
    			if index>=last:
    				#print item
    				#print type(int(item))
    				number+=float(item)*10**(27-int(index))
    				#print type(number)
    				#print number
    				#number=10
                    #print number
    				#difference=27-index
                    #number+=number*math.pow(10,difference)
                    #number=item*10**difference
                    #number=item
                    #print number
    		#print number
    		NumberList.append(number)


for item2 in FileName:
   openingFile(item2)

item3_sum=0;
for index3,item3 in enumerate(NumberList):
   item3_sum+=float(item3)
   #print item3
print item3_sum
item3_average=item3_sum/(index3+1)
print item3_average

item4_std_sum=0;
for index4,item4 in enumerate(NumberList):
   item4_std_sum+=(float(item4)-item3_average)**2

item4_standard_deviation=math.sqrt((item4_std_sum)/(index4+1));
print item4_standard_deviation

item5_pass=0
item5_fail=0

for inex5,item5 in enumerate(NumberList):
	#if (int(item5)>(item4_standard_deviation+item3_average))&&(int(item5)<(item3_average-item4_standard_deviation)):
    if (float(item5)>(item4_standard_deviation+item3_average)) or (float(item5)<(item3_average-item4_standard_deviation)):
    
        item5_fail+=1
    else:
        item5_pass+=1

print item5_fail
print item5_pass

if item5_fail>item5_pass:
	print 'fail'
else:
    print 'pass'