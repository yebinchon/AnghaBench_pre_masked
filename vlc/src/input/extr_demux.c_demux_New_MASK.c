
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int stream_t ;
typedef int es_out_t ;
typedef int demux_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,char const*,char*,int *,int *,int) ;

demux_t *FUNC_2( vlc_object_t *VAR_0, const char *VAR_1,
                    stream_t *VAR_2, es_out_t *VAR_3 )
{
    FUNC_0(VAR_2 != ((void*)0) );
    return FUNC_1( VAR_0, ((void*)0), VAR_1, "", VAR_2, VAR_3, 0 );
}
