Steps to Run
1. Clone this repo
2. cd to the folder it was cloned to
3. compile with `clang pi.c -o pi`
4. run with `./pi`

Approximation Method Used: Newton / Euler Convergence Transformation

This program uses the approximation method to get pi/2 and then multiplies it by 2 to get an approximation of Pi. I used C thinking it would be the fastest but ran into a bunch of issues with how many decimal places I could print. I was thinking that I could just translate my double into an array of chars and then I could store way more decimal places but I ran out of time.

I also ran out of time trying to figure out how to loop it indefinitely without crashing. This algorithm uses recursion, so my guess is the stack reaches the max and shits out on me. So I hard coded a condition to loop 174658 times before quitting -- anything after that and my program would crash. Might be special to my computer so if it crashes when you run it, change that magic number to something smaller. The higher the number, the more accurate the pi :)
