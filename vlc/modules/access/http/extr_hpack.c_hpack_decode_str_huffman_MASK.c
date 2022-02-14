
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int const*,int*) ;
 unsigned char* FUNC_2 (size_t) ;

__attribute__((used)) static char *FUNC_3(const uint8_t *VAR_2, size_t VAR_3)
{
    unsigned char *VAR_4 = FUNC_2(VAR_3 * 2 + 1);
    if (VAR_4 == ((void*)0))
        return ((void*)0);

    size_t VAR_5 = 0;
    int VAR_6 = -8 * VAR_3;
    VAR_2 += VAR_3;

    for (;;)
    {
        int VAR_7 = FUNC_1(VAR_2, &VAR_6);
        if (VAR_7 < 0)
        {
            VAR_1 = VAR_0;
            goto error;
        }


        VAR_4[VAR_5++] = VAR_7;

        if (VAR_7 == 256)
            break;
    }

    return (char *)VAR_4;

error:
    FUNC_0(VAR_4);
    return ((void*)0);
}
