
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int) ;
 void** VAR_3 ;

__attribute__((used)) static char *FUNC_2(const char *VAR_4)
{
    size_t VAR_5 = 0, VAR_6 = 0;

    for (size_t VAR_7 = 0; VAR_4[VAR_7] != '\0'; VAR_7++)
    {
        unsigned char VAR_8 = VAR_4[VAR_7];

        if (VAR_8 < 128)
            VAR_5++;
        else
            VAR_6++;
    }

    if (FUNC_1((VAR_5 + VAR_6) > (VAR_1 / 4)))
    {
        VAR_2 = VAR_0;
        return ((void*)0);
    }

    char *VAR_9 = FUNC_0(VAR_5 + 3 * VAR_6 + 1), *VAR_10;
    if (FUNC_1(VAR_9 == ((void*)0)))
        return ((void*)0);

    for (VAR_10 = VAR_9; *VAR_4 != '\0'; VAR_4++)
    {
        unsigned char VAR_11 = *VAR_4;

        if (VAR_11 < 128)
            *(VAR_10++) = VAR_11;
        else
        {
            *(VAR_10++) = '%';
            *(VAR_10++) = VAR_3[VAR_11 >> 4];
            *(VAR_10++) = VAR_3[VAR_11 & 0xf];
        }
    }

    *VAR_10 = '\0';
    return VAR_9;
}
