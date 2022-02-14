
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {size_t i_bytes_per_frame; int i_channels; } ;
struct TYPE_18__ {TYPE_3__ audio; } ;
struct TYPE_15__ {int i_channels; } ;
struct TYPE_16__ {TYPE_1__ audio; } ;
struct TYPE_19__ {TYPE_4__ fmt_out; TYPE_2__ fmt_in; scalar_t__ p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_20__ {int (* pf_remap ) (TYPE_5__*,void const*,void*,size_t,int ,int ) ;} ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_21__ {size_t i_nb_samples; scalar_t__ p_buffer; int i_length; int i_pts; int i_dts; } ;
typedef TYPE_7__ block_t ;


 TYPE_7__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (scalar_t__,int ,size_t) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_5__*,void const*,void*,size_t,int ,int ) ;

__attribute__((used)) static block_t *FUNC_5( filter_t *VAR_0, block_t *VAR_1 )
{
    filter_sys_t *VAR_2 = (filter_sys_t *)VAR_0->p_sys;
    if( !VAR_1 || !VAR_1->i_nb_samples )
    {
        if( VAR_1 )
            FUNC_1( VAR_1 );
        return ((void*)0);
    }

    size_t VAR_3 = VAR_1->i_nb_samples *
        VAR_0->fmt_out.audio.i_bytes_per_frame;

    block_t *VAR_4 = FUNC_0( VAR_3 );
    if( !VAR_4 )
    {
        FUNC_3( VAR_0, "can't get output buffer" );
        FUNC_1( VAR_1 );
        return ((void*)0);
    }
    VAR_4->i_nb_samples = VAR_1->i_nb_samples;
    VAR_4->i_dts = VAR_1->i_dts;
    VAR_4->i_pts = VAR_1->i_pts;
    VAR_4->i_length = VAR_1->i_length;

    FUNC_2( VAR_4->p_buffer, 0, VAR_3 );

    VAR_2->pf_remap( VAR_0,
                (const void *)VAR_1->p_buffer, (void *)VAR_4->p_buffer,
                VAR_1->i_nb_samples,
                VAR_0->fmt_in.audio.i_channels,
                VAR_0->fmt_out.audio.i_channels );

    FUNC_1( VAR_1 );

    return VAR_4;
}
