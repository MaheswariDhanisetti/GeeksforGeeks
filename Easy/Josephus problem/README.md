<h2><a href="https://www.geeksforgeeks.org/problems/josephus-problem/1?page=1&category=Recursion&difficulty=Easy&status=unsolved&sortBy=submissions">Josephus problem</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p>A total of <strong>n</strong> people are standing in a circle, and you are one of them playing a game. Starting from a person, <strong>k</strong> persons will be counted in order <strong>along the circle</strong>, and the <strong>k<sup>th</sup></strong> person will be killed. Then the next <strong>k</strong> persons will be counted along the circle, and again the <strong>k<sup>th</sup></strong>&nbsp;person will be killed. This cycle will continue until only a single person is left in the circle.</p>
<p>If there are 5 people in the circle in the order <strong>A, B, C, D</strong>, and <strong>E</strong>, you will choose <strong>k=3</strong>. Starting from <strong>A</strong>, you will count <strong>A</strong>, <strong>B </strong>and <strong>C</strong>. <strong>C </strong>will be the <strong>3rd </strong>person and will be killed. Then you will continue counting from <strong>D</strong>, <strong>E </strong>and then <strong>A</strong>. <strong>A </strong>will be third person and will be killed.&nbsp;</p>
<p>You will be given an array where the first element is the first person from whom the counting will start and the subsequent order of the people. You want to be the last one standing. Determine the index at which you should stand to survive the game.</p>
<p><strong>Example 1:</strong></p>
<pre><strong>Input:
</strong>n = 3 k = 2
<strong>Output: </strong>3<strong>
Explanation: </strong>There are 3 persons so 
skipping 1 person i.e 1st person 2nd 
person will be killed. Thus the safe 
position is 3.</pre>
<p>&nbsp;</p>
<p><strong>Example 2:</strong></p>
<pre><strong>Input:
</strong>n = 5 k = 3
<strong>Output: </strong>4<strong>
Explanation: </strong>There are 5 persons so 
skipping 2 person i.e 3rd person will 
be killed. Thus the safe position is 4.
</pre>
<p>&nbsp;</p>
<p><strong>Your Task:</strong><br>You don't need to read input or print anything.&nbsp;You are required to complete the <strong>function josephus ()</strong> that takes<strong> two parameters n and k</strong> and <strong>returns </strong>an integer denoting<strong> safe position</strong>.&nbsp;</p>
<p><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</p>
<p><strong>Constraints:</strong><br>1 &lt;= k, n &lt;= 20</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Walmart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;