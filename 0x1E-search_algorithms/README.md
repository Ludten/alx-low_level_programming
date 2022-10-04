# C - Search Algorithms
> Each file in this repository holds code that illustrates Search Algorithms
> specific to the C programming language.

## Description of what each file shows:
* 0-linear.c: A function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)

* 1-binary.c: A function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

* 2-O: What is the `time complexity` (worst case) of a linear search in an array of size `n`?

* 3-O: What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

* 4-O: What is the `time complexity` (worst case) of a binary search in an array of size `n`?

* 5-O: What is the `space complexity` (worst case) of a binary search in an array of size `n`?

* 6-O: What is the space complexity of this function / algorithm?
	```
	int **allocate_map(int n, int m)
	{
	int **map;

	map = malloc(sizeof(int *) * n);
	for (size_t i = 0; i < n; i++)
	{
		map[i] = malloc(sizeof(int) * m);
	}
	return (map);
	}
	```

* 100-jump.c: A function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)

* 101-O: What is the `time complexity` (average case) of a jump search in an array of size `n`, using `step = sqrt(n)`?

* 102-interpolation.c: A function that searches for a value in a sorted array of integers using the [Interpolation search algorithm](https://en.wikipedia.org/wiki/Interpolation_search)

* 103-exponential.c: A function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://en.wikipedia.org/wiki/Exponential_search)

* 104-advanced_binary.c: A function that searches for a value in a sorted array of integers.

* 105-jump_list.c: A function that searches for a value in a sorted list of integers using the Jump search algorithm.

* 106-linear_skip.c: A function that searches for a value in a sorted skip list of integers.

* 107-O: What is the `time complexity` (average case) of a jump search in a singly linked list of size `n`, using `step = sqrt(n)`?

* 108-O: What is the `time complexity` (average case) of a jump search in a skip list of size `n`, with an express lane using s`tep = sqrt(n)`?
