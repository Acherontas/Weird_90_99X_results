#ifndef XGEN_H
#define XGEN_H
#include <string>
using namespace std;
class xgen
{
    public:
        xgen();
        virtual ~xgen();
        xgen(const xgen& other);
        xgen& operator=(const xgen& other);
        int size_with(string sti);
        int swi=0;
        void create_nines_from(int param);
        long double internal_holder[1000];
        int inh=0;
        long double summer(string sti);
        void all_nines_from(int prm);
        long double in_h[1000];
        int ihn=0;
        int ar[2];
    protected:
    private:
};
#endif // XGEN_H
