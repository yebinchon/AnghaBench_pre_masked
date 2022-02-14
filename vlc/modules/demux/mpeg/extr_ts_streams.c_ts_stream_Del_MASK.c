
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ p_head; } ;
struct TYPE_6__ {scalar_t__ p_data; } ;
struct TYPE_8__ {TYPE_2__ prepcr; scalar_t__ p_proc; scalar_t__ p_sections_proc; TYPE_1__ gather; int p_es; } ;
typedef TYPE_3__ ts_stream_t ;
typedef int demux_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5( demux_t *VAR_0, ts_stream_t *VAR_1 )
{
    FUNC_2( VAR_0, VAR_1->p_es );

    if( VAR_1->gather.p_data )
        FUNC_0( VAR_1->gather.p_data );

    if( VAR_1->p_sections_proc )
        FUNC_3( VAR_1->p_sections_proc );

    if( VAR_1->p_proc )
        FUNC_4( VAR_1->p_proc );

    if( VAR_1->prepcr.p_head )
        FUNC_0( VAR_1->prepcr.p_head );

    FUNC_1( VAR_1 );
}
