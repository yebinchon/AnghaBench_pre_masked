
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct picture_free_t {TYPE_1__* p_pic; } ;
struct TYPE_25__ {scalar_t__ date; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_26__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_27__ {scalar_t__ i_lastpts; scalar_t__ i_frame_pts_delta; int p_schro; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_28__ {int i_flags; scalar_t__ i_pts; int i_buffer; int p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_31__ {int tag; TYPE_4__* priv; int free; } ;
struct TYPE_30__ {int * priv; } ;
struct TYPE_29__ {scalar_t__ value; } ;
typedef TYPE_5__ SchroTag ;
typedef TYPE_6__ SchroFrame ;
typedef TYPE_7__ SchroBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;






 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 TYPE_7__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,TYPE_6__*) ;
 int FUNC_9 (int ,TYPE_7__*) ;
 int FUNC_10 (int ) ;
 TYPE_5__* FUNC_11 (int ) ;
 TYPE_6__* FUNC_12 (int ) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_16( decoder_t *VAR_6, block_t *VAR_7 )
{
    decoder_sys_t *VAR_8 = VAR_6->p_sys;

    if( !VAR_7 )
        return VAR_3;
    else {



        if( VAR_7->i_flags & (VAR_0|VAR_1) )
        {
            FUNC_1( VAR_6 );
            if( VAR_7->i_flags & VAR_0 )
            {
                FUNC_3( VAR_7 );
                return VAR_3;
            }
        }

        SchroBuffer *VAR_9;
        VAR_9 = FUNC_7( VAR_7->p_buffer, VAR_7->i_buffer );
        VAR_9->free = VAR_2;
        VAR_9->priv = VAR_7;
        if( VAR_7->i_pts != VAR_4 ) {
            vlc_tick_t *VAR_10 = FUNC_5( sizeof(*VAR_10) );
            if( VAR_10 ) {
                *VAR_10 = VAR_7->i_pts;

                VAR_9->tag = FUNC_15( VAR_10, VAR_5 );
            }
        }



        FUNC_9( VAR_8->p_schro, VAR_9 );

    }

    while( 1 )
    {
        SchroFrame *VAR_11;
        picture_t *VAR_12;
        int VAR_13 = FUNC_10( VAR_8->p_schro );

        switch( VAR_13 )
        {
        case 131:
            FUNC_2( VAR_6 );
            break;

        case 130:
            return VAR_3;

        case 129:
            VAR_11 = FUNC_0( VAR_6 );

            if( !VAR_11 )
            {
                FUNC_6( VAR_6, "Could not allocate picture for decoder");
                return VAR_3;
            }

            FUNC_8( VAR_8->p_schro, VAR_11);
            break;

        case 128: {
            SchroTag *VAR_14 = FUNC_11( VAR_8->p_schro );
            VAR_11 = FUNC_12( VAR_8->p_schro );
            if( !VAR_11 || !VAR_11->priv )
            {


                if( VAR_14 ) FUNC_14( VAR_14 );
                if( VAR_11 ) FUNC_13( VAR_11 );
                break;
            }
            VAR_12 = ((struct picture_free_t*) VAR_11->priv)->p_pic;
            VAR_11->priv = ((void*)0);

            if( VAR_14 )
            {

                VAR_12->date = *(vlc_tick_t*) VAR_14->value;
                FUNC_14( VAR_14 );
            }
            else if( VAR_8->i_lastpts != VAR_4 )
            {





                VAR_12->date = VAR_8->i_lastpts + VAR_8->i_frame_pts_delta;
            }
            VAR_8->i_lastpts = VAR_12->date;

            FUNC_13( VAR_11 );
            FUNC_4( VAR_6, VAR_12 );
            return VAR_3;
        }
        case 133:

            break;

        case 132:
            FUNC_6( VAR_6, "SCHRO_DECODER_ERROR");
            return VAR_3;
        }
    }
}
