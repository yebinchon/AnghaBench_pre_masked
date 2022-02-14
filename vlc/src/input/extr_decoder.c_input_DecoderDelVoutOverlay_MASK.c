
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct decoder_owner {int lock; int p_vout; } ;
struct TYPE_5__ {scalar_t__ i_cat; } ;
struct TYPE_6__ {TYPE_1__ fmt_in; } ;
typedef TYPE_2__ decoder_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct decoder_owner* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,size_t) ;

int FUNC_5( decoder_t *VAR_3, size_t VAR_4 )
{
    struct decoder_owner *VAR_5 = FUNC_1( VAR_3 );
    FUNC_0( VAR_3->fmt_in.i_cat == VAR_0 );

    FUNC_2( &VAR_5->lock );

    if( !VAR_5->p_vout )
    {
        FUNC_3( &VAR_5->lock );
        return VAR_1;
    }
    FUNC_4( VAR_5->p_vout, VAR_4 );

    FUNC_3( &VAR_5->lock );
    return VAR_2;
}
