# String Questions


## 1. 
You have to output the longest prefix which occurs multiple times in the string.  If no prefix occurs again, you must output "NO". (without quotes)  For example, if the input string is "ababaa", then the possible prefixes are {"a", "ab", "aba", "abab", "ababa", "ababaa"}. We can see that "a" occurs at indices 2, 4, and 5. The string "ab" occurs again in position 2. "aba" occurs in position 2. "abab" does not occur again in the string. So the longest prefix that occurs multiple times in the string is "aba".


## 2.    
Strings are usually ordered in lexicographical order. That means they are ordered by comparing their leftmost different characters. For example, **abc < abd** because c<d because . Also  because . If one string is an exact prefix of the other it is lexicographically smaller, e.g., **gh < ghij**
Given an array of strings sorted in lexicographical order, print all of its permutations in strict lexicographical order. If two permutations look the same, only print one of them. See the 'note' below for an example.
Complete the function next_permutation which generates the permutations in the described order.
For example, s= (ab,bc,cd). The six permutations in correct order are:
  - ab bc cd
  - ab cd bc
  - bc ab cd
  - bc cd ab
  - cd ab bc
  - cd bc ab
