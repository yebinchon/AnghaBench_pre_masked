
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double*,unsigned char*,int) ;

int FUNC_1(const unsigned char *VAR_2, int VAR_3, double *VAR_4)
{
    if (!VAR_2 || !VAR_4) {
        return VAR_0;
    }
    unsigned char VAR_5[8];
    const unsigned char *VAR_6 = VAR_2 + VAR_3;
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {



        VAR_5[VAR_7] = VAR_6[8 - 1 - VAR_7];
    }
    FUNC_0(VAR_4, VAR_5, 8);
    return VAR_1;
}
