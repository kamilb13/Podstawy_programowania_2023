#ifndef DANEOS_H_
#define DANEOS_H_
#define DL_LAN 32

struct daneos_st{
    char imie[DL_LAN];
    char nazwisko[DL_LAN];
};

//typdef
typedef struct daneos_st daneos; //Utworzenie nowego typu o nazwie daneos

//prototypy funkcji
void wprowadz(daneos *);
void wyswietl(const daneos *);

#endif // DANEOS_H_
