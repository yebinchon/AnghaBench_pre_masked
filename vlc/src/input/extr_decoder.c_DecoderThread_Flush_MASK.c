
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__** pp_decoder; scalar_t__ b_supported; } ;
struct TYPE_8__ {scalar_t__ i_cat; } ;
struct TYPE_9__ {TYPE_2__ fmt_out; int (* pf_flush ) (TYPE_3__*) ;} ;
struct decoder_owner {scalar_t__ i_spu_channel; int lock; int i_preroll_end; scalar_t__ p_vout; scalar_t__ p_aout; int * p_sout_input; TYPE_1__ cc; scalar_t__ error; TYPE_3__* p_packetizer; TYPE_3__ dec; } ;
typedef TYPE_3__ decoder_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_10( struct decoder_owner *VAR_6 )
{
    decoder_t *VAR_7 = &VAR_6->dec;
    decoder_t *VAR_8 = VAR_6->p_packetizer;

    if( VAR_6->error )
        return;

    if( VAR_8 != ((void*)0) && VAR_8->pf_flush != ((void*)0) )
        VAR_8->pf_flush( VAR_8 );

    if ( VAR_7->pf_flush != ((void*)0) )
        VAR_7->pf_flush( VAR_7 );


    if( VAR_6->cc.b_supported )
    {
        for( int VAR_9=0; VAR_9<VAR_1; VAR_9++ )
        {
            decoder_t *VAR_10 = VAR_6->cc.pp_decoder[VAR_9];
            if( VAR_10 && VAR_10->pf_flush )
                VAR_10->pf_flush( VAR_10 );
        }
    }

    FUNC_6( &VAR_6->lock );






    if( VAR_7->fmt_out.i_cat == VAR_0 )
    {
        if( VAR_6->p_aout )
            FUNC_0( VAR_6->p_aout );
    }
    else if( VAR_7->fmt_out.i_cat == VAR_4 )
    {
        if( VAR_6->p_vout )
            FUNC_8( VAR_6->p_vout );
    }
    else if( VAR_7->fmt_out.i_cat == VAR_3 )
    {
        if( VAR_6->p_vout )
        {
            FUNC_1( VAR_6->i_spu_channel != VAR_5 );
            FUNC_9( VAR_6->p_vout, VAR_6->i_spu_channel );
        }
    }

    VAR_6->i_preroll_end = VAR_2;
    FUNC_7( &VAR_6->lock );
}
