
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char char_u ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char) ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 int FUNC_1 (char**) ;
 char* VAR_7 ;

int
FUNC_2()
{
    char_u *VAR_8 = VAR_7;
    long VAR_9 = 0;
    long VAR_10 = 0;
    long VAR_11 = 0;

    if (!FUNC_0(*VAR_8))
 return VAR_0;

    VAR_9 = (FUNC_1(&VAR_8) * 10) / (VAR_3 / 102);
    if (*VAR_8 != ',')
 return VAR_0;
    ++VAR_8;
    if (!FUNC_0(*VAR_8))
 return VAR_0;
    VAR_10 = (FUNC_1(&VAR_8) * 102) / (VAR_3 / 10);
    if (*VAR_8 != ',')
 return VAR_0;
    ++VAR_8;
    if (!FUNC_0(*VAR_8))
 return VAR_0;
    VAR_11 = FUNC_1(&VAR_8) * 1024;
    if (*VAR_8 != VAR_1)
 return VAR_0;

    if (VAR_9 == 0 || VAR_10 == 0 || VAR_11 == 0 || VAR_10 > VAR_9)
 return VAR_0;

    VAR_6 = VAR_9;
    VAR_5 = VAR_10;
    VAR_4 = VAR_11;
    return VAR_2;
}
