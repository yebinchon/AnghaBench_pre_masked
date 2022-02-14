
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int track_id; } ;
typedef TYPE_1__ rtsp_stream_id_t ;


 int FUNC_0 (char**,char*,char const*,char const*,int ) ;
 int FUNC_1 (char const*) ;

char *FUNC_2( rtsp_stream_id_t *VAR_0, const char *VAR_1 )
{
    const char *VAR_2 = FUNC_1( VAR_1 ) > 0 && VAR_1[FUNC_1( VAR_1 ) - 1] == '/' ?
                      "" : "/";
    char *VAR_3;

    if( FUNC_0( &VAR_3, "%s%strackID=%u", VAR_1, VAR_2, VAR_0->track_id ) == -1 )
        VAR_3 = ((void*)0);
    return VAR_3;
}
