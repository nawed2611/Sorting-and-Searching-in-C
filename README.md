## Sorting and Searching in C
Practicing different types of Sorting Techniques in C language. 

<p>A must read excerpt from <strong>Cormen's Algorithms</strong> Book-</p>
<p>"For a concrete example, let us pit a faster computer (computer A) running insertion sort against a slower computer (computer B) running merge sort. They each
must sort an array of 10 million numbers. (Although 10 million numbers might seem like a lot, if the numbers are eight-byte integers, then the input occupies
about 80 megabytes, which fits in the memory of even an inexpensive laptop computer many times over.) Suppose that computer A executes 10 billion instructions
per second (faster than any single sequential computer at the time of this writing) and computer B executes only 10 million instructions per second, so that computer A is 1000 times faster than computer B in raw computing power. To make the difference even more dramatic, suppose that the world’s craftiest programmer
codes insertion sort in machine language for computer A, and the resulting code requires 2n2 instructions to sort n numbers. Suppose further that just an average
programmer implements merge sort, using a high-level language with an inefficient compiler, with the resulting code taking 50n lg n instructions.</p>
  
`To sort 10 million numbers, computer A takes`<br>
`(2.(10)^7)/2 instructions / (10^10 instructions/second) = 20,000 seconds (more than 5.5 hours)`<br><br>

`While computer B takes`<br>
`50.(10^7).(lg 10^7) instructions / (107 instructions/second) = 1163 seconds (less than 20 minutes)`<br><br>

<p>By using an algorithm whose running time grows more slowly, even with a poor
  compiler, <strong>computer B runs more than 17 times faster than computer A!</strong> The advantage of merge sort is even more pronounced when we sort 100 million numbers:
where insertion sort takes more than 23 days, merge sort takes under four hours.
In general, as the problem size increases, so does the relative advantage of merge
  sort.</p>
<br>
Have a look here on how different algorithms work and their time complexities:

[![Visulaize different sorting algorithms](https://img.youtube.com/vi/ZZuD6iUe3Pc/0.jpg)](https://www.youtube.com/watch?v=ZZuD6iUe3Pc)
