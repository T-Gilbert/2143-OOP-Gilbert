Trevor Gilbert  CMPS 2143 - A05
Player
D&D Gameplay
Character	+name: string
+characterClass: string
+level: int
+strength: int
+constitution: int
+hitPoints: int	

Action
Duration
Defense	+yourself: bool
+yourTeam: bool	+numTurns: int
Attack	+character: bool
+oppTeam: bool	
Campaign	+numGames: int
+numRounds: int
+finishingScore: int	




Potions
Brutal
Good	+Paladin: string
+Cleric: string
+Druid: string
+Ranger: string	

Neutral	+Bard: string
+Cleric: string
+Druid: string
+Ranger: string
+Rogue: string	

Evil	Warlock: string
Wizard: string
Bard: string
Cleric: string
Ranger: string
Rogue: string	
Spell	+flames: bool
+forceField: bool
+invisibility: bool	+intensity: int
+distance: int

Weapon	+axe: bool 
+sword: bool
+bow: bool
+slingshot: bool	+intensity: int
+distance: int
Location
Spell Caster	+melt: bool
+curse: bool
+weaken: bool
+shrink: bool	+enemyDamage: int
+selfDamage: int
+teamDamage: int



Background	+divine: bool
+nature: bool
+cave: bool
+space: bool
+cemetary: bool	+daytime: bool
+night: bool
Melee Combatant	+headShot: bool
+bodyHit: bool	+enemyDamage: int
+selfDamage: int
+teamDamage: int
