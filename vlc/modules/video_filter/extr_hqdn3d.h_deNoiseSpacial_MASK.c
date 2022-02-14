
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int,int*) ;

__attribute__((used)) static void FUNC_1(
                    unsigned char *VAR_0,
                    unsigned char *VAR_1,
                    unsigned int *VAR_2,
                    int VAR_3, int VAR_4, int VAR_5, int VAR_6,
                    int *VAR_7, int *VAR_8)
{
    long VAR_9 = 0, VAR_10 = 0;
    unsigned int VAR_11;
    unsigned int VAR_12;


    VAR_12 = VAR_2[0] = VAR_11 = VAR_0[0]<<16;
    VAR_1[0]= ((VAR_12+0x10007FFF)>>16);


    for (long VAR_13 = 1; VAR_13 < VAR_3; VAR_13++){
        VAR_12 = VAR_2[VAR_13] = FUNC_0(VAR_11, VAR_0[VAR_13]<<16, VAR_7);
        VAR_1[VAR_13]= ((VAR_12+0x10007FFF)>>16);
    }

    for (long VAR_14 = 1; VAR_14 < VAR_4; VAR_14++){
        VAR_9 += VAR_5, VAR_10 += VAR_6;

        VAR_11 = VAR_0[VAR_9]<<16;
        VAR_12 = VAR_2[0] = FUNC_0(VAR_2[0], VAR_11, VAR_8);
        VAR_1[VAR_10]= ((VAR_12+0x10007FFF)>>16);

        for (long VAR_15 = 1; VAR_15 < VAR_3; VAR_15++){

            VAR_11 = FUNC_0(VAR_11, VAR_0[VAR_9+VAR_15]<<16, VAR_7);
            VAR_12 = VAR_2[VAR_15] = FUNC_0(VAR_2[VAR_15], VAR_11, VAR_8);
            VAR_1[VAR_10+VAR_15]= ((VAR_12+0x10007FFF)>>16);
        }
    }
}
