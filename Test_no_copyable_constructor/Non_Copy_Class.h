template< typename T >
class NonCopy
{
protected:
    NonCopy(){};
    virtual ~NonCopy(){};
private:
    NonCopy(const NonCopy&);
    NonCopy& operator=(const NonCopy&);
};