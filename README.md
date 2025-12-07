# About `pokehns-expansion`

![Gif that shows debugging functionality that is unique to pokeemerald-expansion such as rerolling Trainer ID, Cheat Start, PC from Debug Menu, Debug PC Fill, Pokémon Sprite Visualizer, Debug Warp to Map, and Battle Debug Menu](https://github.com/user-attachments/assets/cf9dfbee-4c6b-4bca-8e0a-07f116ef891c) ![Gif that shows overworld functionality that is unique to pokeemerald-expansion such as indoor running, BW2 style map popups, overworld followers, DNA Splicers, Gen 1 style fishing, OW Item descriptions, Quick Run from Battle, Use Last Ball, Wild Double Battles, and Catch from EXP](https://github.com/user-attachments/assets/383af243-0904-4d41-bced-721492fbc48e) ![Gif that shows off a number of modern Pokémon battle mechanics happening in the pokeemerald-expansion engine: 2 vs 1 battles, modern Pokémon, items, moves, abilities, fully customizable opponents and partners, Trainer Slides, and generational gimmicks](https://github.com/user-attachments/assets/50c576bc-415e-4d66-a38f-ad712f3316be)
The above gifs are from the **`pokeemerald-expansion`** repository.

<!-- If you want to re-record or change these gifs, here are some notes that I used: https://files.catbox.moe/05001g.md -->

**`pokehns-expansion`** is a GBA ROM hack base that equips developers with a comprehensive toolkit for creating Pokémon ROM hacks. It provides a base with the Johto and Kanto regions.
**`pokehns-expansion`** is built on top of [RHH's `pokeemerald-expansion`](https://github.com/rh-hideout/pokeemerald-expansion), which is itself built from [pret's `pokeemerald`](https://github.com/pret/pokeemerald) decompilation project, with features from [`pokemonHnS`](https://github.com/PokemonHnS-Development/pokemonHnS) integrated. **On its own it is a clone of pokemonHnS with the capability to add later-generation features.** 

# PLEASE NOTE WHILE READING THIS DOCUMENTATION
**1:** This README and the rest of the documentation are very much **still work in progress**. They have been taken from the parent **`pokeemerald-expansion`** project and will gradually be updated over time. Please feel free to contribute to this effort.
**2:** The **`pokehns-expansion`** project itself is also very much **still work in progress**. If this point is still in the documentation, the project will only be accepting pull requests for bug fixes, feature alignment to the original **`pokehns`** project, and the **`pokehns`** 2.0 release feature list, which may be found further down this page in the **`PULL REQUEST SCOPE`** section.
**3:** **`pokehns-expansion`** is currently up to date with **`pokeemerald-expansion`** version **`1.14.1`**. Incremental updates will be made as time permits after new releases of the **`pokeemerald-expansion`** **`master`** branch become available.

# [Features](FEATURES.md)

**`pokehns-expansion`** offers hundreds of features from various [core series Pokémon games](https://bulbapedia.bulbagarden.net/wiki/Core_series), along with popular quality-of-life enhancements designed to streamline development and improve the player experience. A full list of those featues can be found in [`FEATURES.md`](FEATURES.md).

# [Credits](CREDITS.md)

 [![](https://img.shields.io/github/all-contributors/rh-hideout/pokeemerald-expansion/upcoming)](CREDITS.md)

If you use **`pokehns-expansion`**, please credit **RHH (Rom Hacking Hideout)** and **pokemonHnS**. Optionally, include the version number for clarity.

```
Based off pokehns-expansion https://github.com/TixoRebel/pokehns-expansion, using RHH's pokeemerald-expansion 1.14.1 https://github.com/rh-hideout/pokeemerald-expansion/ and pokemonHnS https://github.com/PokemonHnS-Development/pokemonHnS.
```

Please consider [crediting all contributors](CREDITS.md) involved in the upstream pokeemerald-expansion project!

# Please note when using **`pokehns-expansion`**

- **`pokehns-expansion`** is not supported by the **`pokeemerald-expansion`** RHH Discord server, therefore we please ask that they are not disturbed with HnS-specific queries.
- **`pokehns-expansion`** supports multiplayer functionality with other games built on **`pokeemerald-expansion`**. It is not compatible with official Pokémon games.
- **`pokehns-expansion`** incorporates regular updates from `pokeemerald` via `pokeemerald-expansion`, and `pokemonHnS`, including bug fixes and documentation improvements.

# [Getting Started](INSTALL.md)

❗❗ **Important**: Do not use GitHub's "Download Zip" option as it will not include commit history. This is necessary if you want to update or merge other feature branches. 

If you're new to git and GitHub, [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/) has a [guide to forking and cloning the repository](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub). Then you can follow one of the following guides:

## 📥 [Installing **`pokehns-expansion`**](INSTALL.md)
## 🏗️ [Building **`pokehns-expansion`**](INSTALL.md#Building-pokehns-expansion)
## 🚀 [Updating **`pokehns-expansion`**](INSTALL.md#Updating-pokehns-expansion)

# [Documentation](https://TixoRebel.github.io/pokehns-expansion/)

For detailed documentation, visit the [pokehns-expansion documentation page](https://TixoRebel.github.io/pokehns-expansion/).

# [Contributions](CONTRIBUTING.md)
If you are looking to [report a bug](CONTRIBUTING.md#Bug-Report), [open a pull request](CONTRIBUTING.md#Pull-Requests), or [request a feature](CONTRIBUTING.md#Feature-Request), our [`CONTRIBUTING.md`](CONTRIBUTING.md) has guides for each.

# [`PULL REQUEST SCOPE`]
All pull requests are to be made to the `development-bugfix` branch.
At this time the **`pokehns-expansion`** will only accept pull requests for the following:
1. Bug fixes. Current known bugs include but are not restricted to:
- Battle music mapping correction
- Battle Frontier restoration
2. Feature alignment to the original **`pokehns`** project.
3. Optimization and widening of the **`IS_HNS`** configuration implementation, introduced to decrease HnS ROM size.
4. Restoration of the **`make emerald`** build capability, which as a long-term goal will build base **`pokeemerald-expansion`**.
5. The **`pokehns`** 2.0 release feature list:
- Full HGSS TM list, 100TMs
- Later gen learnsets with HnS spice
- Trainer rematches and phonecalls via pokegear
- Radio in pokegear
- GBC music player item
- Hidden items
- Restore bike and surf music
- Revert Ice Path puzzle to the GSC/HGSS boulder-in-hole puzzle

# [Community](https://discord.gg/w66hrmhGNq)

[![](https://dcbadge.limes.pink/api/server/w66hrmhGNq)](https://discord.gg/w66hrmhGNq)

Our community uses the [Pokemon Heart & Soul Discord server](https://discord.gg/w66hrmhGNq) to communicate and organize. Most of our discussions take place there, and we welcome anybody to join us!
