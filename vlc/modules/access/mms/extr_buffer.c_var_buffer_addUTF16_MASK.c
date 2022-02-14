
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var_buffer_t ;
typedef int uint16_t ;
typedef int stream_t ;


 int * FUNC_0 (char*,char const*,size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4( stream_t *VAR_0, var_buffer_t *VAR_1, const char *VAR_2 )
{
    uint16_t *VAR_3;
    size_t VAR_4;

    if( VAR_2 != ((void*)0) )



        VAR_3 = FUNC_0( "UTF-16LE", VAR_2, &VAR_4 );

    else
        VAR_3 = ((void*)0);
    if( VAR_3 == ((void*)0) )
    {
        FUNC_2( VAR_0, "UTF-16 conversion failed" );
        VAR_4 = 0;
    }

    VAR_4 /= 2;
    for( size_t VAR_5 = 0; VAR_5 < VAR_4; VAR_5 ++ )
        FUNC_3( VAR_1, VAR_3[VAR_5] );
    FUNC_1( VAR_3 );

    FUNC_3( VAR_1, 0 );
}
