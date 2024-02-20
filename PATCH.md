## Patching Tutorial

1. `git checkout -b branch_branch`
2. Download diff patches
3. `git apply /$PATH/TO/diff`
4. `sudo make clean install`
5. Quit DWM and check if anything break.
  - If break, `git checkout master` & `sudo make clean install` to roll back 
  - If fine, `git add .` & `git commit -m "patch name"`
6. `git checkout master` & `git merge patch_branch`
7. `sudo make clean install` to recompile for `master` branch
8. `git branch -d patch_branch`

## Useful Commands
1. `git branch -a`
