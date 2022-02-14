
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_cat; } ;
struct TYPE_5__ {TYPE_1__ fmt_out; } ;
struct decoder_owner {float output_rate; int lock; int i_spu_channel; int * p_vout; int * p_aout; TYPE_2__ dec; } ;
typedef TYPE_2__ decoder_t ;





 int VAR_0 ;
 int FUNC_0 (int *,float) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char*,float) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,float) ;
 int FUNC_7 (int *,int ,float) ;

__attribute__((used)) static void FUNC_8( struct decoder_owner *VAR_1, float VAR_2 )
{
    decoder_t *VAR_3 = &VAR_1->dec;

    FUNC_2( VAR_3, "changing rate: %f", VAR_2 );
    FUNC_4( &VAR_1->lock );
    switch( VAR_3->fmt_out.i_cat )
    {
        case 128:
            if( VAR_1->p_vout != ((void*)0) )
                FUNC_6( VAR_1->p_vout, VAR_2 );
            break;
        case 130:
            if( VAR_1->p_aout != ((void*)0) )
                FUNC_0( VAR_1->p_aout, VAR_2 );
            break;
        case 129:
            if( VAR_1->p_vout != ((void*)0) )
            {
                FUNC_1(VAR_1->i_spu_channel != VAR_0);
                FUNC_7(VAR_1->p_vout, VAR_1->i_spu_channel,
                                   VAR_2 );
            }
            break;
        default:
            FUNC_3();
    }
    VAR_1->output_rate = VAR_2;
    FUNC_5( &VAR_1->lock );
}
