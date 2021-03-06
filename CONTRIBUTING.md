# Contributing Guidelines

In this file you find the main guidelines to contribute to the WSNet project. Contributions are always welcome. However, following this guideline will help us to simplify adding new functionalities, to ease maintenance, and to speedup development.

## Background requirements


Hereafter, we describe the things you need to be comfortable with in order to contribute for the project.

Mandatory:
- Unix environment
- C/C++
- [Git]
- Shell script

Optional:

- [Python] [python] 
- [CMake] 

Last but not least, you should have a clear understanding of **WSNet**. You can start by reading the available documentation.

## Workflow


We encourage you to read carefully the basic workflow as described by [GitLab] [gitlab_doc]. It is the standard GitLab workflow and we follow its practices.
Moreover, we have created an [example of workflow](doc/dev/tutorials/workflow_example.md).

Some ***golden rules***:

>**0. When in trouble, ask someone!**

You should always ask someone who has more experience. However, you must be reasonable, learning by yourself is also important.

>**1. All starts with an issue.**

Whenever you have an idea, found a bug, etc, you should create an issue to discuss it with your team. Only after a common decision you should start to implement, review, etc.. 

>**2. Use branches, NO direct commits on master.**

When using Git you should create a branch for whatever you’re working on, so that you end up doing a code review before you merge.

>**3. Commit messages reflect intent.**

You should not only say what you did, but also why you did it. It’s even more useful if you explain why you did this over any other options. A more detailed discussion of commit messages can be found below.

>**4. Test all commits, not only ones on master**

Some people set up their Continuous Integration (CI) to only test what has been merged into master. This is too late; people should feel confident that master always has green tests. It doesn't make sense for people to have to test master before they start developing new features. In fact, in our project, we will run tests following all `git push` commands made to your branch.

>**5. Ship the code within a merge request**

When you are done or want to discuss the code you open a merge request. This is an online place to discuss the change and review the code. In this way, your colleagues can give inputs on your modifications.

>**6. Review the code and get it approved**

Your peers will review the code and (maybe) propose modifications. After coming up into an agreement, your merge request will be approved and accepted.

>**7. Merge the feature-branch into master of `WSNET/wsnet`**

Finally, your branch will be merged into master.

### Commit Messages

A well-crafted git commit message is the best way to communicate context
about a change to fellow developers (and indeed to your future selves). 
A diff will tell you what changed, but only the commit message can properly tell you ***why***. 

The ***seven rules*** of a great git commit message:

- Separate subject from body with a blank line
- Limit the subject line to 50 characters
- Capitalize the subject line
- Do not end the subject line with a period
- Use the imperative mood in the subject line
- Wrap the body at 72 characters
- Use the body to explain what and why vs. how

It is also valid to remember:
- The command `git commit` will open the default text editor (usually VIM at CEA) 
  and you can enter your commit message.
- Not every commit requires both a subject and a body. Sometimes a single line 
  is fine, especially when the change is so simple that no further context is 
  necessary. In these cases you can use the command 
  `git commit -m "Fix typo in contribution guide"`
- In order to wrap the body at 72 characters, you can by simply set the following
  option in VIM : `:set textwidth=72`
Keep this in mind whenever you are creating a commit message. 
Here is an example of a commit:

```text
Summarize changes in around 50 characters or less

More detailed explanatory text, if necessary. Wrap it to about 72
characters or so. The first line is treated as the subject of the 
commit and the rest of the text as the body. The blank line 
separating the summary from the body is critical (unless you omit 
the body entirely); various tools like `log`, `shortlog` and 
`rebase` can get confused if you run the two together.

Write the commit message in the imperative: "Fix bug" and not 
"Fixed bug" or "Fixes bug."  This convention matches up with 
commit messages generated by commands like git merge and git revert. 
Explain the problem that this commit is solving. Focus on why you 
are making this change as opposed to how (the code explains that). 
Are there side effects or other unintuitive consequences of this
change? Here's the place to explain them.

Further paragraphs come after blank lines.

 - Bullet points are okay, too

 - Typically a hyphen or asterisk is used for the bullet, preceded
   by a single space, with blank lines in between, but conventions
   vary here
   
Put references to issues at the bottom, like this:

Fix: #4, #2
Close: #81
Resolve: #123
See also: #456, #789
```


You can find further discussions over commit messages [here] [chris] and [here] [tbaggery]. 

## Coding Style

The reasons to use a coding style are numerous, we list some of them below. 

Extracted from "Debugging Teams: Better Productivity Through Collaboration" By Brian W. Fitzpatrick, Ben Collins-Sussman:

>One way in which we keep the code base manageable is by ***enforcing consistency***. It is very important that any programmer be able to look at another's code and quickly understand it. Maintaining a uniform style and following conventions means that we can more easily use "pattern-matching" to infer what various symbols are and what invariants are true about them. Creating common, required idioms and patterns makes code much ***easier to understand***. In some cases there might be good arguments for changing certain style rules, but we nonetheless keep things as they are in order to preserve consistency.

Coding styles involves several rules that provides ways for creating less error-prone and more maintainable software.

We plan on using an auto-formatter as [uncrustify] or [astyle]. However, they do not cover naming rules and other important coding rules. Therefore, it is **very** important to follow the rules described here.

### CMake

The recommended coding style for CMake files in WSNet (i.e. CMakeLists.txt files and *.cmake files) follows the ones described [here][cmake_guidelines].

### C/C++

C/C++ code will follow the rules defined in [Google Guidelines][google_guidelines] and [C++ Core Guidelines] [cpp_guidelines].


### Python

Python code formatting should follow [PEP8] [python_doc]. Exceptions to these rules are acceptable if it makes the code objectively more readable. However, the reasons should be mentioned on the merge request.

No tabs (only spaces) and No trailing whitespace. Configuring your editor to remove these things upon saving will save a lot of trouble.

You should consider installing/enabling automatic PEP8 checking in your editor. In the future, part of the test suite will check PEP8 compliance, things go smoother if the code is mostly PEP8 compliant to begin with.

   [tbaggery]: <http://tbaggery.com/2008/04/19/a-note-about-git-commit-messages.html>
   [chris]: <http://chris.beams.io/posts/git-commit/>
   [gitlab_doc]: <https://docs.gitlab.com/ce/workflow/README.html>
   [python]: <https://docs.python.org/devguide/>
   [python_doc]: <https://www.python.org/dev/peps/pep-0008/>
   [astyle]: <http://astyle.sourceforge.net/>
   [uncrustify]: <http://uncrustify.sourceforge.net/>
   [Git]: <https://git-scm.com/doc>
   [cpp_guidelines]: <https://github.com/isocpp/CppCoreGuidelines>
   [google_guidelines]: <https://google.github.io/styleguide/cppguide.html>
   [cert_c]: <https://www.securecoding.cert.org/confluence/display/c/SEI+CERT+C+Coding+Standard>
   [CMake]: <https://cmake.org/>
   [cmake_guidelines]: <https://community.kde.org/Policies/CMake_Coding_Style>
  

