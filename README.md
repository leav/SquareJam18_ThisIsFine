# This is Fine

Play on the web (please be patient for the game to load): https://leav.github.io/SquareJam18_ThisIsFine/

Download from one of the builds: https://github.com/leav/SquareJam18_ThisIsFine/releases/latest

`This is Fine` is a puzzle game simulating the frantic experience of an on-call engineer coping with fires.  Your goal is to push blocks of code to maintain SLA so Square can continue to make bank.  Coffee is your only best friend during these long hours.  Use it wisely.

![Screenshot](/Screenshots/screenshot1_s.png)

A game by Brian Wang, Oliver Liao, Song Ye for Square Game Jam 2018 themed "Square" hosted by Square Video Game Club.

## Development

### Publish web build

1. Build it in Unity and output to Builds/Web.
2. In the root project directory, `git subtree push --prefix Builds/Web/ThisIsFine origin gh-pages` 

#### In case of a rebased master

    git push origin `git subtree split --prefix builds/Web/ThisIsFine master`:gh-pages --force

### Publish Android and iOS build

1. Build it in Unity and output to corrsponding directories in Builds/
2. Compress them to zip files.
3. Attach them to a release in Github.
