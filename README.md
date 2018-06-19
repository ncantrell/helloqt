# helloqt
Grade Calculator for PIC10C Spring 2018
----
### Homework Assignment 1

## Process
I do my work primarily on Chromebooks running ChromeOS, which isn't compatible with the QT Creator IDE. As a consequence, it was difficult for me to find a long enough chunk of time for me to set up camp in the PIC Lab in the MS building and hammer out this assignment. The day it was do, I finished my morning and afternoon lectures and then committed my evening to completing the project before the deadline.

## Problems and Problem Solving
I was sick with Bronchitis for the lectures regarding QT Creator / GUI creation so I needed to learn the relevant material independently using the assignment description and Google Searches. I had previously worked with "Swing" UI programming in a Java class I took in ~2012, so I was a little familiar with the general idea of how to approach the problem. The specifics of the syntax for attaching code to UI elements in QT Creator was all new to me, and it took a little bit of trial and error on simple test cases before I was able to completely link my UI layout and the code that controlled the Grade Calculator.

There were 3 major problems I encountered while working on this project:

# Problem 1) QT Designer
Initially, I attempted to design my layout in QT Designer with the intention of importing the resulting XML into a basic project called "Hello QT" and combining everything into a single program. This workflow gave me an enormous amount of grief because I had essentially put the cart before the horse. 

# Solution 1) 
I eventually had to throw away ~60-90 minutes of work on the UI layout and do that workflow in reverse such that my code started off as an example QT program in QT Creator, and then I took the UI from that program and modified it to suite my needs.

# Problem 2) Transparent 'Overall Score' display
I wanted to mimic the example layout exactly. My motivation here was that my previous experiences in College have made me very risk adverse as far as deviating from assignment specifications very far. As such, I wanted my "Overall Score" to look identical to the one in the example image provided to us "grade-calculator.png". 

# Solution 2) 
I was not able to find the appearance settings in QT Creator to exactly duplicate the transparency, or the exact aesthetics of the slider bar. That said, functionally everything worked, and overall I was pretty happy with the finished appearance.

# Problem 3) 'Truth Table' Debugging Nightmare
This problem was extremely aggravating. To achieved the desired functionality I created 3x functions to calculate and return a grade: 

## Future Work
4) let us know about possible ways to improve it.
