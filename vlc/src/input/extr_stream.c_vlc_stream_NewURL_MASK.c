
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int stream_t ;


 int FUNC_0 (int *,char*,char const*) ;
 int * FUNC_1 (int *,int *,int *,int,char const*) ;
 int * FUNC_2 (int *) ;

stream_t *(FUNC_3)(vlc_object_t *VAR_0, const char *VAR_1)
{
    if( !VAR_1 )
        return ((void*)0);

    stream_t *VAR_2 = FUNC_1( VAR_0, ((void*)0), ((void*)0), 0, VAR_1 );
    if( VAR_2 == ((void*)0) )
        FUNC_0( VAR_0, "no suitable access module for `%s'", VAR_1 );
    else
        VAR_2 = FUNC_2(VAR_2);
    return VAR_2;
}
