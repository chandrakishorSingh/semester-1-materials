# Script to update data in files avilable in a directory given as a parameter on command line
# sed command is used to search and replace a pattern
cd $1
for t in * ; do	
	if [ -f $t ] ; then
	    sed -e 's/t_dline 100 100/t_dline 200/g' $t > temp
	    mv temp $t
	    echo "file name is " $t
	else
		echo "directory name is " $t 
    fi
done

#mv temp$i ${name[$i]}-1


