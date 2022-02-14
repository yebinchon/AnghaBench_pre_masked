
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,int *,int) ;
 float VAR_0 ;
 int FUNC_1 (int *,int *,int,int) ;
 int FUNC_2 (int *,int *,int,int,int,int) ;
 int FUNC_3 (int *,int *,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (float) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

void FUNC_9( FILE *VAR_1, FILE *VAR_2, int VAR_3 ) {
    FUNC_5( "Sweeping (text) alpha..." );
    for( int VAR_4 = 0xFF; VAR_4 >= -0xFF ; VAR_4 -= 8 ) {
        FUNC_1( VAR_1, VAR_2, VAR_3, FUNC_4( VAR_4 ) );
        FUNC_8( 20000 );
    }
    FUNC_1( VAR_1, VAR_2, VAR_3, 255 );
    FUNC_5( " done\n" );

    FUNC_5( "Sweeping colors..." );
    for( int VAR_5 = 0xFF; VAR_5 >= 0x00 ; VAR_5 -= 8 ) {
        FUNC_2( VAR_1, VAR_2, VAR_3, VAR_5, 0xFF, 0xFF );
        FUNC_8( 20000 );
    }
    for( int VAR_6 = 0xFF; VAR_6 >= 0x00 ; VAR_6 -= 8 ) {
        FUNC_2( VAR_1, VAR_2, VAR_3, 0x00, VAR_6, 0xFF );
        FUNC_8( 20000 );
    }
    for( int VAR_7 = 0xFF; VAR_7 >= 0x00 ; VAR_7 -= 8 ) {
        FUNC_2( VAR_1, VAR_2, VAR_3, 0x00, 0x00, VAR_7 );
        FUNC_8( 20000 );
    }
    FUNC_2( VAR_1, VAR_2, VAR_3, 0x00, 0x00, 0x00 );
    FUNC_5( " done\n" );

    FUNC_5( "Getting size..." );
    int VAR_8 = FUNC_0( VAR_1, VAR_2, VAR_3 );
    FUNC_5( " done. Size is %d\n", VAR_8 );

    FUNC_5( "Sweeping size..." );
    for( float VAR_9 = 0; VAR_9 <= VAR_0 ; VAR_9 += VAR_0 / 128.0 ) {
        FUNC_3( VAR_1, VAR_2, VAR_3,
                     VAR_8 * ( 1 + 3 * FUNC_6( VAR_9 ) ) );
        FUNC_8( 20000 );
    }
    FUNC_3( VAR_1, VAR_2, VAR_3, VAR_8 );
    FUNC_5( " done\n" );

    FUNC_7( 5 );
}
