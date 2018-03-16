#ifndef DYNARR_H
#define DYNARR_H

class dynarr
{
private:
    int *data;
    int size;

public:
    dynarr();
    dynarr(int);
    ~dynarr();
    void set(int, int);
    int get(int);
    void allocate(int);
};
#endif // DYNARR_H

