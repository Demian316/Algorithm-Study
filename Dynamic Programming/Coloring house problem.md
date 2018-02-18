# Coloring house problem

There are a row of houses, each house can be painted with three colors red, blue and green. The cost of painting each house with a certain color is different. You have to paint all the houses such that no two adjacent houses have the same color. You have to paint the houses with minimum cost. How would you do it? 

Note: Painting house-1 with red costs different from painting house-2 with red. The costs are different for each house and each color.


source: https://www.careercup.com/question?id=9941005


#Solution: 
Let's think about the minimum value of painting i'th house.
2nd house painting value: 1st house painting value + 2nd house painting value
3rd house painting value: 2nd house painting value + 3rd house painting value
 
So we can write subproblem like this. 
  
    d[i] = d[i-1] + Min(value of color[i])

But the result can be different depends on the 1st house's color value.
So we have to consider all the possibilities of 1st house's color. There is 3 possibilities.

  1st is R: d[i][0] = Min(d[i-1][1], d[i-1][2]) + color[i][0]
  
  2nd is G: d[i][1] = Min(d[i-1][0], d[i-1][2]) + color[i][1]
  
  3rd is B: d[i][2] = Min(d[i-1][0], d[i-1][1]) + color[i][2]

