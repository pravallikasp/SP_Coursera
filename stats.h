/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Array Statistics WEEK 1 ASSIGNMENT> 
 * @brief <For a given array data, the functions in this file make the statistical information>
 *
 *
 * @author <Siva Pravallika Sripathi Panditharadhyula>
 * @date <Feb 2, 2021>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
unsigned char *y;
/**
 *@brief <sorting an array from largest to smallest>
 *
 *<given an array and its length, the sort_array function sorts the array and returns the sorted array>
 *@param  <a> <input unsigned character array>
 *@param <length> <length of the input array>
 *
 *@return <returns the sorted array>*/
unsigned char * sort_array(unsigned char *a, unsigned int length)
{
	int temp,i,j;
	for (i=0;i<=length-2;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(a[j]>=a[j+1])
			{
				a[j]=a[j];
				a[j+1]=a[j+1];
			}
			else if(a[j]<a[j+1])
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
return a;
}
/**
 *@brief <finding maximum value in an array>
 *
 *<given an array, the find maximum function finds out the maximum of the array>
 *@param <input a> <it is the input unsigned character array>
 *@param <length> <it is the length of the input array>
 *
 *@return <returns the maximum value of the array>*/
unsigned char find_maximum(unsigned char *a,unsigned int length)
{
	 y = sort_array(a,length);
	  return *y;
}
/**
 *@brief <finding the minimum value of an array>
 *
 * <given an array, the find minimum function finds out the minimum value of an array>
 *@param <input a> <input is an unsigned character array>
 *@param <input length> <length is the integer value length of the array>
 *
 *@return <returns the minimum value of the array>*/
unsigned char find_minimum(unsigned char *a,unsigned int length)
{
	 y = sort_array(a,length);
	  return *(y+(length-1));
}
/**
 *@brief <finding mean value of the array>
 * 
 *<given an input array, find mean function calculates the mean value of the array>
 *@param <a> <input is an unsigned character array>
 *@param <length> <length is the integer value of the length of the array>
 *
 *@return <returns the mean value of the array>*/
unsigned char find_mean(unsigned char *a, unsigned int length)
{
	    int i,sum=0;
	        for(i=0;i<length;i++)
			    {
			     sum = sum + a[i];
			    }
		    return sum/length;
}
/**
 * @brief <finding the median value of the array>
 *
 * <given an input array, find median function calculates the median value of the array>
 * @param <a> <input is an unsigned character array>
 * @param <length> <length is the integer value of the length of the array>
 *
 * @return <returns the median value of the array>*/
unsigned char find_median(unsigned char *a, unsigned int length)
{
	    y = sort_array(a,length);
	        if (length%2 == 0)
		 {
		 unsigned char p[] = {a[(length/2)-1],a[length/2]};
		 return find_mean(p,2);
		 }
		 else if (length%2 != 0)
	         {
		 return a[(length-1)/2];
		 }
}
/**
 * @brief <prints the given array>
 *
 * <given an input array, the print array function prints it>
 * @param <a> <given input unsigned character array>
 * @param <length> <length is the integer value of the length of the array>
 *
 * @return <returns the given input array and prints the given input array>*/
unsigned char print_array(unsigned char *a, unsigned int length)
{
	    int i;
	    printf("the given array is:");
	        for(i=0;i<length;i++)
			    {
		             printf("%d ",a[i]);
			    }
					        
		    return *a;
}
/**
 * @brief <prints all the statistics of an array>
 *
 * <given an input, the print statistics function prints the statistical data of the array including the maximum, minimum, mean, median and sorted array.>
 *@param <a> <given input unsigned character array>
 *@param <length> <length is the integer value of the length of the array>
  *
  * @return < prints the statistical data>*/
unsigned char print_statistics(unsigned char *a,unsigned int length)
{
	  
	  printf("\n%d is the maximum value",find_maximum(a,length));
	    printf("\n%d is the minimum value",find_minimum(a,length));
	      printf("\n%d is the mean",find_mean(a,length));
	        printf("\n%d is the median",find_median(a,length));
		 sort_array(a,length);
		 printf("\nthe sorted array is: ");
		for(int i=0;i<length;i++)
		{
		printf("%d ",a[i]);
		}
		printf("\n");
	      return *a;
}

#endif /* __STATS_H__ */
