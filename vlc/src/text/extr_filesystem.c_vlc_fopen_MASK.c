
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int,int) ;

FILE *FUNC_3 (const char *VAR_9, const char *VAR_10)
{
    int VAR_11 = 0, VAR_12 = 0;

    for (const char *VAR_13 = VAR_10; *VAR_13; VAR_13++)
    {
        switch (*VAR_13)
        {
            case 'r':
                VAR_11 = VAR_4;
                break;

            case 'a':
                VAR_11 = VAR_8;
                VAR_12 |= VAR_2 | VAR_0;
                break;

            case 'w':
                VAR_11 = VAR_8;
                VAR_12 |= VAR_2 | VAR_7;
                break;

            case 'x':
                VAR_12 |= VAR_3;
                break;

            case '+':
                VAR_11 = VAR_5;
                break;
        }
    }

    int VAR_14 = FUNC_2 (VAR_9, VAR_11 | VAR_12, 0666);
    if (VAR_14 == -1)
        return ((void*)0);

    FILE *VAR_15 = FUNC_0 (VAR_14, VAR_10);
    if (VAR_15 == ((void*)0))
        FUNC_1 (VAR_14);

    return VAR_15;
}
