
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 char* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char const*) ;
 size_t FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9( stream_t *VAR_2, input_item_node_t *VAR_3 )
{
    const char *VAR_4 = FUNC_0(VAR_2);

    size_t VAR_5 = FUNC_7( VAR_4 );
    char *VAR_6 = FUNC_6( VAR_4 );

    if( FUNC_8( VAR_6 == ((void*)0) ) )
        return VAR_0;

    FUNC_5( &VAR_6[VAR_5 - 12], "VR_MOVIE.VRO" );

    input_item_t *VAR_7 = FUNC_2( VAR_6, VAR_6 );
    if( VAR_7 )
    {
        FUNC_4( VAR_3, VAR_7 );
        FUNC_3( VAR_7 );
    }

    FUNC_1( VAR_6 );

    return VAR_1;
}
