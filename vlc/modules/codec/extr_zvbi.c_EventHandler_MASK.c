
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int call; int name; int nuid; } ;
typedef TYPE_4__ vbi_network ;
struct TYPE_12__ {int pgno; } ;
struct TYPE_11__ {int subno; scalar_t__ header_update; scalar_t__ clock_update; int pgno; } ;
struct TYPE_13__ {TYPE_4__ network; TYPE_2__ caption; TYPE_1__ ttx_page; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_3__ ev; } ;
typedef TYPE_5__ vbi_event ;
struct TYPE_16__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ decoder_t ;
struct TYPE_17__ {scalar_t__ i_last_page; int b_update; } ;
typedef TYPE_7__ decoder_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_6__*,char*,...) ;
 int FUNC_1 (TYPE_6__*,char*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3( vbi_event *VAR_8, void *VAR_9 )
{
    decoder_t *VAR_10 = (decoder_t *)VAR_9;
    decoder_sys_t *VAR_11 = VAR_10->p_sys;

    if( VAR_8->type == VAR_7 )
    {





        if( VAR_11->i_last_page == FUNC_2( VAR_8->ev.ttx_page.pgno ) )
            VAR_11->b_update = 1;






    }
    else if( VAR_8->type == VAR_2 )
        FUNC_0( VAR_10, "Close event" );
    else if( VAR_8->type == VAR_1 )
        FUNC_0( VAR_10, "Caption line: %x", VAR_8->ev.caption.pgno );
    else if( VAR_8->type == VAR_3 )
    {
        FUNC_0( VAR_10, "Network change");
        vbi_network VAR_12 = VAR_8->ev.network;
        FUNC_0( VAR_10, "Network id:%d name: %s, call: %s ", VAR_12.nuid, VAR_12.name, VAR_12.call );
    }
    else if( VAR_8->type == VAR_6 )
        FUNC_0( VAR_10, "Trigger event" );
    else if( VAR_8->type == VAR_0 )
        FUNC_0( VAR_10, "Aspect update" );
    else if( VAR_8->type == VAR_5 )
        FUNC_0( VAR_10, "Program info received" );
    else if( VAR_8->type == VAR_4 )
        FUNC_0( VAR_10, "Network ID changed" );
}
