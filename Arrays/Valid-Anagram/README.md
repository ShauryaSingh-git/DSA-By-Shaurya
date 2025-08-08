
# PROBLEM NUMBER- 242 Valid anagram  
Difficulty level - Easy

---

## TIME COMPLEXITY-
O(nlogn)

---

## PREREQUISITES-
1. If-else condition / control statements
2. algorithms header functions- sort, begin(),end() etc
3. Functions and classes

---

## METHODS AND WORKING-

## What is a anagram?
i will not go into professonal meaning , this repo is to understand things like a beginner,so
1. lets say you have word "cat" and another word "tac" , these both words are anagram as they both has {a,c,t} words
2. lets take another example- word1= "apple" word2="apel" so word1 has{a,p,p,l,e} word 2 has {"a,p,e,l"} so this is not a anagram

## how to solve-
1. we'll sort it out so we can match the characters and no of characters of both strings 
2. then we will compare it directly if both sorted words are same then it is an anagram otherwise it is not.

---
