#include "type_ch.h"

TipoEnum type_check(TipoEnum t1, TipoEnum t2)
{
    if (t1 == String && t2 != String || t1 != String && t2 == String)
    {
        return Error;
    }
    else if (t1 == Integer && t2 == Real || t1 == Real && t2 == Integer)
    {
        return Real;
    }
    else if (t1 == Procedure || t2 == Procedure)
    {
        return Error;
    }
    else if (t1 == Integer && t2 == Integer)
    {
        return Integer;
    }
    else if (t1 == Real && t2 == Real)
    {
        return Real;
    }
    
    // Retorna error si uno de los tipos es Error
    return Error;
}