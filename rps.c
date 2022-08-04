enum tool { ROCK, PAPER, SCISSORS };
enum outcome { P1_WON, P2_WON, DRAW };

enum outcome rps(enum tool p1, enum tool p2) {
  switch (p1) {
  case ROCK: {
    switch (p2) {
    case PAPER: {
      return P2_WON;
      break;
    }
    case ROCK: {
      return DRAW;
      break;
    }
    case SCISSORS: {
      return P1_WON;
    }
    default: {
      break;
    }
    }
  }
  case PAPER: {
    switch (p2) {
    case PAPER: {
      return DRAW;
      break;
    }
    case ROCK: {
      return P1_WON;
      break;
    }
    case SCISSORS: {
      return P2_WON;
    }
    default: {
      break;
    }
    }
  }
  case SCISSORS: {
    switch (p2) {
    case PAPER: {
      return P1_WON;
      break;
    }
    case ROCK: {
      return P2_WON;
      break;
    }
    case SCISSORS: {
      return DRAW;
    }
    default: {
      break;
    }
    }
  }
  default: {
    break;
  }
  }
  return DRAW;
}

int main() { printf("%s", rps(ROCK, PAPER)); }