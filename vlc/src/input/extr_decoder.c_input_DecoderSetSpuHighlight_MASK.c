
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_spu_highlight_t ;
struct decoder_owner {int lock; int p_vout; scalar_t__ p_sout_input; } ;
struct TYPE_5__ {scalar_t__ i_cat; } ;
struct TYPE_6__ {TYPE_1__ fmt_in; } ;
typedef TYPE_2__ decoder_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct decoder_owner* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int ,int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int const*) ;

int FUNC_6( decoder_t *VAR_4,
                                  const vlc_spu_highlight_t *VAR_5 )
{
    struct decoder_owner *VAR_6 = FUNC_1( VAR_4 );
    FUNC_0( VAR_4->fmt_in.i_cat == VAR_1 );






    FUNC_3( &VAR_6->lock );
    if( !VAR_6->p_vout )
    {
        FUNC_4( &VAR_6->lock );
        return VAR_2;
    }

    FUNC_5( VAR_6->p_vout, VAR_5 );

    FUNC_4( &VAR_6->lock );
    return VAR_3;
}
