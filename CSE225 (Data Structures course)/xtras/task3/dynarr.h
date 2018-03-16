#ifndef DYNARR_H
#define DYNARR_H

class dynarr
{
private:
    int **data;
    int row;
    int col;

public:
    dynarr();
    dynarr(int, int);
    ~dynarr();
    void set(int,int, int);
    int get(int,int);
    void allocate(int,int);
};
#endif // DYNARR_H

