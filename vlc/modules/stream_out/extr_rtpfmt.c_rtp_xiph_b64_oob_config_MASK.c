
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,size_t) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int,void*,size_t,int**,size_t*,int*) ;
 char* FUNC_4 (int*,size_t) ;

__attribute__((used)) static char *FUNC_5(void *VAR_2, size_t VAR_3,
                                     uint8_t *VAR_4)
{
    uint8_t *VAR_5;
    size_t VAR_6;
    if (FUNC_3(9, VAR_2, VAR_3, &VAR_5, &VAR_6,
                              VAR_4) != VAR_0)
        return ((void*)0);


    FUNC_0(VAR_5, 1);

    uint32_t VAR_7 = VAR_1;
    FUNC_1(VAR_5 + 4, VAR_7 >> 8);
    VAR_5[6] = VAR_7 & 0xff;

    FUNC_1(VAR_5 + 7, VAR_6);

    char *VAR_8 = FUNC_4(VAR_5, VAR_6);
    FUNC_2(VAR_5);
    return VAR_8;
}
