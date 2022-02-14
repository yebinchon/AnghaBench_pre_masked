
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int bytes; scalar_t__ packet; } ;
typedef TYPE_2__ ogg_packet ;
typedef int int16_t ;
struct TYPE_15__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_16__ {scalar_t__ i_frame_in_packet; TYPE_1__* p_header; int end_date; int stereo; int bits; int p_state; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_17__ {scalar_t__ i_pts; scalar_t__ i_length; scalar_t__ p_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_13__ {scalar_t__ frames_per_packet; int nb_channels; int frame_size; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *,int ,int *) ;

__attribute__((used)) static block_t *FUNC_9( decoder_t *VAR_0, ogg_packet *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;

    if( VAR_1->bytes )
    {

        FUNC_5( &VAR_2->bits, (char *)VAR_1->packet,
                              VAR_1->bytes );
        VAR_2->i_frame_in_packet = 0;
    }


    if( VAR_2->i_frame_in_packet < VAR_2->p_header->frames_per_packet )
    {
        block_t *VAR_3;
        if( VAR_2->p_header->frame_size == 0 )
            return ((void*)0);

        if( FUNC_3( VAR_0 ) )
            return ((void*)0);
        VAR_3 =
            FUNC_2( VAR_0, VAR_2->p_header->frame_size );
        if( !VAR_3 )
        {
            return ((void*)0);
        }

        switch( FUNC_7( VAR_2->p_state, &VAR_2->bits,
                                  (int16_t *)VAR_3->p_buffer ) )
        {
            case -2:
                FUNC_4( VAR_0, "decoding error: corrupted stream?" );

            case -1:
                return ((void*)0);
        }

        if( FUNC_6( &VAR_2->bits ) < 0 )
        {
            FUNC_4( VAR_0, "decoding overflow: corrupted stream?" );
        }

        if( VAR_2->p_header->nb_channels == 2 )
            FUNC_8( (int16_t *)VAR_3->p_buffer,
                                     VAR_2->p_header->frame_size,
                                     &VAR_2->stereo );


        VAR_3->i_pts = FUNC_0( &VAR_2->end_date );
        VAR_3->i_length =
            FUNC_1( &VAR_2->end_date, VAR_2->p_header->frame_size )
            - VAR_3->i_pts;

        VAR_2->i_frame_in_packet++;

        return VAR_3;
    }
    else
    {
        return ((void*)0);
    }
}
