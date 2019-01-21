#include "Singleton.h"

int main(int argc, char *argv[])
{
    Singleton *pSingleton = Singleton::GetInstance();
    pSingleton->Operation();
    return 0;
}

