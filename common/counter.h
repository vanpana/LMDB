#ifndef LMDB_COUNTER_H
#define LMDB_COUNTER_H


template <class T>
class Counter
{
private:
    static int total, alive;
public:
    Counter()
    {
        total++;
        alive++;
    }
    ~Counter()
    {
        alive--;
    }
    static int GetTotal()
    {

        return total;
    }

    static int GetAlive()
    {
        return alive;
    }
};



#endif //LMDB_COUNTER_H
