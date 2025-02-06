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
