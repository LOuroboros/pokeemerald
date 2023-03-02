## About this document

I'll use it to list whatever ideas I come up with. My intention is to implement each of these things whenever I can or feel like doing them.

I wrote this... I don't know, sometime ago, but I never thought about storing it all here until now.

## List of features incorporated in this branch and credits

* Allow the Player to run inside buildings
* Better WaitForVBlank *(credits: DizzyEgg)*
* Evolution moves *(credits: UltimaSoul and Zeturic/Sagiri)*
* Gen. 4 OW poison survival *(credits: Blurose)*
* Gen. 6 Exp. Share *(credits: Blurose)*
* Reusable Repels *(credits: DizzyEgg)*
* Nature based stat colors in the summary screen *(credits: DizzyEgg)*
* Made Pokémon Eggs hatch at Lv. 1
* Show Hidden Power type in the summary screen *(credits: Gabrielle/Jirachii)*

## To Do

### High Priority
#### That means things that I should do as fast as possible.

* Look into `src/fonts.c` and adjust the width of the shiny star glyph to solve the problem with long species names/nicknames.
* Finish the dusk time palettes for the Day/Night system and merge it.
  * But before that I should try to merge Merrrp's branch which also includes a dynamic overworld palette system, overworld shadows and following Pokémon.
* Complete the features and credits list.

### Low Priority
#### That means things that I should do someday.
* Swap the `SE_BALL` in `GroundEffect_WalkOnTile` for the HGSS walking sound effect *(`SE_HG_ASHIOTO_A_WALK`?)* someday.
* PokéNav related tweaks
  * Make the DexNav's Overworld Info Bar use a border frame like the textbox in battles, instead of being a boring black rectangle.
  * Swap the representative colors of the Match Call and the DexNav *(I prefer cyan for the Match Call and red for the DexNav)*.
  * Switch the position of the DexNav's access. Instead of putting it below the Region Map, I rather have it below the Match Call.
  * Now that I'm using the DexNav, I should probably do some tweaks to the events in Rustboro City and Route 104.
    * Maybe add a couple of tall grass patches over there and have the rival teach the Player about the DexNav in a similar fashion to how ORAS handles it.
* Merge ExpoSeed's fork of the Dynamic Overworld Palettes when the 2 glaring issues it has are fixed.
* Re-implement TheXaman's Registered Items Menu
  * Remove all the logic for L and R buttons. The menu should be opened when you press the Select key if the Player has 2 or more items registered.
* Make Birch give the Player a Johto starter for defeating the Rival in Route 103 *(postgame)* instead of doing it for completing the Hoenn dex.
  * Add a Sinnoh starter as the new reward for completing the Hoenn dex.
