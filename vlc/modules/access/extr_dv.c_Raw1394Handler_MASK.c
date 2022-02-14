
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef int raw1394handle_t ;
typedef enum raw1394_iso_disposition { ____Placeholder_raw1394_iso_disposition } raw1394_iso_disposition ;
struct TYPE_10__ {int p_buffer; } ;
typedef TYPE_3__ block_t ;
struct TYPE_11__ {TYPE_1__* p_ev; int lock; int p_frame; } ;
typedef TYPE_4__ access_sys_t ;
struct TYPE_8__ {int lock; TYPE_3__* p_frame; int * pp_last; } ;


 int FUNC_0 (unsigned int) ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static enum raw1394_iso_disposition
FUNC_8(raw1394handle_t VAR_0, unsigned char *VAR_1,
        unsigned int VAR_2, unsigned char VAR_3,
        unsigned char VAR_4, unsigned char VAR_5, unsigned int VAR_6,
        unsigned int VAR_7)
{
    stream_t *VAR_8 = ((void*)0);
    access_sys_t *VAR_9 = ((void*)0);
    block_t *VAR_10 = ((void*)0);
    FUNC_0(VAR_3); FUNC_0(VAR_4);
    FUNC_0(VAR_5); FUNC_0(VAR_6); FUNC_0(VAR_7);

    VAR_8 = (stream_t *) FUNC_5( VAR_0 );
    if( !VAR_8 ) return 0;

    VAR_9 = VAR_8->p_sys;


    if( VAR_2 > 16 )
    {
        unsigned char * VAR_11 = VAR_1 + 8;
        int VAR_12 = VAR_11[ 0 ] >> 5;
        int VAR_13 = VAR_11[ 1 ] >> 4;
        int VAR_14 = VAR_11[ 2 ];

        FUNC_6( &VAR_9->p_ev->lock );



        if( (VAR_12 == 0) && (VAR_13 == 0) )
        {
            FUNC_6( &VAR_9->lock );
            if( VAR_9->p_ev->p_frame )
            {


                FUNC_2( &VAR_9->p_frame, VAR_9->p_ev->p_frame );
            }

            VAR_9->p_ev->p_frame = FUNC_1( 144000 );
            VAR_9->p_ev->pp_last = &VAR_9->p_frame;
            FUNC_7( &VAR_9->lock );
        }

        VAR_10 = VAR_9->p_ev->p_frame;
        if( VAR_10 )
        {
            switch ( VAR_12 )
            {
            case 0:

                FUNC_4( VAR_10->p_buffer + VAR_13 * 150 * 80, VAR_11, 480 );
                break;

            case 1:
                FUNC_4( VAR_10->p_buffer + VAR_13 * 150 * 80 + ( 1 + VAR_14 ) * 80, VAR_11, 480 );
                break;

            case 2:
                FUNC_4( VAR_10->p_buffer + VAR_13 * 150 * 80 + ( 3 + VAR_14 ) * 80, VAR_11, 480 );
                break;

            case 3:
                FUNC_4( VAR_10->p_buffer + VAR_13 * 150 * 80 + ( 6 + VAR_14 * 16 ) * 80, VAR_11, 480 );
                break;

            case 4:
                FUNC_4( VAR_10->p_buffer + VAR_13 * 150 * 80 + ( 7 + ( VAR_14 / 15 ) + VAR_14 ) * 80, VAR_11, 480 );
                break;

            default:
                FUNC_3( VAR_10 );
                VAR_10 = ((void*)0);
                break;
            }
        }

        FUNC_7( &VAR_9->p_ev->lock );
    }
    return 0;
}
