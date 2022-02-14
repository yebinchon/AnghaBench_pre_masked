
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_5__ {TYPE_3__* p_array; } ;
struct TYPE_7__ {TYPE_1__ times; scalar_t__ p_xml; scalar_t__ p_reader; scalar_t__ p_es; scalar_t__ p_rootnode; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5( vlc_object_t* VAR_0 )
{
    demux_t *VAR_1 = (demux_t *)VAR_0;
    demux_sys_t* VAR_2 = VAR_1->p_sys;

    if( VAR_2->p_rootnode )
        FUNC_2( VAR_2->p_rootnode );

    if( VAR_2->p_es )
        FUNC_0( VAR_1->out, VAR_2->p_es );

    if( VAR_2->p_reader )
        FUNC_4( VAR_2->p_reader );

    if( VAR_2->p_xml )
        FUNC_3( VAR_2->p_xml );

    FUNC_1( VAR_2->times.p_array );

    FUNC_1( VAR_2 );
}
