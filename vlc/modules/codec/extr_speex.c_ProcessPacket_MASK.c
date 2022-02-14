
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int bytes; scalar_t__ packet; } ;
typedef TYPE_2__ ogg_packet ;
struct TYPE_22__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_23__ {int bits; int p_state; TYPE_1__* p_header; scalar_t__ b_packetizer; int end_date; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_24__ {scalar_t__ i_pts; int i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_20__ {int frames_per_packet; int frame_size; } ;


 TYPE_5__* FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 TYPE_5__* FUNC_1 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_2 (int) ;
 TYPE_5__* FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (short*) ;
 int FUNC_8 (scalar_t__,int,int) ;
 int FUNC_9 (int *,char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int ,int *,short*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static block_t *FUNC_16( decoder_t *VAR_1, ogg_packet *VAR_2,
                               block_t **VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_1->p_sys;
    block_t *VAR_5 = *VAR_3;


    if( VAR_5 && VAR_5->i_pts != VAR_0 &&
        VAR_5->i_pts != FUNC_5( &VAR_4->end_date ) )
    {
        FUNC_6( &VAR_4->end_date, VAR_5->i_pts );
    }

    if( FUNC_5( &VAR_4->end_date ) == VAR_0 )
    {

        if( VAR_5 ) FUNC_4( VAR_5 );
        return ((void*)0);
    }

    *VAR_3 = ((void*)0);

    if( VAR_4->b_packetizer )
    {
        if ( VAR_4->p_header->frames_per_packet > 1 )
        {
            short *VAR_6 = ((void*)0);
            int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0,
                VAR_10 = 0, VAR_11 = 0;
            block_t *VAR_12 = ((void*)0);

            VAR_10 = VAR_4->p_header->frame_size;
            VAR_6 = (short*)FUNC_15( sizeof(short)*VAR_10 );

            FUNC_9( &VAR_4->bits, (char*)VAR_2->packet,
                VAR_2->bytes);
            VAR_7 = FUNC_10( &VAR_4->bits );
            FUNC_14(VAR_4->p_state, &VAR_4->bits, VAR_6);
            VAR_8 = FUNC_10( &VAR_4->bits );

            VAR_11 = VAR_7 - VAR_8;
            VAR_9 = ( VAR_11 +
                (8 - (VAR_11 % 8)) )
                / 8;

            VAR_12 = FUNC_2( VAR_9 );
            FUNC_8( VAR_12->p_buffer, 0xff, VAR_9 );




            FUNC_12( &VAR_4->bits );
            FUNC_13( &VAR_4->bits,
                (char*)VAR_12->p_buffer,
                (int)VAR_9 );
            if ( VAR_8 > 7 )
            {



                VAR_9--;
                FUNC_13( &VAR_4->bits,
                    (char*)VAR_5->p_buffer,
                    VAR_5->i_buffer - VAR_9 );
                VAR_5 = FUNC_3( VAR_5,
                    0,
                    VAR_5->i_buffer-VAR_9 );
                *VAR_3 = VAR_5;
            }
            else
            {
                FUNC_11( &VAR_4->bits );
            }

            FUNC_7( VAR_6 );
            return FUNC_1( VAR_1, VAR_12);
        }
        else
        {
                return FUNC_1( VAR_1, VAR_5 );
        }
    }
    else
    {
        block_t *VAR_13 = FUNC_0( VAR_1, VAR_2 );

        if( VAR_5 )
            FUNC_4( VAR_5 );
        return VAR_13;
    }
}
