Задачи
=====================

##Едномерни масиви

### Задача 1: Коледа е!
Напишете програма, която чете от конзолата едно число и извежда елха със такава основа. (Въведеното число трябва да е нечетно)

Вход:
```
    7
```
Изход:
```
   *
  ***
 *****
*******
  **
```



### Задача 2: Брой букви
Напишете програма, която намира и извежда на екрана броя на срещанията на всяка от буквите в масива.

Вход:
```
    abcssvsa
```

Изход:
```
    a 2
    b 1
    c 1
    s 3
    v 1
``` 

##Многомерни масиви

### Задача 3: Калкулатор за матрици
Напишете програма, която получава вход знак (+, -, *, /), число n и матрица NxN.
Извежда съответно спрямо знака:
- сбора на две матрици
- разлика на две матрици
- умножение на число с матрицата
- деление на число с матрицата
(При умножение и деление ще се въвежда от входа още едно число)
(При събиране и изваждане да се ползва още една матрица от входа като втора)


### Задача 4: Спирали
Напишете програма, която извежда числата във следните видове:

Изход:
```
1  2  3  4  5
10 9 8 7 6
11 12 13 14 15
```

```
1 2 3 4 5
14 15 16 17 6
13 20 19 18 7
12 11 10 9 8
```
### Task 5 - Queries

Write a program that takes an array of real numbers and and a sequence of real numbers
each element of which is called a *query*. The program must
output up to what index in the array we need to sum all numbers to get a result bigger
than each *query*. In other words, for each query `q` the program must find that `x`
for which `array[0] + array[1] + ... + array[x] >= q`.


**Input:**

The first line contains `N` meaning the size of the array.
The next `N` lines contain each element of the array.
Next line contains `M` - the number of queries to be made.
The next `M` lines contain each query.

**Output:**

The output contains `M` lines each denoting the index up to
which we have to sum the real numbers or `-1` if this is not possible.

Example:

Input
```
4
1
2
3
4
2
3
11
```

Output
```
1
-1
```


### Task 6 - Powerset

Given a set of numbers, computer its powerset i.e. the set of all of its subsets.
Use its [characteristic vector](https://en.wikipedia.org/wiki/Indicator_vector) to represent
each subset. To generate each vector it's enough to iterate from 0 to 2^n.
Finally, you need to use bitmasks to check if an element is contained within the subset.

**Input:**

The first line contains the size of the set `N`. `N` will always be between 1 and 64.
The next line contains exactly `N` numbers - the elements of the set.

**Output:**

You are to output all subsets of the set, each on a new line, separating the numbers in each
subset with a single space. Print an empty line for the empty set. It doesn't matter which subset is printed on each line.

**Example:**

Input

```
3
1 2 3
```

Output
```

1
2
3
1 2
1 3
2 3
1 2 3
```