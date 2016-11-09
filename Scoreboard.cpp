#include "Scoreboard.h"
Scoreboard::Scoreboard() {
  m_score = new double*[100];
  for(int i = 0; i < 100; i++) {
    m_score = new double[100];
  }
  players = 100;
  rounds = 100;
}
Scoreboard::Scoreboard(int payers, int round) {
  m_score = new double*[players];
  for(int i = 0; i < players; i++) {
    m_score = new double[round];
  }
  players = 100;
  rounds = 100;
}
Scoreboared::~Scoreboard() {
  for(int i = 0; i < players; i++) {
    delete [] m_score[i];
  }
  delete [] m_score;
}


void setScore(int competitor, int period, int score)
{
    
}

int getScore(int competitor, int period)
{
    
}

int getTotalScore(int competitor)
{
    m_scores[competitor] += score[competitor];
    return totalScore[competitor
}

void clearScoreboard()
{
    for (int i = 0; i < totalScore.size(); i++)
    {
        totalScore[i] = 0;
    }
}
