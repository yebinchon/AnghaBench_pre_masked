
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_2__ {scalar_t__ i_start; } ;
typedef TYPE_1__ subtitle_t ;



__attribute__((used)) static int FUNC_0( const void *VAR_0, const void *VAR_1 )
{
    vlc_tick_t VAR_2 = ((subtitle_t *)(VAR_0))->i_start - ((subtitle_t *)(VAR_1))->i_start;


    return VAR_2 == 0 ? 0 : VAR_2 > 0 ? 1 : -1;
}