* Tweak the metatile behavior of all the chair tiles, not just the ones in the Player's rooms, so the Player can't walk through the back of the chairs anymore.
* Let the Player get the Red and Blue Orbs by taking Groudon and Kyogre to Mt. Pyre's Summit or something.
* Put the Arceus Plates in Hoenn, their locations based on ORAS.
* Put the Mega Stones in Hoenn, [their locations also based on ORAS'](https://www.youtube.com/watch?v=XqG6w_EYYJg&t=143s).
  * The Kingdratite would be located in Route 103 *(North)* or in the empty spot accessible with Dive at Route 124, below an item ball with a Blue Shard.
  * The Flygonite will be located in the desert at Route 110.
  * The Butterfrite will be located in the back of the Pretty Petal Flower Shop.
* Add Mega Kingdra, and the Kingdratite in Route 103 *(North)* after the next RHH Master merge.
* Add Mega Flygon and the Flygonite after the next RHH Master merge.
* Add Mega Butterfree and the Butterfrite after the next RHH Master merge.
* Add Armored Mewtwo *(the original one, not the edgy atrocity from GO or the 3D Remake of the first Ashnime movie)*.
  * A scientist in Devon Corp. will notice when the Player has a Mewtwo in their party and will let the Player use the latest invention they made, a robotic suits.
  * BST of Armored Mewtwo: 106 HP / 100 Atk / 115 Def / 110 Spd / 134 Sp. Atk / 114 Sp. Def
  * New Ability, Repel Armor: Reduces damage from physical moves by 25%, and cannot be ignored just like Prism Armor.
* Implement Snag Balls.
  * Acquisition: Only 5 will be available. A Cipher Grunt will drop them after being defeated in Faraway Island.
  * Snag Balls will act as regular Poké Balls, but will also let the Player catch a trainer's Pokémon.
  * Snag Balls can't be used on rivals, gym leaders, E4 members and other special trainers.
  * If a Snag Ball is used against a trainer, that trainer will be scared and disappear never to be seen again.
* Make the encounters at Altering Cave vary with the day of the week, and also add post NatDex encounters to it.
* Add Regigigas somewhere. Maybe inside a chamber at Shoal Cave's ice room, unlockable when the Player takes the 3 Regis there.
* Add postgame NatDex encounter tables for all the maps.
  * I should probably make the RS exclusives obtainable before that, like Roselia, Meditite or Zangoose.
* Add Headbutt encounter tables for all the maps.
* Modify the parties of Brawly and Winona based on the Player's badges, without adding entirely new trainerbattle entries for them.
  * If I ever manage to do this, I should dynamically modify the parties of the Trick House trainers too.
  * Also the parties of the trainers at the Cycling Road.
  * And the parties of the trainers in the nortern side of Route 115.
* Add custom balls for the Team Aqua and Team Magma Grunts using [BomberGoomba's sprites](https://whackahack.com/foro/threads/sprites-de-objetos-de-mochila-fanmade-anime-y-tcg.65678/).
  * Edit gTrainerBallTable afterward. Common grunts should use regular Aqua/Magma Balls, Admins should use Super Aqua/Magma Balls and the leaders should use Master Balls.
  * Reminder: Potential battle sprites for [the Aqua Ball](https://github.com/Doesnty/goodruby/blob/master/graphics/interface/ball/aqua.png) and [the Magma Ball](https://github.com/Doesnty/goodruby/blob/master/graphics/interface/ball/magma.png), Credits: Divatastic and Doesnt.
* Make Latios/Latias available in Southern Island after the Player catches Latias/Latios during the postgame.
  * They'll drop 1 Soul Dew right after the battle.
* Make every Gen. 1, 2 and 4 Pokémon obtainable somehow.
* Remove every Gen. 5+ species minus Hoopa.
* Restore the beta design of Rusturf Tunnel and maybe add an event or two around that area.
* Change the encounters of the Battle Frontier's Artisan Cave. Will probably put some high leveled and evolved Pokémon for EV training purposes.
  * Make a chamber in there where Red will be fought once per league run.
  * Make it so using Wish in the overworld with a Smeargle will open a small chamber with Jirachi in it.
* Make the Kanto starters obtainable
  * Add a battle against Leaf once, somewhere in either Pacifidlog Town or Sootopolis.
  * Add a battle with Oak once. A homage to the never performed battle against him in Gen. 1.
  * Red and Leaf will leave behind a Charmander and a Squirtle Egg after defeat *(once)*.
  * Oak will give the Player a Bulbasaur if they win *(also once)*.
* Add foreshadowing for the above in Lanette's and Birch's PCs after the Player gets their 7th badge.
* Make it so after the Player has gotten the Kanto starters, the legendary dogs will start to roam around Hoenn *(Bulbasaur=Entei, Squirtle=Raikou, Charmander=Suicune)*.
* Allow Rayquaza to learn Dragon Ascent at Lv 80.
* Let the Player obtain the Old Sea Map, Aurora Ticket and Eon Tickets somehow.
* Write a small event where Celebi spawns and challenges the Player at Navel Rock, if they caught Ho-Oh and Lugia.
* Allow to find Kanto and Johto 'mons in the wild after getting the NatDex or maybe integrate my Kanto project in here somehow. I don't know.
* Add hidden grottoes.
* Change light radius when using Flash in dark caves to 0, just like in FRLG.
* Add a battle with the legendary birds after the Sootopolis City cutscene.
  * Moltres will be in Fiery Path.
  * Zapdos will be in New Mauville, and facing it will be required to stop the generator as Wattson requests.
    * As a result, I should change Wattson's dialogue at Mauville City a little, probably.
  * Articuno will be in a new ice room at Granite Cave.
* Slightly edit the events related to Mt. Chimney's Meteorite.
  * Cozmo will still ask the Player for a trade and will still give them the TM27 Return.
  * However, they'll also tell the Player that they've found a molten rock they don't need. This rock will allow the Player to meet Heatran in Scorched Slab.
* Swap checked flag in EventScript_Dresser *(FLAG_RECEIVED_AMULET_COIN -> FLAG_BADGE05_GET)*.
* Add Xaman's TM Case.
  * Try to add an equivalent to hold the Mega Stones.
* Add extra bag pockets inspired by the official games.
* Mess a bit with the battle interface. Come on Lunos, you can't keep using vanilla's health and text boxes forever.
* Make an offline version of the battle house from RS' Mossdeep City.
  * Maybe 2; one to replace Mossdeep City's minigame house and one to replace Sootopolis' battle house.
  * The houses would present a challenge of 9 battles, and a 10th with a special guest selected randomly.
  * There would be a different special guest for each house, and they would always give a reward to the Player, also chosen randomly.
* Turn the cave in Route 103 North into something similar to BW2's Cave of Being. The Lake Guardians will be there.
  * Just like in DPPtBDSP, Mesprit will be a roamer.
* Implement Crescent Isle. The Player will board the S.S. Tidal to go there and catch Cresselia. It'll drop the Lunar Wing if caught or defeated.
* Let the Player visit a lore-wise nightmare replica of Newmoon Island through Rustboro City's Walda using the Lunar Wing, where Darkrai will be able to be caught.
* Fit Courtney better into the plot, and maybe add some callbacks to the Mega Event in some places such as the battle in Mossdeep City or the battle with Champion Steven
* Make the legendaries respawn once every time the Player completes the Pokémon League until they're caught, just like in the newer official games.
* Rename the Mega Ring back to Mega Bracelet.
* Try to get rid of Mails entirely.
* Modify the gym statues' text to mention the rivals as they defeat each gym just like in other games.
* Remove the Match Call and port the VS Seeker from Pokefirered.
* Add new functions to the PokéNav
  * An example could be Ghoulslash's DexNav.
    * [This commit](https://github.com/Artrios/pokeemerald/commit/d25bfdcbafd26e1dec3058445074264c3bdbdef4) can be used as a reference point.
  * Another example could be Psf's Quest Menu
* Throw in a random chance to find strong Pokémon in the wild.
  * You'd basically have a certain chance to find a Pokémon that is X levels higher depending on your badge count.
* Print the party's icon sprites in the Trainer Card, kinda like in FRLG.
* Add a post game battle outside of the Winstrate House
  * It'd be a rematch with all family members, this time ending in a battle against Ace Trainer Vito.
  * From there on, Vito would be located at Route 111. Walking near the Trainer Hill's entrnace.
* Maybe make Lanette give the Player a Togepi Egg after they unlock the NatDex.
* Update some of the shops at the Battle Frontier. Put the Power Items, Bottle Caps and things like that.
* Put the Dome and Helix Fossils in the spot where the Claw and Root Fossils used to be in RS.
  * In the same manner, the one that is left alone would drown in sand and later appear in the Desert Underpass.
* Put a Pokémaniac either in the Granite Cave or the Victory Road, selling either the Armor or the Skull Fossils at random.
  * The other one would also be found at Desert Underpass afterward.
* Add a variable to the BattleStruct struct for Rest.
  * The variable would be cleared at CANCELLER_ASLEEP and for as long as it's set, it'd heal 1/16 of the Pokémon's max HP. 
* Raise the levels of the swimmers located between the western and eastern parts of Route 103.
* Tweak Route 110's map
  * Do a very small change to the piece of land at Route 110 where there's a Rare Candy inside an item ball, so the Player can surf in a straight line back and forth.
  * Add a special at the gateway building connecting Route 110 with the Cycling Road, to put the Player in the bike if they have one, when they pass in front of the manager automatically,
  * Remove the wild grass tiles that are located in the lower diagonals from the rival's initial position to avoid the mugshot palette issue.
* Revamp the encounters at New Mauville, both species and levels wise.
  * Also change the static Voltorb encounters with Electrode instead.
* Modify the levels of the static Electrode at Team Aqua's Hideout.
* Rework IsGrassTypeInParty to make it more dynamic.
* Add some daily events like those in FRLG or DPPt.
  * An NPC that asks you to show them X or Y Pokémon for a reward.
  * An NPC that asks you to show them a Pokémon of X or Y level for a reward.
  * An NPC that asks you to show them a Pokémon with X or Y nature for a reward.
* Modify the encounters at Team Magma's Hideout. It's all steamy and close to a volcano, but the only Fire type Pokémon in here is Torkoal.
* Bad End 3: Wally kills the wild Ralts at Route 102 accidentally.
* Repurpose the Move Reminder and the Name Rater.
  * Having added the PLA-inspired "Relearn a move from inside the party screen" feature, a dedicated NPC for that serves no purpose.
  * The same goes for the Name Rater.
* Add high level encounters on the Sky Tower (second visit).
* Allow the player to use Fly in the Abandoned Ship at Route 108, because there's no reason not to.
* Change the held items of Chinchou, Clamperl, Corsola and Relicanth back to the Yellow, Blue, Red and Green Shards.
  * Put Gorebyss and Huntail in some of the fishing tables. 
  * I should change the Scanner reward after that. Following ORAS' lead, I should make Capt. Stern give the Mystic Ticket.
* Change the dialogue of the ruinmaniac at Route 120 based on the value of FLAG_REGI_DOORS_OPENED.
* Rethink the new values for the bag pocket counts in `include/constants/global.h`.
* Add some extra dialogue to the Player's mother's script explaining about the auto run toggle.
  * It's all in the details.
* Tweak the Poké Ball prices.
  * No, I won't make them as ridiculously cheap as LGPE, but some could be cheapened just a tiny bit, like the Great Balls and Ultra Balls.
* Swap the spaces at data/scripts/pkmn_center_nurse.inc with tabs.
* Don't hide the map name popup at Rustboro City, because there isn't a reason to do so.
  * Inconsequential, but change the given values to VAR_RUSTBORO_CITY_STATE in some scripts, so it'll go from 6 to 7 instead of 8.
* Add a KANTOOOO reference after the tag battle with Steven in Mossdeep.
  * Steven, being the son of Devon Corp's President, should probably know about Master Balls because the project was kickstarted by the Silph Corp from Kanto's Saffron City.
* After the Player becomes the Champion and defeats their rival for the last time, they'll be clueless about getting the Pokémon League to open again. I should fix that.
  * Maybe I should have the rival mention the president of Devon and Steven in some manner, and work my way from there.
* In retrospect, I'm not happy with having the Player repeat the Pokémon League challenge to access the 6th rival battle in Birch's Lab.
  * Maybe I should allow the Player to face the Rival once per day if FLAG_IS_CHAMPION is set.
* Insert new emotes.
  * Change the exclamation mark emote in Steven's post battle dialogue at Meteor Falls with an ellipsis emote instead.
* Apply the following commits and tweak stuff as needed: [83c8a58](https://github.com/BuffelSaft/pokeemerald/commit/e83c8a58), [eb8606d6](https://github.com/BuffelSaft/pokeemerald/commit/eb8606d6), [e4b25c91](https://github.com/BuffelSaft/pokeemerald/commit/e4b25c91), [c66c1e03](https://github.com/BuffelSaft/pokeemerald/commit/c66c1e03).
* Set the palette of the Item Balls in the overworld to yellow if they contain a TM, just like in the newer games.
* Reduce the speed at which the start menu's clock is updated.
* Consider implementing multiple `gPartyMenuPokeball_Gfx`, each based on the type of ball that the Pokémon in question was caught with.
  * Inspired by [Lucidious89's script for Pokémon Essentials](https://www.pokecommunity.com/showthread.php?t=356862).
* Do a bit of summary screen reworking
  * Show EV and IV in the 2nd page of the summary screen, alongside stat points. [Example](pics/stats.jpg).
* Allow to release Bad Eggs from the PC.
* Update some Pokémon's base held items taking inspiration from Legends Arceus.
* Make the Apricorns obtainable and cook something similar to the fossil selection to craft Apricorn Balls, perhaps in Rustboro.
* Maybe incorporate Wally into the story somehow? I don't know, but I want him to feel at least a tiny little bit more relevant. That gap between Mauville City and Victory Road is just ridiculous.
* Buff certain trainers
  * The swimmers in Route 103, who have Lv15 Pokémon despite not being fightable until you get the 5th badge.
  * Jennifer in Route 120. She has a Milotic in RS that used to give me issues when I rushed through it with Torchic. Other important trainers use that though, so let's give her a Gyarados.
* Take some inspiration from ORAS for some things, like the Float Stone's location.
* Buff the encounters at Sky Pillar after the conflict in Sootopolis is solved.
* When a Gym Leader rematch is ready to happen, make said gym's trainers battle the Player again.
* Make the Cave of Origin available in the postgame. It'll be the place to rematch Wallace after the league.
* Alternatively to the Artisan's Cave plan and in relation to Jirachi, I could add an item called "Wish Tag" that would start an event if used in front of the white rock at Mossdeep City, maybe.
* Make the rival give you an egg of their starter after the 6th rival battle.
  * Maybe I could make it so Wally received the last starter in-universe, and after beating him he would give you an egg of that one.
* Draw a text box in battles, similar to the one that is displayed during level ups, to show the EV a Pokémon got in a battle, and a toggle for it in the Options menu.
* Replace Shelly's overworld sprites with [the ones made by Swizzler121](https://www.spriters-resource.com/custom_edited/pokemoncustoms/sheet/8151/).

## Misc. Notes

### BDSP Item Pockets Notes:
* Medicine: Potions, Antidotes, Old Gateau, Revives, Ethers and any equivalents.
* Poké Balls: Self explanatory.
* Battle Items: X Attack, Dire Hit, etc.
* Berries: Self explanatory.
* Other Items: Shards, Plates, Evo Stones, Held Items and others such as the Escape Rope.
* TMs: Self explanatory.
* Treasures: Fossils, Mushrooms, and other sellables such as Stardust.
* Key Items: Self explanatory.
