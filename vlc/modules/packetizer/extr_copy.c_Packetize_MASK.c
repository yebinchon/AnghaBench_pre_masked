
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ i_codec; } ;
struct TYPE_13__ {TYPE_1__ fmt_in; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_14__ {int (* pf_parse ) (TYPE_2__*,TYPE_4__*) ;TYPE_4__* p_block; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_15__ {int i_flags; scalar_t__ i_dts; scalar_t__ i_pts; scalar_t__ i_length; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static block_t *FUNC_3 ( decoder_t *VAR_3, block_t **VAR_4 )
{
    block_t *VAR_5;
    decoder_sys_t *VAR_6 = VAR_3->p_sys;
    block_t *VAR_7 = VAR_6->p_block;

    if( VAR_4 == ((void*)0) || *VAR_4 == ((void*)0) )
        return ((void*)0);
    if( (*VAR_4)->i_flags&(VAR_0) )
    {
        FUNC_0( *VAR_4 );
        return ((void*)0);
    }

    VAR_5 = *VAR_4;
    *VAR_4 = ((void*)0);

    if( VAR_5->i_dts == VAR_2 )
    {
        VAR_5->i_dts = VAR_5->i_pts;
    }

    if( VAR_5->i_dts == VAR_2 )
    {
        FUNC_1( VAR_3, "need valid dts" );
        FUNC_0( VAR_5 );
        return ((void*)0);
    }

    if( VAR_7 != ((void*)0) && VAR_5->i_pts > VAR_7->i_pts )
    {
        if (VAR_3->fmt_in.i_codec != VAR_1)
            VAR_7->i_length = VAR_5->i_pts - VAR_7->i_pts;
    }
    VAR_6->p_block = VAR_5;

    if( VAR_7 && VAR_6->pf_parse )
        VAR_6->pf_parse( VAR_3, VAR_7 );
    return VAR_7;
}
