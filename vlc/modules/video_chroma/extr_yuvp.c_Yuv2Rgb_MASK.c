
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (double) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( uint8_t *VAR_2, uint8_t *VAR_3, uint8_t *VAR_4, int VAR_5, int VAR_6, int VAR_7 )
{





    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_9 = VAR_6 - 128;
    VAR_10 = VAR_7 - 128;
    VAR_11 = ((int) ((1.40200*255.0/224.0) * (1<<10) + 0.5)) * VAR_10 + (1 << (10 - 1));
    VAR_12 = - ((int) ((0.34414*255.0/224.0) * (1<<10) + 0.5)) * VAR_9
            - ((int) ((0.71414*255.0/224.0) * (1<<10) + 0.5)) * VAR_10 + (1 << (10 - 1));
    VAR_13 = ((int) ((1.77200*255.0/224.0) * (1<<10) + 0.5)) * VAR_9 + (1 << (10 - 1));
    VAR_8 = (VAR_5 - 16) * ((int) ((255.0/219.0) * (1<<10) + 0.5));
    *VAR_2 = FUNC_1( (VAR_8 + VAR_11) >> 10 );
    *VAR_3 = FUNC_1( (VAR_8 + VAR_12) >> 10 );
    *VAR_4 = FUNC_1( (VAR_8 + VAR_13) >> 10 );

}
