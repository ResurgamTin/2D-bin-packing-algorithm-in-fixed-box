### git bash

ctrl + l：清屏

git config -l：查看所有的配置信息

git init .：设置 git 仓库，即创建一个新项目

<img src="imgs/git.assets/image-20220727060521872.png" alt="image-20220727060521872" style="zoom:50%;" />

文件夹里的 .git 文件夹表示该文件夹是一个 git 仓库，若删除 .get 文件夹，则该文件夹变为普通文件夹。

<img src="imgs/git.assets/image-20220727060811596.png" alt="image-20220727060811596" style="zoom:50%;" />

git status：显示 git 仓库的更改状态

git add index.html：向暂存区中添加文件

git rm --cached index.html：从暂存区中删除文件

git add .：向暂存区中添加当前目录下的所有文件

git rm --cached .：从暂存区中删除当前目录下的所有文件

git add -A：向暂存区中添加当前仓库下的所有文件

git commit -m "bootstrap project"：bootstrap project 是 commit message

git log

<img src="imgs/git.assets/image-20220727221932849.png" alt="image-20220727221932849" style="zoom:50%;" />

git diff

![image-20220727222429106](imgs/git.assets/image-20220727222429106.png)

git restore index.js：放弃更改