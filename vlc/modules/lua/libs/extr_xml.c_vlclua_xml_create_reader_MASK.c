
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_reader_t ;
typedef int vlc_object_t ;
typedef int stream_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int ** FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11( lua_State *VAR_2 )
{
    vlc_object_t *VAR_3 = FUNC_9( VAR_2 );
    stream_t *VAR_4 = *(stream_t **)FUNC_0( VAR_2, 2, "stream" );

    xml_reader_t *VAR_5 = FUNC_10( VAR_3, VAR_4 );
    if( !VAR_5 )
        return FUNC_1( VAR_2, "XML reader creation failed." );

    xml_reader_t **VAR_6 = FUNC_5( VAR_2, sizeof( xml_reader_t * ) );
    *VAR_6 = VAR_5;

    if( FUNC_2( VAR_2, "xml_reader" ) )
    {
        FUNC_4( VAR_2 );
        FUNC_3( VAR_2, ((void*)0), VAR_1 );
        FUNC_7( VAR_2, -2, "__index" );
        FUNC_6( VAR_2, VAR_0 );
        FUNC_7( VAR_2, -2, "__gc" );
    }

    FUNC_8( VAR_2, -2 );
    return 1;
}
