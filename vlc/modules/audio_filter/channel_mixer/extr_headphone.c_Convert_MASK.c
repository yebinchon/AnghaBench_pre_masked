
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int audio; } ;
struct TYPE_14__ {int audio; } ;
struct TYPE_16__ {TYPE_2__ fmt_in; TYPE_1__ fmt_out; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_17__ {size_t i_buffer; int i_length; int i_pts; int i_dts; scalar_t__ i_nb_samples; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*,TYPE_4__*) ;
 size_t FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;

__attribute__((used)) static block_t *FUNC_5( filter_t *VAR_0, block_t *VAR_1 )
{
    if( !VAR_1 || !VAR_1->i_nb_samples )
    {
        if( VAR_1 )
            FUNC_3( VAR_1 );
        return ((void*)0);
    }

    size_t VAR_2 = VAR_1->i_buffer *
        FUNC_1( &(VAR_0->fmt_out.audio) ) /
        FUNC_1( &(VAR_0->fmt_in.audio) );

    block_t *VAR_3 = FUNC_2( VAR_2 );
    if( !VAR_3 )
    {
        FUNC_4( VAR_0, "can't get output buffer" );
        FUNC_3( VAR_1 );
        return ((void*)0);
    }

    VAR_3->i_nb_samples = VAR_1->i_nb_samples;
    VAR_3->i_dts = VAR_1->i_dts;
    VAR_3->i_pts = VAR_1->i_pts;
    VAR_3->i_length = VAR_1->i_length;

    FUNC_0( VAR_0, VAR_1, VAR_3 );

    FUNC_3( VAR_1 );
    return VAR_3;
}
