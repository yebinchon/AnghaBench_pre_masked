
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {size_t i_count; TYPE_1__* p_array; } ;
struct TYPE_7__ {TYPE_2__ index; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_5__ {scalar_t__ time; } ;



__attribute__((used)) static size_t FUNC_0( demux_sys_t *VAR_0, vlc_tick_t VAR_1 )
{
    for( size_t VAR_2=0; VAR_2<VAR_0->index.i_count; VAR_2++ )
    {
        if( VAR_0->index.p_array[VAR_2].time >= VAR_1 )
            return VAR_2;
    }
    return 0;
}
