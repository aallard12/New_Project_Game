/* --- MoineGuerrier.h --- */

/* ------------------------------------------
Author: LeBGAnto
Date: 26/10/2025
------------------------------------------ */

#include "Heros.h"

#ifndef MOINEGUERRIER_H
#define MOINEGUERRIER_H

class MoineGuerrier : public Heros{
private:

public:
    MoineGuerrier(int _pv, int _attaque, int _pvMax, int _xp, int _niveau);
    ~MoineGuerrier();
};

#endif // MOINEGUERRIER_H
