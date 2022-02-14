
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_int_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char** VAR_1 ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (int *,unsigned int*,unsigned int*,char const*) ;
 int FUNC_4 (int *,char const*,char*) ;

__attribute__((used)) static void FUNC_5( libvlc_int_t *VAR_2 )
{
    const char *VAR_3 = VAR_1[0];
    unsigned VAR_4, VAR_5;

    FUNC_1( VAR_2, VAR_3, VAR_0 );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) != 0 );

    FUNC_4( VAR_2, VAR_3, "123garbage" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) != 0 );

    FUNC_4( VAR_2, VAR_3, "4/5garbage" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) != 0 );

    FUNC_4( VAR_2, VAR_3, "6.7garbage" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) != 0 );

    FUNC_4( VAR_2, VAR_3, "." );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 0 && VAR_5 == 1 );

    FUNC_4( VAR_2, VAR_3, "010" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 10 && VAR_5 == 1 );

    FUNC_4( VAR_2, VAR_3, "30" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 30 && VAR_5 == 1 );

    FUNC_4( VAR_2, VAR_3, "30.0" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 30 && VAR_5 == 1 );

    FUNC_4( VAR_2, VAR_3, "030.030" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 3003 && VAR_5 == 100 );

    FUNC_4( VAR_2, VAR_3, "60/2" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 30 && VAR_5 == 1 );

    FUNC_4( VAR_2, VAR_3, "29.97" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 2997 && VAR_5 == 100 );

    FUNC_4( VAR_2, VAR_3, "30000/1001" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 30000 && VAR_5 == 1001 );

    FUNC_4( VAR_2, VAR_3, ".125" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 1 && VAR_5 == 8 );

    FUNC_4( VAR_2, VAR_3, "12:9" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 4 && VAR_5 == 3 );

    FUNC_4( VAR_2, VAR_3, "000000/00000000" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 0 && VAR_5 == 0 );

    FUNC_4( VAR_2, VAR_3, "12345/0" );
    FUNC_0( FUNC_3( VAR_2, &VAR_4, &VAR_5, VAR_3 ) == 0 );
    FUNC_0( VAR_4 == 1 && VAR_5 == 0 );

    FUNC_2( VAR_2, VAR_3 );
}
