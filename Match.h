#ifndef MATCH_
#define MATCH_

#include <iostream>
#include "Date.h"

using namespace std;

template <typename E>
class Match {
public:
    Match();
    Match(Date d, shared_ptr<E> a, shared_ptr<E> b);
    Match(const Match& m);
    ~Match();
    
    Match<E>& operator=(const Match& m);
    
    shared_ptr<E>simuler(); 
    
    void setDate(Date d);
    void setEquipeA(const shared_ptr<E> & eA);
    void setEquipeB(const shared_ptr<E>  &eB);
    void setEquipes(const shared_ptr<E>  &eA, 
                   const shared_ptr<E>  & eB);
    
    shared_ptr<E> getEquipeA() const;
    shared_ptr<E> getEquipeB() const;
    
    int getScoreA() const;
    int getScoreB() const;
    int getScore(const shared_ptr<E> & equipe);
    pair<int,int> getScores() const;
    
    bool estVictorieuse(const shared_ptr<E>  & equipe);
    
    template<typename Eq>
    friend ostream& operator<<(ostream& os, const Match<Eq>& m);
    
private:
    Date date_;
    shared_ptr<E> equipeA_;
	shared_ptr<E> equipeB_;
    int scoreA_;
	int scoreB_;
};

#endif 

/*simuler()
{
	// Le nombre de manches est aleatoire, entre 3 et 10.
	unsigned int nombreDeManches = (rand()%(10-3))+3;
    
	for (unsigned int i=0; i<nombreDeManches; i++)
	{
		// Attaque de l'equipe A
		if (equipeA_->calculAttaque() >= equipeB_->calculDefense()) {
			scoreA_ += 1;        
		}    
		// Attaque de l'equipe B
		if (equipeB_->calculAttaque() >= equipeA_->calculDefense()) {
			scoreB_ += 1;
		}
	}
    if (scoreA_ >= scoreB_) {  
        ++*equipeA_;
        return equipeA_;
    }
    else {
        ++*equipeB_;
        return equipeB_;
    }
}
*/

#endif 
