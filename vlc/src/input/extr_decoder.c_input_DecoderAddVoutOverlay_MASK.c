
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t i_channel; int b_ephemer; scalar_t__ i_order; int i_stop; int i_start; } ;
typedef TYPE_2__ subpicture_t ;
struct decoder_owner {int lock; int p_vout; } ;
typedef int ssize_t ;
struct TYPE_8__ {scalar_t__ i_cat; } ;
struct TYPE_10__ {TYPE_1__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct decoder_owner* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ) ;

int FUNC_7( decoder_t *VAR_3, subpicture_t *VAR_4,
                                 size_t *VAR_5 )
{
    struct decoder_owner *VAR_6 = FUNC_1( VAR_3 );
    FUNC_0( VAR_3->fmt_in.i_cat == VAR_0 );
    FUNC_0( VAR_4 && VAR_5 );

    FUNC_2( &VAR_6->lock );

    if( !VAR_6->p_vout )
    {
        FUNC_3( &VAR_6->lock );
        return VAR_1;
    }
    ssize_t VAR_7 =
        FUNC_6( VAR_6->p_vout );
    if (VAR_7 == -1)
    {
        FUNC_3( &VAR_6->lock );
        return VAR_1;
    }
    VAR_4->i_start = VAR_4->i_stop = FUNC_4();
    VAR_4->i_channel = *VAR_5 = VAR_7;
    VAR_4->i_order = 0;
    VAR_4->b_ephemer = 1;
    FUNC_5( VAR_6->p_vout, VAR_4 );

    FUNC_3( &VAR_6->lock );
    return VAR_2;
}
