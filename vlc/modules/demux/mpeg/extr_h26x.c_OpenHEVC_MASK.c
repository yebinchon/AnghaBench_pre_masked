
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ hevc_probe_ctx_t ;
typedef int demux_t ;


 int FUNC_0 (int *,char*,int ,int ,TYPE_1__*,char const**,char const**) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1( vlc_object_t * VAR_2 )
{
    hevc_probe_ctx_t VAR_3 = { 0, 0, 0 };
    const char *VAR_4[] = { ".h265", ".265", ".hevc", ".bin", ".bit", ".raw", ((void*)0) };
    const char *VAR_5[] = { "video/h265", "video/hevc", "video/HEVC", ((void*)0) };

    return FUNC_0( (demux_t*)VAR_2, "hevc", VAR_1, VAR_0,
                        &VAR_3, VAR_4, VAR_5 );
}
