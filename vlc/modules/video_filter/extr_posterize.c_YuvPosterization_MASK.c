
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int*,int*,int,int,int) ;

__attribute__((used)) static void FUNC_2( uint8_t* VAR_0, uint8_t* VAR_1,
                             uint8_t* VAR_2, uint8_t* VAR_3,
                             uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7,
                             int VAR_8 ) {
    int VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16, VAR_17;

    FUNC_1( &VAR_9, &VAR_10, &VAR_11, VAR_4, VAR_6, VAR_7 );
    FUNC_1( &VAR_12, &VAR_14, &VAR_13, VAR_4, VAR_6, VAR_7 );
    FUNC_1( &VAR_15, &VAR_16, &VAR_17, ( VAR_4 + VAR_5 ) / 2, VAR_6, VAR_7 );

    VAR_9 = FUNC_0( VAR_9, VAR_8 );
    VAR_10 = FUNC_0( VAR_10, VAR_8 );
    VAR_11 = FUNC_0( VAR_11, VAR_8 );
    VAR_12 = FUNC_0( VAR_12, VAR_8 );
    VAR_14 = FUNC_0( VAR_14, VAR_8 );
    VAR_13 = FUNC_0( VAR_13, VAR_8 );
    VAR_15 = FUNC_0( VAR_15, VAR_8 );
    VAR_16 = FUNC_0( VAR_16, VAR_8 );
    VAR_17 = FUNC_0( VAR_17, VAR_8 );

    *VAR_0 = ( ( 66 * VAR_9 + 129 * VAR_10 + 25 * VAR_11 + 128 ) >> 8 ) + 16;
    *VAR_1 = ( ( 66 * VAR_12 + 129 * VAR_14 + 25 * VAR_13 + 128 ) >> 8 ) + 16;
    *VAR_2 = ( ( -38 * VAR_15 - 74 * VAR_16 + 112 * VAR_17 + 128 ) >> 8 ) + 128;
    *VAR_3 = ( ( 112 * VAR_15 - 94 * VAR_16 - 18 * VAR_17 + 128 ) >> 8 ) + 128;
}
