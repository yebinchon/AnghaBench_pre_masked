
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;

int
FUNC_2(int VAR_2)
{
    if(FUNC_1())
        return VAR_1;

    int VAR_3 = 0;
    int VAR_4 = 10;
    while(1)
    {
        FUNC_0(VAR_4);
        if(FUNC_1())
            return VAR_1;
        VAR_3 += VAR_4;
        if((VAR_2 > -1) && (VAR_3 >= VAR_2))
            return VAR_0;
    }
}
