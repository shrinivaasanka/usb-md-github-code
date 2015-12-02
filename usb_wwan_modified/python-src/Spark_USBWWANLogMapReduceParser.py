#-------------------------------------------------------------------------------------------------------
#ASFER - Software for Mining Large Datasets 
#This program is free software: you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation, either version 3 of the License, or
#(at your option) any later version.
#This program is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.
#You should have received a copy of the GNU General Public License
#along with this program.  If not, see <http://www.gnu.org/licenses/>.
#--------------------------------------------------------------------------------------------------------
#Copyright (C):
#Srinivasan Kannan (alias) Ka.Shrinivaasan (alias) Shrinivas Kannan
#Ph: 9789346927, 9003082186, 9791165980
#Krishna iResearch Open Source Products Profiles: 
#http://sourceforge.net/users/ka_shrinivaasan, https://www.openhub.net/accounts/ka_shrinivaasan
#Personal website(research): https://sites.google.com/site/kuja27/
#ZODIAC DATASOFT: https://github.com/shrinivaasanka/ZodiacDatasoft
#emails: ka.shrinivaasan@gmail.com, shrinivas.kannan@gmail.com, kashrinivaasan@live.com
#--------------------------------------------------------------------------------------------------------

#Apache Spark RDD MapReduce Transformations script for parsing the most frequent byte in
#USB urb transfer_buffer (in and out) printed by print_buffer() in /var/log/kern.log. This can be a key-value config in the
#/etc/virgo_kernel_analytics.conf file for VIRGO kernel_analytics module.

#Example pyspark RDD mapreduce code at: http://www.mccarroll.net/blog/pyspark2/

from pyspark import SparkContext, SparkConf

def mapFunction(printbufferline):
     for i in ufwline.split(":"):
             if "SRC" in i:
                     return (i,1)
 
def reduceFunction(value1,value2):
     return value1+value2

def mapFunction2(huaweiline):
     for i in huaweiline.split():
	     if "HUAWEI" in i:
		     return (i,1)


spcon=SparkContext() 
input=open('./kern.log.print_buffer_byte','r')
paralleldata=spcon.parallelize(input.readlines())
ufwlines=paralleldata.filter(lambda printbufferline: "print_buffer() byte" in ufwline)
k=ufwlines.map(mapFunction2).reduceByKey(reduceFunction)
print k.collect()
l=k.map(lambda src: src).reduce(lambda x,y: x if (x[1] > y[1]) else y)
print l
