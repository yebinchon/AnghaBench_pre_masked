
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,size_t) ;
 scalar_t__ FUNC_4 (int ) ;
 void** VAR_0 ;

__attribute__((used)) static char *FUNC_5 (const char *VAR_1, size_t *restrict VAR_2)
{
    char *VAR_3 = FUNC_2 (3 * *VAR_2 + 1);
    if (FUNC_4(VAR_3 == ((void*)0)))
        return ((void*)0);

    char *VAR_4 = VAR_3;
    for (size_t VAR_5 = 0; VAR_5 < *VAR_2; VAR_5++)
    {
        unsigned char VAR_6 = VAR_1[VAR_5];

        if (FUNC_0 (VAR_6))
            *(VAR_4++) = VAR_6;


        else
        {
            *(VAR_4++) = '%';
            *(VAR_4++) = VAR_0[VAR_6 >> 4];
            *(VAR_4++) = VAR_0[VAR_6 & 0xf];
        }
    }

    *VAR_2 = VAR_4 - VAR_3;
    VAR_4 = FUNC_3 (VAR_3, *VAR_2 + 1);
    return FUNC_1(VAR_4 != ((void*)0)) ? VAR_4 : VAR_3;
}
