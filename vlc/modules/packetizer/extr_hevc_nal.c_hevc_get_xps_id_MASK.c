
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int bs_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__ const*,size_t) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__ const*) ;

bool FUNC_4(const uint8_t *VAR_5, size_t VAR_6, uint8_t *VAR_7)
{
    if(VAR_6 < 3)
        return 0;

    uint8_t VAR_8 = FUNC_3(VAR_5);
    bs_t VAR_9;
    FUNC_0(&VAR_9, &VAR_5[2], VAR_6 - 2);
    if(VAR_8 == VAR_0)
    {
        *VAR_7 = FUNC_2( &VAR_9 );
        if(*VAR_7 > VAR_2)
            return 0;
    }
    else
    {
        *VAR_7 = FUNC_1( &VAR_9, 4 );
        if(VAR_8 == VAR_1)
        {
            if(*VAR_7 > VAR_3)
                return 0;
        }
        else if(*VAR_7 > VAR_4)
            return 0;
    }
    return 1;
}
