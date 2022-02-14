
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {struct TYPE_5__* psz_telx_lang; struct TYPE_5__* psz_telx; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( vlc_object_t *VAR_0 )
{
    demux_t *VAR_1 = (demux_t *)VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0( VAR_2->psz_telx );
    FUNC_0( VAR_2->psz_telx_lang );
    FUNC_0( VAR_2 );
}
