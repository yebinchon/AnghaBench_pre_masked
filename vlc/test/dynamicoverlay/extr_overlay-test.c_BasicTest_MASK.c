
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (int *,int *,int,int,int) ;
 int FUNC_4 (int *,int *,int,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int) ;
 double FUNC_7 (float) ;
 int FUNC_8 (char*) ;
 double FUNC_9 (float) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

void FUNC_12( FILE *VAR_1, FILE *VAR_2, int VAR_3 ) {
    FUNC_8( "Activating overlay..." );
    FUNC_4( VAR_1, VAR_2, VAR_3, 1 );
    FUNC_8( " done\n" );

    FUNC_8( "Sweeping alpha..." );
    for( int VAR_4 = 0xFF; VAR_4 >= -0xFF ; VAR_4 -= 8 ) {
        FUNC_2( VAR_1, VAR_2, VAR_3, FUNC_6( VAR_4 ) );
        FUNC_11( 20000 );
    }
    FUNC_2( VAR_1, VAR_2, VAR_3, 255 );
    FUNC_8( " done\n" );

    FUNC_8( "Circle motion..." );
    for( float VAR_5 = 0; VAR_5 <= 2 * VAR_0 ; VAR_5 += VAR_0 / 64.0 ) {
        FUNC_3( VAR_1, VAR_2, VAR_3,
                     (int)( - FUNC_7( VAR_5 ) * 100.0 + 100.0 ),
                     (int)( - FUNC_9( VAR_5 ) * 100.0 + 100.0 ) );
        FUNC_11( 20000 );
    }
    FUNC_3( VAR_1, VAR_2, VAR_3, 0, 100 );
    FUNC_8( " done\n" );

    FUNC_8( "Atomic motion..." );
    FUNC_5( VAR_1, VAR_2 );
    FUNC_3( VAR_1, ((void*)0), VAR_3, 200, 50 );
    FUNC_10( 1 );
    FUNC_3( VAR_1, ((void*)0), VAR_3, 0, 0 );
    FUNC_1( VAR_1, VAR_2 );
    FUNC_0( VAR_2 );
    FUNC_0( VAR_2 );
    FUNC_8( " done\n" );

    FUNC_10( 5 );
}
