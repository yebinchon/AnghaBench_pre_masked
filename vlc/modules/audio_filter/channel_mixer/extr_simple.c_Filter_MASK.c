
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_15__ {int i_bitspersample; int i_channels; } ;
struct TYPE_17__ {TYPE_11__ audio; } ;
struct TYPE_16__ {TYPE_11__ audio; } ;
struct TYPE_18__ {TYPE_2__ fmt_out; TYPE_1__ fmt_in; scalar_t__ p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_19__ {int i_nb_samples; int i_buffer; int i_length; int i_pts; int i_dts; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_11__*) ;
 TYPE_4__* FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,char*) ;

__attribute__((used)) static block_t *FUNC_4( filter_t *VAR_0, block_t *VAR_1 )
{
    void (*VAR_2)(filter_t *, block_t *, block_t *) = (void *)VAR_0->p_sys;

    if( !VAR_1 || !VAR_1->i_nb_samples )
    {
        if( VAR_1 )
            FUNC_2( VAR_1 );
        return ((void*)0);
    }

    size_t VAR_3 = VAR_1->i_nb_samples *
      VAR_0->fmt_out.audio.i_bitspersample *
        VAR_0->fmt_out.audio.i_channels / 8;

    block_t *VAR_4 = FUNC_1( VAR_3 );
    if( !VAR_4 )
    {
        FUNC_3( VAR_0, "can't get output buffer" );
        FUNC_2( VAR_1 );
        return ((void*)0);
    }

    VAR_4->i_nb_samples = VAR_1->i_nb_samples;
    VAR_4->i_dts = VAR_1->i_dts;
    VAR_4->i_pts = VAR_1->i_pts;
    VAR_4->i_length = VAR_1->i_length;

    int VAR_5 = FUNC_0( &VAR_0->fmt_in.audio );
    int VAR_6 = FUNC_0( &VAR_0->fmt_out.audio );
    VAR_4->i_nb_samples = VAR_1->i_nb_samples;
    VAR_4->i_buffer = VAR_1->i_buffer * VAR_6 / VAR_5;

    VAR_2( VAR_0, VAR_1, VAR_4 );

    FUNC_2( VAR_1 );

    return VAR_4;
}
