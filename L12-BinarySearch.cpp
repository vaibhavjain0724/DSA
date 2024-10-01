// ! BINARY SEARCH

// * only applies to monotonic functions
 

// * {1,2,3,5,6}
// * KEY = 5
// * 1) Find mid element,  ie 3 
// * 2) compare it with key,  3 != 5;
// * 3) 5>3 so we split the array into 2 and take the right array now
// * 4) {5,6}
// * 5) mid = 4+5/2 = 4 ie 5;
// * 6) compare 5 with key
// * 7) 5 == 5
// * 8) return 5 

// ! TLDR
// * 1 find mid
// * 2 compare with key
// * 3 if equal = return index
// *   else = decide left or right by comparing
// * 4 repeat     



