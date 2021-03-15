# CodingBat
Scrapped the python code I submitted to CodingBat using a program.

The program creates a folder, `out`, that contains the code that a user has submitted to CodingBat.

All the python ids are in the file `/config/problem_ids`.

For each id add the prefix `https://codingbat.com/prob/p` to get the
correct curl `url` for that problem.

From there use
`curl --cookie ~/codingbat_cookies.txt <url>` to get the webpage info
of that user. The user should have downloaded their own cookie for the website `codingbat.com`. I use a google chrome extension to get my own cookies.
The cookies should be at the root of the user, or wherever `~/codingbat_cookies.txt` points to.

In the return of the curl there will be the submission of the user.

Get rid of the surrounding html text, keep the python, and put it into an appropriate `.py` file.