/*
 * Scoreboard.h
 *
 * Author: CSUDeals Team
 * Updated: Nov 9, 2016
 * Description: 
 *
 */

#ifndef SCOREBOARD_H_
#define SCOREBOARD_H_

class Scoreboard : public IScoreboard
{

  public:
<<<<<<< HEAD
         Scoreboard();
         Scoreboard(int players, int rounds);
         ~Scoreboard();
=======
    Scoreboard();
    Scoreboard(int players, int periods);
    ~Scoreboard();

>>>>>>> e825bdb79b270d01a798325a4a41907fd1d8e3ef
  	/*
  	 * void setScore(int,int,int)
  	 *  Sets the score for one competitor for a given period. Out of range
  	 *  values should result in no changes in the scoreboard.
  	 */
	  void setScore(int competitor, int period, int score);

	  /*
  	 * void getScore(int,int)
  	 *  Returns the score for one competitor for a given period. Out of range
  	 *  values should return INT_MIN
  	 */
	 int getScore(int competitor, int period);

	  /*
  	 * int getTotalScore(int)
  	 *  Gets the sum of all periods for the given competitor. Out of range
  	 *  values should return 0
  	 */
	  int getTotalScore(int competitor);

	  /*
  	 * void clearScoreboard()
  	 *  Resets a scoreboard to have scores of 0 for every competitor in
  	 *  every period
  	 */
<<<<<<< HEAD
	void clearScoreboard();
        private:
          double* m_score;
          double m_players
          double m_rounds;

=======
	  void clearScoreboard();
>>>>>>> e825bdb79b270d01a798325a4a41907fd1d8e3ef

  private:
    double * m_scores;
};
#endif /* SCOREBOARD_H_ */
