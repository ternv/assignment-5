# ENGR 103: Calculator

**I have included my project design PDF in this repository**

## Getting Started

To begin the programming portion of this assignment, follow these steps:

1. **Clone the Repository**:
   - Copy the SSH URL of this repository by clicking the "<> Code" button at the top right of the main page, selecting the "SSH" tab, and clicking the clipboard icon.
   - Open your terminal and connect to the ENGR servers via SSH.
   - Navigate to the directory where you want to store your assignment work using commands like `ls`, `pwd`, and `cd`.
   - Execute `git clone <SSH_connection_string>`.

2. **Navigate to the Repository**:
   - Execute `ls` to confirm the presence of a new directory named `calculator-XXX`, where `XXX` is your GitHub username.
   - Enter that directory using `cd calculator-XXX`.
   - Execute `ls` again to see this file (`README.md`) along with the starter code.
   - Use `vim` to edit and complete the starter code according to the assignment requirements.

## What to complete

This assignment contains a lot of starter code that you generally shouldn't modify. All you need to do is fill in the blanks by completing the "TODO" items in `calculator.cpp` and `main.cpp`. Read the comments thoroughly to make sure you understand your responsibilities versus what I've already done for you.

## Building the Program

This program consists of multiple `.cpp` and `.hpp` files. This is necessary to get the grading script to work (see the next section of this README file).

You do not need to create any more files (just modify the existing ones, as explained above), nor do you need to understand *how* these files are connected together. However, you do need to understand this: in order to build this program, you should execute the `make` command in the terminal (similar to the last assignment). This will execute the default target of the provided `Makefile` and build your executable, which will be called `calculator`. After running `make` to build your program, you'll then be able to test it by running `./calculator`.

## Grading Script

This repository also includes a grading script that you can use to approximate what your actual grade will be on a large chunk of the assignment rubric. It can be executed from within your project directory via:

`make test`

Disclaimer: This grading script is similar but not identical to the actual grading script that will be used by a TA to compute this part of your assignment grade. It only produces an *approximation* of what your grade will be. Hard-coding solutions in an effort to fool the grading script will not work; it will only overestimate what your actual grade will be.

The grading script gives you a grade out of 100. This includes up to 30 pts of extra credit, so the highest score that the grading script will output if you **don't** complete any extra credit work is 70/100. A maximum of 30 **more** points can be earned when your randomly assigned TA grades the remaining parts of the rubric (the points for array usage in `main.cpp` and the points for following the style guidelines). In total, this means that you can earn 130/100 on this assignment if you complete all of the extra credit.

This assignment has no demo, so there are no points allotted to Q&A.

## Submitting your work

As you work on your assignment, frequently test your code and create new commits to reflect small changes. This practice allows you to rollback changes if needed.

To submit your work:

1. Ensure all your work is committed (`git status` should show no modified or staged files).
2. Push your commits to this GitHub repository using `git push`.
3. Open this repository in your browser, refresh the page, and verify it contains your latest work.

The instructor and TAs have access to this GitHub repository. As long as your work is pushed here, it is considered submitted. The timestamp of your latest commit will be checked to determine if it is a late submission.
