
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {TYPE_5__* p_demux; } ;
typedef TYPE_6__ vlcrdp_context_t ;
struct TYPE_17__ {TYPE_4__* primary; } ;
typedef TYPE_7__ rdpGdi ;
struct TYPE_18__ {TYPE_7__* gdi; } ;
typedef TYPE_8__ rdpContext ;
struct TYPE_19__ {scalar_t__ i_framebuffersize; scalar_t__ p_block; } ;
typedef TYPE_9__ demux_sys_t ;
struct TYPE_15__ {TYPE_9__* p_sys; } ;
struct TYPE_14__ {TYPE_3__* hdc; } ;
struct TYPE_13__ {TYPE_2__* hwnd; } ;
struct TYPE_12__ {scalar_t__ ninvalid; TYPE_1__* invalid; } ;
struct TYPE_11__ {int null; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1( rdpContext *VAR_0 )
{
    vlcrdp_context_t * VAR_1 = (vlcrdp_context_t *) VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_demux->p_sys;
    rdpGdi *VAR_3 = VAR_0->gdi;
    VAR_3->primary->hdc->hwnd->invalid->null = 1;
    VAR_3->primary->hdc->hwnd->ninvalid = 0;
    if ( ! VAR_2->p_block && VAR_2->i_framebuffersize )
        VAR_2->p_block = FUNC_0( VAR_2->i_framebuffersize );
}
