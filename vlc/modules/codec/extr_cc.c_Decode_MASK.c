
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ i_reorder_depth; } ;
struct TYPE_14__ {TYPE_1__ cc; } ;
struct TYPE_15__ {TYPE_2__ subs; } ;
struct TYPE_16__ {TYPE_3__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_17__ {scalar_t__ i_reorder_depth; int p_cea708; int p_dtvcc; scalar_t__ p_eia608; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_18__ {int i_flags; int i_buffer; } ;
typedef TYPE_6__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_6( decoder_t *VAR_4, block_t *VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;

    if( VAR_5 )
    {

        if( VAR_5->i_flags & (VAR_1 | VAR_0) )
        {

            for( ; FUNC_2( VAR_4, 1 ) ; );
            if( VAR_6->p_eia608 )
            {
                FUNC_3( VAR_6->p_eia608 );
            }
            else
            {
                FUNC_0( VAR_6->p_dtvcc );
                FUNC_1( VAR_6->p_cea708 );
            }

            if( (VAR_5->i_flags & VAR_0) || VAR_5->i_buffer < 1 )
            {
                FUNC_5( VAR_5 );
                return VAR_3;
            }
        }






        if( VAR_6->i_reorder_depth == 0 )
        {


            if( (VAR_5->i_flags & VAR_2) == 0 )
                for( ; FUNC_2( VAR_4, 1 ); );
        }

        FUNC_4( VAR_4, VAR_5 );
    }

    const bool VAR_7 = (VAR_4->fmt_in.subs.cc.i_reorder_depth < 0);
    for( ; FUNC_2( VAR_4, (VAR_5 == ((void*)0)) || VAR_7 ); );

    return VAR_3;
}
