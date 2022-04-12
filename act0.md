# Written: (5 pts) Submit in Gradescope
1. Description of your algorithm.

      We will iterate through the loop, and save the lowest and highest value. Then we will loop through again, if a value `i` is the lowest value and `i + 1` or `i - 1` equals the highest value, the lowest and highest are ear, otherwise we keep looping, if we rach the end of the list, they are not near eachother.

2. Pseudocode for your algorithm

```
for i in Ran(n)
  if h < arr[i]
    h = arr[i]
  if l > arr[i]
    l = arr[i]

for i in Ran(n)
  if arr[i] == l
    if arr[i-1] == h or arr[i+1] ==h
      return true
  return false
```

3. Analysis of the running time of your algorithm.

      This algorithm is θ(n)
