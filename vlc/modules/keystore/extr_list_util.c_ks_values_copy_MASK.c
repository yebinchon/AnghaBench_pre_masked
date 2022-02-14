
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const* const) ;

int
FUNC_1(const char * VAR_3[VAR_0],
               const char *const VAR_4[VAR_0])
{
    for (unsigned int VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
    {
        if (VAR_4[VAR_5])
        {
            VAR_3[VAR_5] = FUNC_0(VAR_4[VAR_5]);
            if (!VAR_3[VAR_5])
                return VAR_1;
        }
    }
    return VAR_2;
}
