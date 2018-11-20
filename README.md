# Glorp
A demo showing off particle improvments in Unreal*.

[Get the latest release here.](https://github.com/GameTechDev/Glorp/releases/latest)

## Controls
### Keyboard
**[ W/A/S/D ]** - Move the controlled glorper in the main map.

**[ Left Shift ]** - Spew glorp in the main map. The longer this is held, the stronger the particle stream.

**[ Left Ctrl ]** - Toggle AI for all players in the main scene on/off.

**[ 1 ]** - Toggle the aysc tick optimization.

**[ 2 ]** - Toggle the parallel particle collsion optimization.

**[ Tab ]** - Switch which player the keyboard controls in the main map, or toggle between CPU and GPU particles in the Dynamic Test map.

**[ + ]** - Add one particle system to the dynamic test map.

**[ - ]** - Remove one particle system to the dynamic test map.

**[ ( ]** - Increase the number of particles systems that are lit in the dynamic test map.

**[ ) ]** - Decrease the number of particles systems that are lit in the dynamic test map.

### Controller
**[ Left Stick ]** - Move your glorper.

**[ Right Trigger ]** - Spew glorp.

**[ D-Pad Right ]** - Toggle the aysc tick optimization.

**[ D-Pad Down ]** - Toggle the parallel particle collsion optimization.

**[ D-Pad Left ]** - Toggle AI control on your glorper.

**[ D-Pad Up ]** - Cycle through the player colors.

**[ Face Buttons ]** - Set your glorper to a color as follows:

- *Top Face Button*: Yellow

- *Right Face Button*: Red

- *Bottom Face Button*: Green

- *Left Face Button*: Blue


## Maps
In all maps, the number of particles are displayed at the top of the screen, and overall CPU utilization is displayed and graphed at the bottom. 

### Glorp_Main

This scene is meant to be the main part of the demo. It is a small, 0-4 player game meant to show off the uses of CPU particles, and how much can be on screen at once. Each player controls a glorper that runs around the map, spewing glorp everywhere. If a glorper touches glorp of another color, they die. Last player or team left alive wins. 

*Switch to this map by pressing ~ and typing “open Glorp_Main".*

### GlorpDynamicTest

This map shows off the limits of how many particles can be displayed on screen. It’s good for showing off the optimizations and driving home how much visual fidelity you can get with CPU particles vs GPU particles. A given percent of particles of the main fountain effect are lit. (Displayed at the top of the screen) 

*Switch to this map by pressing ~ and typing “open GlorpDynamicTest”.*

### GlorpStressTestLit

This map shows off 4 complex, lit particle systems. It’s particularly good for showing off several well put together lit CPU systems. 

*Switch to this map by pressing ~ and typing “open GlorpStressTestLit”.*
