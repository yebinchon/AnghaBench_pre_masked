
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int pi_selections ;
struct TYPE_17__ {size_t i_bitspersample; } ;
struct TYPE_14__ {TYPE_8__ audio; } ;
struct TYPE_12__ {int i_channels; } ;
struct TYPE_13__ {TYPE_1__ audio; } ;
struct TYPE_15__ {TYPE_3__ fmt_out; TYPE_2__ fmt_in; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_16__ {size_t i_nb_samples; int p_buffer; int i_length; int i_pts; int i_dts; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t,int ,int ,size_t,int const*,size_t) ;
 size_t FUNC_1 (TYPE_8__*) ;
 TYPE_5__* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static block_t *FUNC_6( filter_t *VAR_1, block_t *VAR_2 )
{
    size_t VAR_3 = FUNC_1( &VAR_1->fmt_out.audio );
    size_t VAR_4 = VAR_2->i_nb_samples
                      * VAR_1->fmt_out.audio.i_bitspersample
                      * VAR_3 / 8;

    block_t *VAR_5 = FUNC_2( VAR_4 );
    if( FUNC_5(VAR_5 == ((void*)0)) )
    {
        FUNC_3( VAR_2 );
        return ((void*)0);
    }

    VAR_5->i_nb_samples = VAR_2->i_nb_samples;
    VAR_5->i_dts = VAR_2->i_dts;
    VAR_5->i_pts = VAR_2->i_pts;
    VAR_5->i_length = VAR_2->i_length;

    static const int VAR_6[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8,
    };
    FUNC_4(sizeof(VAR_6)/sizeof(int) == VAR_0,
                  "channel max size mismatch!");

    FUNC_0( VAR_5->p_buffer, VAR_3,
                         VAR_2->p_buffer, VAR_1->fmt_in.audio.i_channels,
                         VAR_2->i_nb_samples, VAR_6,
                         VAR_1->fmt_out.audio.i_bitspersample );

    FUNC_3( VAR_2 );
    return VAR_5;
}
