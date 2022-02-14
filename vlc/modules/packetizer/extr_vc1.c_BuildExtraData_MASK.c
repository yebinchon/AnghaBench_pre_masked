
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int i_extra; int * p_extra; } ;
typedef TYPE_5__ es_format_t ;
struct TYPE_14__ {TYPE_5__ fmt_out; TYPE_7__* p_sys; } ;
typedef TYPE_6__ decoder_t ;
struct TYPE_12__ {TYPE_3__* p_ep; } ;
struct TYPE_10__ {TYPE_1__* p_sh; } ;
struct TYPE_15__ {TYPE_4__ ep; TYPE_2__ sh; int b_entry_point; int b_sequence_header; } ;
typedef TYPE_7__ decoder_sys_t ;
struct TYPE_11__ {int i_buffer; int p_buffer; } ;
struct TYPE_9__ {int i_buffer; int p_buffer; } ;


 int FUNC_0 (int *,int ,int) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2( decoder_t *VAR_0 )
{
    decoder_sys_t *VAR_1 = VAR_0->p_sys;
    es_format_t *VAR_2 = &VAR_0->fmt_out;
    int VAR_3;
    if( !VAR_1->b_sequence_header || !VAR_1->b_entry_point )
        return;

    VAR_3 = VAR_1->sh.p_sh->i_buffer + VAR_1->ep.p_ep->i_buffer;
    if( VAR_2->i_extra != VAR_3 )
    {
        VAR_2->i_extra = VAR_3;
        VAR_2->p_extra = FUNC_1( VAR_2->p_extra, VAR_2->i_extra );
    }
    FUNC_0( VAR_2->p_extra,
            VAR_1->sh.p_sh->p_buffer, VAR_1->sh.p_sh->i_buffer );
    FUNC_0( (uint8_t*)VAR_2->p_extra + VAR_1->sh.p_sh->i_buffer,
            VAR_1->ep.p_ep->p_buffer, VAR_1->ep.p_ep->i_buffer );
}
