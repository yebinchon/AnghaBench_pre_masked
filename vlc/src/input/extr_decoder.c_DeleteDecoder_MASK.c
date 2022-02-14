
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vout_thread_t ;
struct TYPE_9__ {scalar_t__ p_sout_input; } ;
struct decoder_owner {int vout_thread_started; int dec; int mouse_lock; int lock; int wait_request; int wait_acknowledge; int wait_fifo; int * p_packetizer; scalar_t__ p_description; int fmt; int * p_vout; int i_spu_channel; int p_resource; int * out_pool; int p_aout; TYPE_2__ cc; scalar_t__ p_sout_input; int p_fifo; scalar_t__ vctx; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;
struct TYPE_8__ {int i_cat; int i_codec; } ;
struct TYPE_10__ {TYPE_1__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;







 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct decoder_owner* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct decoder_owner*,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_3__*,char*,char*) ;
 int VAR_1 ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;

__attribute__((used)) static void FUNC_22( decoder_t * VAR_2 )
{
    struct decoder_owner *VAR_3 = FUNC_3( VAR_2 );

    FUNC_10( VAR_2, "killing decoder fourcc `%4.4s'",
             (char*)&VAR_2->fmt_in.i_codec );

    const enum es_format_category_e VAR_4 =VAR_2->fmt_in.i_cat;
    if ( VAR_3->out_pool )
    {
        FUNC_12( VAR_3->out_pool );
        VAR_3->out_pool = ((void*)0);
    }
    FUNC_4( VAR_2 );

    if (VAR_3->vctx)
        FUNC_18( VAR_3->vctx );


    FUNC_2( VAR_3->p_fifo );
    switch( VAR_4 )
    {
        case 132:
            if( VAR_3->p_aout )
            {

                FUNC_0( VAR_3->p_aout );
                FUNC_8( VAR_3->p_resource, VAR_3->p_aout );
            }
            break;
        case 128: {
            vout_thread_t *VAR_5 = VAR_3->p_vout;

            if (VAR_5 != ((void*)0) && VAR_3->vout_thread_started)
            {


                if (VAR_3->out_pool)
                    FUNC_11( VAR_3->out_pool, 0 );
                FUNC_20(VAR_5);
                VAR_3->vout_thread_started = 0;
                FUNC_6(VAR_3, VAR_1, VAR_5);
                FUNC_9(VAR_3->p_resource, VAR_5);
            }
            break;
        }
        case 130:
        {
            if( VAR_3->p_vout )
            {
                FUNC_1( VAR_3->i_spu_channel != VAR_0 );
                FUNC_6(VAR_3, VAR_1, VAR_3->p_vout);

                FUNC_21( VAR_3->p_vout,
                                                  VAR_3->i_spu_channel );
                FUNC_19(VAR_3->p_vout);
                VAR_3->vout_thread_started = 0;
            }
            break;
        }
        case 131:
        case 129:
            break;
        default:
            FUNC_14();
    }

    FUNC_7( &VAR_3->fmt );

    if( VAR_3->p_description )
        FUNC_16( VAR_3->p_description );

    FUNC_5( VAR_3->p_packetizer );

    FUNC_15( &VAR_3->wait_fifo );
    FUNC_15( &VAR_3->wait_acknowledge );
    FUNC_15( &VAR_3->wait_request );
    FUNC_17( &VAR_3->lock );
    FUNC_17( &VAR_3->mouse_lock );

    FUNC_5( &VAR_3->dec );
}
