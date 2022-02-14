
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;


 scalar_t__ FUNC_0 (int *,char*) ;
 float FUNC_1 (int *,char*) ;

float FUNC_2( libvlc_media_player_t *VAR_0 )
{
    float VAR_1 = FUNC_1 (VAR_0, "zoom");
    if (FUNC_0 (VAR_0, "autoscale"))
        VAR_1 = 0.f;
    return VAR_1;
}
