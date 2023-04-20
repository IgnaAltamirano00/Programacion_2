#include <string>
using namespace std;

class cuenta{
    private:
        string t;
        float cant;
    public:
        cuenta(string t, float c);
        void sett(string titular);
        void gett();
        void setcant(float cantidad);
        void getcant;
};