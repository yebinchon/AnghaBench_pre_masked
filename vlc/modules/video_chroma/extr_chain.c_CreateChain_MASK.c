
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ orientation; } ;
struct TYPE_18__ {TYPE_1__ video; } ;
struct TYPE_16__ {TYPE_4__ const fmt_out; TYPE_4__ const fmt_in; TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_17__ {int p_chain; } ;
typedef TYPE_3__ filter_sys_t ;
typedef TYPE_4__ es_format_t ;


 TYPE_2__* FUNC_0 (int ,TYPE_4__ const*,TYPE_4__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_4__ const*,TYPE_4__ const*) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__ const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__ const*,TYPE_4__ const*) ;

__attribute__((used)) static int FUNC_5( filter_t *VAR_2, const es_format_t *VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_2->p_sys;
    FUNC_4( VAR_4->p_chain, &VAR_2->fmt_in, &VAR_2->fmt_out );

    if( VAR_2->fmt_in.video.orientation != VAR_3->video.orientation)
    {
        filter_t *VAR_5 = FUNC_0( VAR_4->p_chain, &VAR_2->fmt_in, VAR_3 );

        if( VAR_5 == ((void*)0) )
            return VAR_0;
        if( FUNC_1(&VAR_5->fmt_out, &VAR_2->fmt_out ))
           return VAR_1;
    }
    else
    {
        if( FUNC_2( VAR_4->p_chain, VAR_3 ) )
            return VAR_0;
    }

    if( VAR_3->video.orientation != VAR_2->fmt_out.video.orientation)
    {
        if( FUNC_0( VAR_4->p_chain, VAR_3,
                             &VAR_2->fmt_out ) == ((void*)0) )
            goto error;
    }
    else
    {
        if( FUNC_2( VAR_4->p_chain, &VAR_2->fmt_out ) )
            goto error;
    }
    return VAR_1;
error:

    FUNC_3( VAR_4->p_chain );
    return VAR_0;
}
