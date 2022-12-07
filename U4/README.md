# ⭕❌ **CONNECT FOUR** ❌⭕

Connect-Four is a tic-tac-toe-like two-player game in which players alternately place pieces on a vertical board 7 columns across and 6 rows high. Each player uses pieces of a particular color (commonly black and red, or sometimes yellow and red, but in this application it is used 'X' and 'O'), and the object is to be the first to obtain four pieces in a horizontal, vertical, or diagonal line. Because the board is vertical, pieces inserted in a given column always drop to the lowest unoccupied row of that column. As soon as a column contains 6 pieces, it is full and no other piece can be placed in the column.

Both players begin with 21 identical pieces, and the first player to achieve a line of four connected pieces wins the game. If all 42 men are played and no player has places four pieces in a row, the game is drawn.

Although, this is a game for two players, this program includes an option to play against CPU too. So, feel free to design the best strategy to master this game. 
<br />
<br />

## ***CONTENT***
<nav>
<li><a href="#development">Development and considerations</a></li>
<li><a href="#flowchart">Flowchart</a></li>
<li><a href="#codeexecution">Code Execution</a></li>
<li><a href="#evidences">Evidences</a></li>
<li><a href="#conclusions">Conclusions</a></li>
</nav>
<br />
<br />

<a id="development"></a>
## ***DEVELOPMENT AND CONSIDERATIONS 💻***
<br />

The programming language used to develop this game is C++. If you want to add a new functionality just download this code and start to modify what you desire.

1. First download this repository

<img src="../images/u4/download.png" alt="Download code" width="300"/>

2. Go to "U4  " folder. The programm is called "connect-four-application.cpp"

<img src="../images/u4/locationFile.png" alt="Download code" width="600"/>

3. All the program is based on functions. And in C++ the main function is called "main" where the application starts. Here you will find the calls to other functions. 

<img src="../images/u4/mainFunction.png" alt="Download code" width="300"/>

4. There are 7 functions, and each one carries out a specific task for the appropiate functionality of the game. It is recommended that if you want to add a new feature just create a new function to continue with this logic, however you can change the logic itself if it is neccesary to implement your new function.

<img src="../images/u4/functions.png" alt="Download code" width="200"/>
<br />
<br />

### **INTELLIGENCE ALGORITHM**
<br />

It's important to mention that the algorithm developed to endow intelligence to CPU was designed to avoid the user wins. It doesn't try to create a path to get the victory. 

In addition to that, this algorithm doesn't block all the user moves due to the game was thought to implement: easy, medium and hard mode. And to begin we face an easy mode algorithm, which it is not perfect at all, however with the integration of the medium and hard mode algorithm, it is going to be more difficult to defeat CPU.
<br />
<br />
 
<img src="../images/u4/intelligenceAlgo.png" alt="Download code" width="600"/>
<br />
<br />

<a id="flowchart"></a>
## ***FLOWCHART 📊***
<br />

### **main Function Flowchart**

<img src="../images/u4/flowchart-main.png" alt="Download code" width="800"/>

### **heading_game Function Flowchart**

<img src="../images/u4/flowchart-heading.png" alt="Download code" width="500"/>

### **validate_move Function Flowchart**

<img src="../images/u4/flowchart-validate.png" alt="Download code" width="800"/>

### **show_board Function Flowchart**

<img src="../images/u4/flowchart-show.png" alt="Download code" width="1200"/>

### **apply_move Function Flowchart**

<img src="../images/u4/flowchart-apply.png" alt="Download code" width="500"/>

### **computer_move Function Flowchart**

<img src="../images/u4/flowchart-computermove.png" alt="Download code" width="1200"/>

### **show_result Function Flowchart**

PART1
<img src="../images/u4/flowchart-show-result-1.png" alt="Download code" width="1200"/>

PART2
<img src="../images/u4/flowchart-show-result-2.png" alt="Download code" width="1200"/>

### **determine_winner Function Flowchart**
<img src="../images/u4/flowchart-winner.png" alt="Download code" width="1200"/>