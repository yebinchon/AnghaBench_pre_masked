
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int gboolean ;
struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_9__ {int b_running; scalar_t__ p_decoder; scalar_t__ p_decode_out; scalar_t__ p_decode_in; scalar_t__ p_decode_src; scalar_t__ p_bus; scalar_t__ p_allocator; scalar_t__ p_que; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int GstMessage ;
typedef int GstFlowReturn ;
typedef int GstBuffer ;


 int FUNC_0 (scalar_t__) ;

 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (scalar_t__,unsigned long long,int) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (TYPE_1__*,char*,...) ;
 int FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_16( vlc_object_t *VAR_3 )
{
    decoder_t *VAR_4 = ( decoder_t* )VAR_3;
    decoder_sys_t *VAR_5 = VAR_4->p_sys;
    gboolean VAR_6 = VAR_5->b_running;

    if( VAR_6 )
    {
        GstMessage *VAR_7;
        GstFlowReturn VAR_8;

        VAR_5->b_running = 0;


        VAR_8 = FUNC_4(
                FUNC_0( VAR_5->p_decode_src ));
        FUNC_13( VAR_4, "app src eos: %s", FUNC_10( VAR_8 ) );


        VAR_7 = FUNC_8( VAR_5->p_bus,
                2000000000ULL, 128 | VAR_0 );

        if( VAR_7 )
        {
            switch( FUNC_1( VAR_7 ) ){
            case 128:
                FUNC_13( VAR_4, "got eos" );
                break;
            default:
                if( FUNC_2( VAR_4, VAR_7 ) )
                {
                    FUNC_14( VAR_4, "pipeline may not close gracefully" );
                    return;
                }
                break;
            }

            FUNC_11( VAR_7 );
        }
        else
            FUNC_15( VAR_4,
                    "no message, pipeline may not close gracefully" );
    }


    if( VAR_5->p_que )
    {
        GstBuffer *VAR_9;
        while( ( VAR_9 = FUNC_5( VAR_5->p_que ) ) )
            FUNC_7( VAR_9 );
        FUNC_6( VAR_5->p_que );
    }

    if( VAR_6 && FUNC_9( VAR_5->p_decoder, VAR_2 )
            != VAR_1 )
        FUNC_14( VAR_4,
                "failed to change the state to NULL," "pipeline may not close gracefully" );


    if( VAR_5->p_allocator )
        FUNC_12( VAR_5->p_allocator );
    if( VAR_5->p_bus )
        FUNC_12( VAR_5->p_bus );
    if( VAR_5->p_decode_src )
        FUNC_12( VAR_5->p_decode_src );
    if( VAR_5->p_decode_in )
        FUNC_12( VAR_5->p_decode_in );
    if( VAR_5->p_decode_out )
        FUNC_12( VAR_5->p_decode_out );
    if( VAR_5->p_decoder )
        FUNC_12( VAR_5->p_decoder );

    FUNC_3( VAR_5 );
}
