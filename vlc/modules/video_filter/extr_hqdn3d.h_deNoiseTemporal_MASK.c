
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned short,unsigned char,int*) ;

__attribute__((used)) static void FUNC_1(
                    unsigned char *VAR_0,
                    unsigned char *VAR_1,
                    unsigned short *VAR_2,
                    int VAR_3, int VAR_4, int VAR_5, int VAR_6,
                    int *VAR_7)
{
    unsigned int VAR_8;

    for (long VAR_9 = 0; VAR_9 < VAR_4; VAR_9++){
        for (long VAR_10 = 0; VAR_10 < VAR_3; VAR_10++){
            VAR_8 = FUNC_0(VAR_2[VAR_10]<<8, VAR_0[VAR_10]<<16, VAR_7);
            VAR_2[VAR_10] = ((VAR_8+0x1000007F)>>8);
            VAR_1[VAR_10]= ((VAR_8+0x10007FFF)>>16);
        }
        VAR_0 += VAR_5;
        VAR_1 += VAR_6;
        VAR_2 += VAR_3;
    }
}
