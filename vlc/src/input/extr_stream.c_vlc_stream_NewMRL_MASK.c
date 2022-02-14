
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int stream_t ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 char* FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (int **,char const*,char const**) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char const*) ;

stream_t *(FUNC_6)(vlc_object_t* VAR_0, const char* VAR_1 )
{
    stream_t* VAR_2 = FUNC_5( VAR_0, VAR_1 );

    if( VAR_2 == ((void*)0) )
        return ((void*)0);

    char const* VAR_3 = FUNC_2( VAR_1, '#' );

    if( VAR_3 == ((void*)0) )
        return VAR_2;

    char const* VAR_4;
    if( FUNC_3( &VAR_2, VAR_3 + 1, &VAR_4 ) )
    {
        FUNC_0( VAR_0, "unable to open %s", VAR_1 );
        FUNC_4( VAR_2 );
        return ((void*)0);
    }

    if( VAR_4 && *VAR_4 )
        FUNC_1( VAR_0, "ignoring extra fragment data: %s", VAR_4 );

    return VAR_2;
}
