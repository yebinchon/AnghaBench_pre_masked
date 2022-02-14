
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_array_t ;
typedef int stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char const**,char const*) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 char* FUNC_4 (int *,size_t) ;
 scalar_t__ FUNC_5 (int **,char*,int *) ;

int
FUNC_6( stream_t** VAR_2, char const* VAR_3,
                               char const** VAR_4 )
{
    vlc_array_t VAR_5;

    if( FUNC_1( &VAR_5, VAR_4, VAR_3 ) )
        return VAR_0;

    size_t VAR_6 = FUNC_3( &VAR_5 );
    size_t VAR_7 = 0;

    while( VAR_7 < VAR_6 )
    {
        char* VAR_8 = FUNC_4( &VAR_5, VAR_7 );

        if( FUNC_5( VAR_2, VAR_8, ((void*)0) ) )
            break;

        ++VAR_7;
    }

    for( size_t VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9 )
        FUNC_0( FUNC_4( &VAR_5, VAR_9 ) );
    FUNC_2( &VAR_5 );

    return VAR_7 == VAR_6 ? VAR_1 : VAR_0;
}
