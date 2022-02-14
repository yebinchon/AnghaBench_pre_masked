
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;
typedef int addons_finder_t ;


 int * FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,char const*) ;

__attribute__((used)) static stream_t * FUNC_2( addons_finder_t *VAR_0, const char *VAR_1 )
{
    stream_t *VAR_2 = FUNC_1( VAR_0, VAR_1 );
    if( VAR_2 )
    {


        stream_t *VAR_3 = FUNC_0( VAR_2, "inflate" );
        if( VAR_3 )
            VAR_2 = VAR_3;
    }
    return VAR_2;
}
