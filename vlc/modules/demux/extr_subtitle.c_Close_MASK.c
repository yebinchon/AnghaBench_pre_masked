
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_6__ {TYPE_4__* psz_header; } ;
struct TYPE_7__ {size_t i_count; TYPE_4__* p_array; } ;
struct TYPE_9__ {TYPE_1__ props; TYPE_2__ subtitles; struct TYPE_9__* psz_text; } ;
typedef TYPE_4__ demux_sys_t ;


 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_1( vlc_object_t *VAR_0 )
{
    demux_t *VAR_1 = (demux_t*)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    for( size_t VAR_3 = 0; VAR_3 < VAR_2->subtitles.i_count; VAR_3++ )
        FUNC_0( VAR_2->subtitles.p_array[VAR_3].psz_text );
    FUNC_0( VAR_2->subtitles.p_array );
    FUNC_0( VAR_2->props.psz_header );

    FUNC_0( VAR_2 );
}
