
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_int_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char** VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_8( libvlc_int_t *VAR_3 )
{
    for( unsigned VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
        FUNC_3( VAR_3, VAR_2[VAR_4], VAR_1 );

    for( unsigned VAR_5 = 0; VAR_5 < VAR_0; VAR_5++ )
        FUNC_7( VAR_3, VAR_2[VAR_5], VAR_2[VAR_5] );

    for( unsigned VAR_6 = 0; VAR_6 < VAR_0; VAR_6++ )
    {
        char *VAR_7 = FUNC_6( VAR_3, VAR_2[VAR_6] );

        FUNC_0( VAR_7 != ((void*)0) );
        FUNC_0( !FUNC_2( VAR_7, VAR_2[VAR_6] ) );
        FUNC_1( VAR_7 );
    }

    for( unsigned VAR_8 = 0; VAR_8 < VAR_0; VAR_8++ )
        FUNC_4( VAR_3, VAR_2[VAR_8] );


    FUNC_3( VAR_3, "bla", VAR_1 );
    FUNC_0( FUNC_5( VAR_3, "bla" ) == ((void*)0) );
    FUNC_7( VAR_3, "bla", "" );
    FUNC_0( FUNC_5( VAR_3, "bla" ) == ((void*)0) );
    FUNC_7( VAR_3, "bla", "test" );

    char *VAR_9 = FUNC_5( VAR_3, "bla" );
    FUNC_0( VAR_9 != ((void*)0) );
    FUNC_0( !FUNC_2( VAR_9, "test" ) );
    FUNC_1( VAR_9 );
    FUNC_4( VAR_3, "bla" );
}
