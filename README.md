# Git Exercise 2

## Summary

This is the second Git exercise and it is designed to extend your Git
skillset. The first exercise was designed so that there would be no
merge conflicts when you made the required changes to the files in the
repository. In this exercise, there will be merge conflicts, but none
that are too hard to resolve. The objective is to get you to understand
how they can arise, and how they are resolved.

Unlike the first exercise, this one requires working in a small group of
four (or five) people. In this description, this group is called "the team".

## The Assignment
This `README.md` file is part of a GitHub repository to which you have
read access but neither write nor administrative access.
Your instructor is the project maintainer and has full access to the project.




## Detailed Steps

1. On the server (e.g. GitHub) `fork` this canonical repository to your
public repository. Name your fork `git-exercise-02`.

2. Make a note of who is on your team. The list of teams and their members 
is in a CSV file in this directory, `teams.csv` as well as in the assignment
specification on the course website. Teams are rows in this file.

3. Fork a copy of the repository of each team member to your publc repository.
Name each fork using the form `username-git-exercise-02` where `username` is their
GitHub username.

4. Now `clone` all repositories to your local machine as you did in the 
first exercise.

5.  For each repository that you cloned, add an `upstream` remote to 
this repository using the `git remote add ...` 
command. While you can use `origin` you might want to name it
`username-origin`.

6. For each of your team-mates' repositories that you cloned, as well as your own,
you will do the same thing.
Specifically, in the `src` directory in each repository, there is a `C++` file named
`main.cpp`.  There is also a file named `oddities.txt`.  The file `oddities.txt`
has a collection of single-line sentences that are true facts. 
For each of these repositories you are to choose a different oddity.

	* Create a function, following the instructions in `main.cpp`, that prints 
this sentence to standard output with a terminating newline character
and put this function in `main.cpp` in the place indicated.

	* Put a call to the function in `main()`.

	* Compile and test your program to make sure it runs.

	* Track the source file using the `git add` command. Do not track the executable!

	* Commit your changes using the `git commit` command.

	* Using `git`, push the changes to your fork on the server, e.g. GitHub.

	* On the server, open a `pull request` to have the work reviewed and merged
into the project.

7. For your own repository, you will write a function that is called by `main()`
before the others contributed by your team-mates. This function should state
something like `"This is a collection of strange but true facts."`. This function 
should be in the same place in `main.cpp` as the other functions.
You should also complete the program documentation, making yourself the author and
giving credit where credit is due. You could even update the LICENSE file.

8. You must handle all pull requests for your project. If there are merge
conflicts, resolve them.  This will require that you pull down the changes to 
your local machine, compile, build, and test. When you are convinced that 
everything is correct, you are done.

9. When you have finished, notify the instructor by sending an issue.

