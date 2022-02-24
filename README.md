## This repositiory contains a compiled solution to CPE 311 (Computer Programming II) past questions at the University of Lagos. 

The solutions to these programs are written in C++ as stipulated in the problem questions. 

Note: Each folder {numbered 1 to 8} contains test or exam questions {and solutions} for one academic session. For more information on contributing or the general layout of the repository, click [here.](https://wa.me/+2349029118927)


## Step-by-Step procedure to contribute {Contributions are HIGHLY ENCOURAGED}

If you want to contribute to this project and make it better, your help is very welcome. Not only will contributing help harness your C skills, but contributing is also a great way to learn more about social coding on Github, new technologies, their ecosystems and how to make constructive, helpful bug reports, feature requests and the noblest of all contributions: a good, clean pull request.

#### COMMENTING IS HIGHLY ENCOURAGED!!!

* Fork the project repository

Find the project's repository on GitHub, and then "fork" it by clicking the  `Fork` button in the upper right corner:

* Clone your fork

While still in your repository, click the green `Clone or download` button and then copy the HTTPS URL:

*  Navigate to your local repository

Since the clone was downloaded into a subdirectory of your working directory, you can navigate to it using: `cd NAME_OF_REPOSITORY`.

* Check that your fork is the `origin` remote

You are going to be synchronizing your local repository with both the project repository (on GitHub) and your fork (also on GitHub). The URLs that point to these repositories are called "remotes". More specifically, the project repository is called the "upstream" remote, and your fork is called the "origin" remote.

When you cloned your fork, that should have automatically set your fork as the "origin" remote. Use git remote -v to show your current remotes. You should see the URL of your fork (which you copied in step 3) next to the word "origin".

If you don't see an "origin" remote, you can add it using: `git remote add origin URL_OF_FORK`

*  Add the project repository as the "upstream" remote

Go to your fork on GitHub, and click the "forked from" link to return to the project repository.

While in the project repository, click the green Clone or download button and then copy the HTTPS URL:

Add the project repository as the "upstream" remote using: `git remote add upstream URL_OF_PROJECT`

Use `git remote -v` to check that you now have two remotes: an origin that points to your fork, and an upstream that points to the project repository.

This diagram summarizes the entire setup process thus far:

![image](https://user-images.githubusercontent.com/64667212/155080697-283cf279-056c-4ec7-8898-7eabf10b114c.png)

* Pull the latest changes from upstream into your local repository

Before you start making any changes to your local files, it's a good practice to first synchronize your local repository with the project repository. Use `git pull upstream master` to "pull" any changes from the "master" branch of the "upstream" into your local repository. (If the project repository uses "main" instead of "master" for its default branch, then you would use `git pull upstream main` instead.)

If you forked and cloned the project repository just a few minutes ago, it's very unlikely there will be any changes, in which case Git will report that your local repository is "already up to date". But if there are any changes, they will automatically be merged into your local repository.

* Create a new branch

Rather than making changes to the project's "master" branch, it's a good practice to instead create your own branch. This creates an environment for your work that is isolated from the master branch.

Use `git checkout -b BRANCH_NAME` to create a new branch and then immediately switch to it. The name of the branch should briefly describe what you are working on, and should not contain any spaces.

Use `git branch` to show your local branches. You should see your new branch as well as "master", and your new branch should have an asterisk next to it to indicate that it's "checked out" (meaning that you're working in it).

* Make changes in your local repository

Use a text editor or IDE to make the changes you planned to the files in your local repository. Because you checked out a branch in the previous step, any edits you make will only affect that branch.

#### COMMENTING IS HIGHLY ENCOURAGED!!!

* Commit your changes

After you make a set of changes, use git add -A to stage your changes and git commit -m "DESCRIPTION OF CHANGES" to commit them.

If you are making multiple sets of changes, it's a good practice to make a commit after each set.

* Push your changes to your fork

When you are done making all of your changes, upload these changes to your fork using `git push origin BRANCH_NAME`. This "pushes" your changes to the "BRANCH_NAME" branch of the "origin" (which is your fork on GitHub).

* Begin the pull request

Return to your fork on GitHub, and refresh the page. You may see a highlighted area that displays your recently pushed branch:

Click the green `Compare & pull request` button to begin the pull request.

(Alternatively, if you don't see this highlighted area, you can switch to your branch using the `Branch` button and then click the `New pull request` button.)

*  Create the pull request

When opening a "pull request", you are making a "request" that the project repository "pull" changes from your fork. You will see that the project repository is listed as the "base repository", and your fork is listed as the "head repository":

Before submitting the pull request, you first need to describe the changes you made (rather than asking the project maintainers to figure them out on their own). You should write a descriptive title for your pull request, and then include more details in the body of the pull request. If there are any related GitHub issues, make sure to mention those by number. The body can include Markdown formatting, and you can click the Preview tab to see how it will look.

On the right side, you may see a link to the project's Contributing guidelines. This is primarily worth reading through if you are submitting substantial code (rather than just fixing a typo), but it may still be worth scanning through at this point.

Below the pull request form, you will see a list of the commits you made in your branch, as well as the `diffs` for all of the files you changed.

If everything looks good, click the green Create pull request button!

This diagram summarizes the entire pull request process process:

![image](https://user-images.githubusercontent.com/64667212/155081709-f9d619c8-024b-456c-8cdb-a836d61a0e14.png)

* Review the pull request

You have now created a pull request, which is stored in the project's repository (not in your fork of the repository). It's a good idea to read through what you wrote, as well as clicking on the `Commits` tab and the `Files changed` tab to review the contents of your pull request:

* Delete your branch from your fork

If the project maintainers accept your pull request (congratulations!), they will merge your proposed changes into the project's master branch and close your pull request;

## Step-by-Step procedure to download code

* Navigate to the `<>Code` tab.

* Click on the `Code` button on the right. A dropdown should appear.

* In the `Clone` menu, under the `HTTPS` tab, click on `Download ZIP`

This simplest process is to Download ZIP.

## Contributors

Contributors' names and contact info

* [Salim Ọlánrewájú Oyinlọlá](https://twitter.com/SalimOpines)
* [Esther Abiola Farounbi](https://twitter.com/abiolaEsther_) 


