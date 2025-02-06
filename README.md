# CS121_C++HorseRace

Algorithm (Non-OOP)
```
inline void printTrack(int horseName, int horsePosition)
  out /n
  for loop until horsePosition, printing "."
  prints horseName
  for loop 15-horsePosition(rest of track), printing "."

inline bool checkWin(int horseName, int horsePosition, bool raceStats)
  if horsePosition == 15
    T displays victory notification and returns false
    F not, returns raceStats

int main()
  int[] horsePos = {0, 0, 0, 0, 0};
  sboolraceContinue int false;

  while(raceContinue)
    prompts enter to continue
    pause until entered
    for (u{0-4})
      50% chance
        T: Move, run checkWin(u, horsePos[u], raceContinue)
      printTrack(u, horsePos[u]);
  end main

```

Algorithm OOP:
```
class Horse:
  public
    int name, int position = 0

    bool move(int flip)
      if flip == 1
        position++
        if position == 15
          display win message, return true
      printLane();
      return false

  void printlane()
    out /n        
    for loop until Position, printing "."
    prints Name
    for loop 15-Position(rest of track), printing "."

int main()
  initialize 5 Horses
  bool raceContinue = true
  for loop to set names 0-4

  while(raceContinue)
    prompt enter to continue
    wait until enter
    for (u{0-4})
      stack if and Horse[u].move function into single line command, checking if true
        T: raceContinue = false
  return 0
```
