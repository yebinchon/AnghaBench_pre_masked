
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int_fast32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int const**,size_t*) ;
 char* FUNC_1 (int const*,int) ;
 char* FUNC_2 (int const*,int) ;
 char* FUNC_3 (int const*,int) ;

__attribute__((used)) static char *FUNC_4(const uint8_t **restrict VAR_3,
                              size_t *restrict VAR_4)
{
    if (*VAR_4 < 1)
    {
        VAR_2 = VAR_0;
        return ((void*)0);
    }

    bool VAR_5 = ((*VAR_3)[0] & 0x80) != 0;
    int_fast32_t VAR_6 = FUNC_0(7, VAR_3, VAR_4);
    if (VAR_6 < 0)
        return ((void*)0);

    if ((size_t)VAR_6 > *VAR_4)
    {
        VAR_2 = VAR_0;
        return ((void*)0);
    }

    if (VAR_6 > 65535)
    {
        VAR_2 = VAR_1;
        return ((void*)0);
    }

    const uint8_t *VAR_7 = *VAR_3;

    *VAR_3 += VAR_6;
    *VAR_4 -= VAR_6;

    return (VAR_5 ? FUNC_1 : FUNC_2)
            (VAR_7, VAR_6);
}
