# Contributing to pokehns-expansion

First off, thanks for helping improve `pokehns-expansion`! ❤️

All contributions are encouraged and valued. Please make sure to read the relevant section before making your contribution! It will make it a lot easier for you and the maintainers. We're excited to see your contributions. 🎉

## PLEASE NOTE

Until this statement is removed, pokehns-expansion is still in development and therefore the only pull requests that will be accepted are bug-fixes and feature additions that help pokehns-expansion align functionality to the base pokemonHnS project. Only once full pokehns-expansion release is achieved will new feature additions be considered.

The below guidance is taken from RHH's pokeemerald-expansion and has not been fully updated for pokehns-expansion

## Bug Reports

We use [GitHub](https://github.com/TixoRebel/pokehns-expansion/issues?q=sort%3Aupdated-desc+is%3Aissue+is%3Aopen+label%3Abug) issues to track bugs. 

### What should I do before making a bug report?

- Does your bug occur on the latest unmodified (clean) version of the [`development-bugfix`](https://github.com/TixoRebel/pokehns-expansion/tree/development-bugfix) or [`main`](https://github.com/TixoRebel/pokehns-expansion/tree/main) branch? If not, please do not submit a report - the issue is most likely one introduced by your game.
- Has somebody else already found this issue? This is best done by searching the [bug tracker](https://github.com/TixoRebel/pokehns-expansion/issues?q=label%3Abug) to see if anybody else reported it. If there is already an issue, replying to the exsting issue with more information can help solve the problem.

### How do I submit a bug report?

If you run into an issue with the project, open an [issue](https://github.com/TixoRebel/pokehns-expansion/issues/new). 

The best bug reports have enough information that we won't have to contact you for more information. We welcome all efforts to improve pokehns-expansion, but would be very grateful if you completed as much of the checklist as possible in your bug report. This will help other contributiors fix your issue.

### What happens after I submit a bug report?

- A maintainer will [label](https://github.com/TixoRebel/pokehns-expansion/labels) the bug report.
- A maintainer will try to reproduce the bug with your provided steps.
    - If there are no reproduction steps or no obvious way to reproduce the issue, somebody will ask you for those steps. Until the bug can be reproduced, the bug will retain the `bug:unconfirmed` label. Unconfirmed bugs are less likely get fixed.
- If the team is able to reproduce the bug, it will be labeled `bug:confirmed`, and the bug will be left to be [fixed by someone](#Pull-Requests).
    - If the issue is particularly game-breaking, a maintainer will add it to a future version's [milestone](), meaning that version will not be released until the problem is solved.

## Feature Requests

This section guides you through submitting a feature request for pokeemerald-expansion, **including completely new features and minor improvements to existing functionality**. Following these guidelines will help maintainers and the community to understand your suggestion and find related suggestions.

- We use [GitHub](https://github.com/rh-hideout/pokeemerald-expansion/issues?q=sort%3Aupdated-desc+is%3Aissue+is%3Aopen+label%3Afeature-request) issues to track feature requests. 

### What should I do before making a feature request?

- Make sure your request is in [pokehns-expansion's scope](docs/team_procedures/scope.md) - if it is not clear if something is in scope, you can start a discussion thread in the [#feedback-and-suggestions](https://discord.com/channels/1392695844607754291/1417827944902168637) channel of the [the Pokemon Heart & Soul Discord Server](https://discord.gg/w66hrmhGNq).

### What should I do before making a feature request?

- Read the [documentation](https://TixoRebel.github.io/pokehns-expansion/) to find out if the functionality is already covered, maybe by an individual configuration.
- Perform a [search](https://github.com/TixoRebel/pokehns-expansion/issues) to see if the feature has already been requested. If it has, add a comment to the existing issue instead of opening a new one.

### How do I submit a feature request?

To request a feature to be added to the project, open a [feature request](https://github.com/TixoRebel/pokehns-expansion/issues/new). 

### What happens after I submit a feature request?

- A maintainer will [label](https://github.com/TixoRebel/pokehns-expansion/labels) the issue.
- If the feature request is out of [scope](docs/team_procedures/scope.md), it will be closed.
- if the request is in scope, any other contributor can volunteer to [fufill it via a pull request](#Pull-Requests). When the request is filled, the request will be closed.

## Pull Requests

If you have read all of this and still need help, feel free to start a thread in #feedback-and-suggestions of the Discord server or ask questions in #expansion-dev.

### What should I do before starting a pull request?

- If you're new to git and GitHub, [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/) has a [guide on forking and cloning the repository](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub). Make sure you have a [local copy](INSTALL.md) of `pokehns-expansion`.
- Make sure your contribution is in [scope](docs/team_procedures/scope.md) - if it is not clear if something is in scope, you can start a discussion thread in the [#feedback-and-suggestions](https://discord.com/channels/1392695844607754291/1417827944902168637) channel of the [the RHH Discord Server!](https://discord.gg/w66hrmhGNq).
- Choose a branch to contribute your PR to:
    - **`main`**: Fixes for critical bugs that are currently present in the `main` branch.
    - **`development-bugfix`**: All other pull requests.
- Create a new branch from the most recent version of the branch you've chosen.
- If your contribution introduces, removes, or changes a lot of existing code, we reccomend getting a maintainer to agree to review it before you start on the work! We have a table that lists all [current maintainers and their areas of expertise](#maintainers).

### How do I submit a pull request?

#### 1. Get a working local copy
If you haven't already, follow [INSTALL.md](INSTALL.md) to get a working local copy of `pokehns-expansion`.

#### 2. Set HNS-EXPANSION as a remote
This will designate the main `pokehns-expansion` repository as a remote.
```bash
git remote add HNS-EXPANSION https://github.com/TixoRebel/pokehns-expansion # You can replace HNS-EXPANSION with anything you want. This tutorial assumes you used HNS-EXPANSION.
```

#### 3. Create a new branch
This will create a new branch and switch to it.
```bash
git switch -c newFeature # the name newFeature can be anything you want. This tutorial assumes you used newFeature.
```

#### 4. Copy your target branch to your new branch
This will change your new branch to match the latest version of your chosen target branch.
```bash
git reset --hard development-bugfix # If your PR is going to target main, replace upcoming with main.
```

#### 5. Implement your code
All of your work should go on this new, clean branch. If you already started work on a different branch, you can [cherry-pick](https://git-scm.com/docs/git-cherry-pick) you old commits onto this new branch, or just copy and paste the changes from the original files.

##### Popular Features / Feature Branches

If you are implementing functionality from a known community feature branch, it is **strongly** recommended that you open a discussion thread _before_ starting. There are some situations where maintainers would ask you to use the existing feature branch as a base, and others where maintainers would want a feature to be written from scratch.

This changes on a case by case basis.

#### 6. Push your changes
When you push your first commit, you'll need to push the new branch to the remote repo.
```bash
git push --set-upstream origin newFeature
```

#### 7. Open Pull Request
Once your work is complete and pushed to the branch on Github, you can open a [pull request from your branch](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request-from-a-fork), targeting the branch you've chosen from `pokehns-expansion`. Please fill out the pull request description as completely as possible. 

### What happens after I submit a pull request?

A maintainer will then assign themselves as a reviewer of your pull request, and may provide feedback in the form of a PR review. 

Contributors are responsible for responding to and updating their branch by addressing the feedback in the review. Contributors are also responsible for making sure the branch passes the checklist at all times.

Once a maintainer has begun reviewing your PR, **please** do not force-push new changes - normal pushes are fine. Do not worry about git history - we squash most incoming changes.

Maintainers will measure the submitted pull request against a [merge checklist](docs/team_procedures/merge_checklist.md).

Once all items on the merge checklist are true, the branch will be merged in.


## Maintainers

This list was last updated 2025 November 19.

| Name | Discord | Currently Active | Areas of Expertise |
| --- | --- | --- | --- |
| [grintoul](https://github.com/grintoul1) | grintoul | ✅ | Tests, Battle Engine/Controllers, Battle AI, Overworld, FollowerNPC, Sprites, Trainer Slides, Multibattles

For topics not covered above please do not request a specific maintainer; somebody will assign themselves in due course.

## Attribution
This guide is based on the [contributing.md](https://contributing.md/generator)!
