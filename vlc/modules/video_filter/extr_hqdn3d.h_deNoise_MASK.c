
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned short,unsigned int,int*) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned int*,int,int,int,int,int*,int*) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned short*,int,int,int,int,int*) ;
 unsigned short* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(unsigned char *VAR_0,
                    unsigned char *VAR_1,
                    unsigned int *VAR_2,
                    unsigned short **VAR_3,
                    int VAR_4, int VAR_5, int VAR_6, int VAR_7,
                    int *VAR_8, int *VAR_9, int *VAR_10)
{
    long VAR_11 = 0, VAR_12 = 0;
    unsigned int VAR_13;
    unsigned int VAR_14;
    unsigned short* VAR_15=(*VAR_3);

    if(!VAR_15){
        (*VAR_3)=VAR_15=FUNC_3(VAR_4*VAR_5*sizeof(unsigned short));
        if(!VAR_15)
            return;
        for (long VAR_16 = 0; VAR_16 < VAR_5; VAR_16++){
            unsigned short* VAR_17=&VAR_15[VAR_16*VAR_4];
            unsigned char* VAR_18=VAR_0+VAR_16*VAR_6;
            for (long VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) VAR_17[VAR_19]=VAR_18[VAR_19]<<8;
        }
    }

    if(!VAR_8[0] && !VAR_9[0]){
        FUNC_2(VAR_0, VAR_1, VAR_15,
                        VAR_4, VAR_5, VAR_6, VAR_7, VAR_10);
        return;
    }
    if(!VAR_10[0]){
        FUNC_1(VAR_0, VAR_1, VAR_2,
                       VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
        return;
    }


    VAR_2[0] = VAR_13 = VAR_0[0]<<16;
    VAR_14 = FUNC_0(VAR_15[0]<<8, VAR_13, VAR_10);
    VAR_15[0] = ((VAR_14+0x1000007F)>>8);
    VAR_1[0]= ((VAR_14+0x10007FFF)>>16);



    for (long VAR_20 = 1; VAR_20 < VAR_4; VAR_20++){
        VAR_2[VAR_20] = VAR_13 = FUNC_0(VAR_13, VAR_0[VAR_20]<<16, VAR_8);
        VAR_14 = FUNC_0(VAR_15[VAR_20]<<8, VAR_13, VAR_10);
        VAR_15[VAR_20] = ((VAR_14+0x1000007F)>>8);
        VAR_1[VAR_20]= ((VAR_14+0x10007FFF)>>16);
    }

    for (long VAR_21 = 1; VAR_21 < VAR_5; VAR_21++){
        unsigned short* VAR_22=&VAR_15[VAR_21*VAR_4];
        VAR_11 += VAR_6, VAR_12 += VAR_7;

        VAR_13 = VAR_0[VAR_11]<<16;
        VAR_2[0] = FUNC_0(VAR_2[0], VAR_13, VAR_9);
        VAR_14 = FUNC_0(VAR_22[0]<<8, VAR_2[0], VAR_10);
        VAR_22[0] = ((VAR_14+0x1000007F)>>8);
        VAR_1[VAR_12]= ((VAR_14+0x10007FFF)>>16);

        for (long VAR_23 = 1; VAR_23 < VAR_4; VAR_23++){

            VAR_13 = FUNC_0(VAR_13, VAR_0[VAR_11+VAR_23]<<16, VAR_8);
            VAR_2[VAR_23] = FUNC_0(VAR_2[VAR_23], VAR_13, VAR_9);
            VAR_14 = FUNC_0(VAR_22[VAR_23]<<8, VAR_2[VAR_23], VAR_10);
            VAR_22[VAR_23] = ((VAR_14+0x1000007F)>>8);
            VAR_1[VAR_12+VAR_23]= ((VAR_14+0x10007FFF)>>16);
        }
    }
}
