---
layout: page
title: Documentation
parent: Contribute
nav_order: 10
---

# Documentation

This site is build using [Jekyll](https://jekyllrb.com/) and [Just the Docs](https://pmarsceill.github.io/just-the-docs/), and hosted on Github Pages. Anyone is welcome to modify this website with new information.

## Site Layout

The folder `Pinetime/docs/docs/` contains all the pages of documentation within individual folders. These folders are as follows:

- `gettingStarted` - A single page with basic information about how to get started using Infinitime on the Pinetime
- `develop` - Information about developing on the Pinetime or developing for Infinitime
- `build` - How to build
- `flash` - How to flash
- `debug` - How to debug
- `releases` - Information about releases
- `contribute` - How to contribute to the project
- `companionApps` - Information about various companion apps
- `arch` - Various pages about the architecture of the pinetime or other technical topics

## How to make a change

### Previewing locally

Here are the steps to get a version of the site locally to preview changes. This is not strictly necessary if it's a small change or if you intend to preview only using Github Pages.

- See [Jekyll Documentation](https://jekyllrb.com/docs/) on how to install Jekyll on your system
- Open a terminal and navigate to the `Pinetime/docs` folder
- Uncomment `#theme: "just-the-docs"` in `Pinetime/docs/_config.yml`
- Run the site using this command, where `--livereload` makes your web browser automatically refresh when a change happens (Note: you may have to run `bundle install` before running this command)
```
bundle exec jekyll serve --livereload
```
- Open your web browser to the site `127.0.0.1:4000/Pinetime`
- After finishing changes, recomment `theme: "just-the-docs"` before committing

### Creating or Modifying a page

All the pages on the website are written in Markdown so it is very easy to modify them. Simply make your changes, preview them either locally or via Github Pages if you fork the main repository on Github, and create a [pull request]({{ sire.baseurl }}//docs/contribute/#how-to-submit-a-pull-request).

All new pages should be child pages of the main ones listed in the [site layout](#site-layout). Simply create a new page within one of the `Pinetime/docs/docs` folders and add this to the beginning:
```
---
layout: page
title: [Title of page]
parent: [Name of parent page]
nav_order: [Some number]
---
```
Where `[Title of page]` is the title of the page you want, `[Name of parent page]` is the name of the folder the page is in, and `[Some number]` sets the order of this page relative to the other child pages.

### Enabling Github Pages

You can enable the Github Pages site for your fork as follows:
- Go to the Settings tab of your fork of the `Pinetime` repo
- Scroll down until you find the `Github Pages` section
- Under `Source`, select the branch you want to build the pages for, then select `/docs` and click save
- View your deployment at https://_username_.github.io/Pinetime/
