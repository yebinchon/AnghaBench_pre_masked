
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_29__ {int i_idr_pic_id; } ;
typedef TYPE_3__ h264_slice_t ;
struct TYPE_30__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ decoder_t ;
struct TYPE_28__ {int pp_append; } ;
struct TYPE_27__ {int pp_append; TYPE_6__* p_head; } ;
struct TYPE_31__ {int b_slice; int b_recovered; int b_new_sps; int b_new_pps; scalar_t__ i_frame_dts; scalar_t__ i_frame_pts; int dts; TYPE_2__ frame; int i_next_block_flags; TYPE_1__ leading; int * p_active_pps; TYPE_3__ slice; void* i_recoveryfnum; void* i_recovery_frame_cnt; int p_ccs; int p_active_sps; } ;
typedef TYPE_5__ decoder_sys_t ;
struct TYPE_32__ {int* p_buffer; scalar_t__ i_dts; scalar_t__ i_pts; int i_flags; int i_buffer; struct TYPE_32__* p_next; } ;
typedef TYPE_6__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int*,int ,int,int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 TYPE_6__* FUNC_3 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*) ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int *,TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,scalar_t__ const) ;
 int FUNC_12 (TYPE_4__*,char*) ;

__attribute__((used)) static block_t *FUNC_13( decoder_t *VAR_8, bool *VAR_9, block_t *VAR_10 )
{
    decoder_sys_t *VAR_11 = VAR_8->p_sys;
    block_t *VAR_12 = ((void*)0);

    const int VAR_13 = VAR_10->p_buffer[4]&0x1f;
    const vlc_tick_t VAR_14 = VAR_10->i_dts;
    const vlc_tick_t VAR_15 = VAR_10->i_pts;
    bool VAR_16 = VAR_10->i_flags & VAR_0;
    VAR_10->i_flags &= ~VAR_0;

    if( VAR_11->b_slice && (!VAR_11->p_active_pps || !VAR_11->p_active_sps) )
    {
        FUNC_12( VAR_8, "waiting for SPS/PPS" );


        FUNC_0( VAR_11 );
        FUNC_7( VAR_11 );
        FUNC_10( VAR_11->p_ccs );
    }

    switch( VAR_13 )
    {

        case 139:
        case 137:
        case 136:
        case 135:
        case 133:
        {
            h264_slice_t VAR_17;

            if( VAR_13 == 133 )
            {
                VAR_11->b_recovered = 1;
                VAR_11->i_recovery_frame_cnt = VAR_6;
                VAR_11->i_recoveryfnum = VAR_6;
            }

            if( FUNC_4( VAR_8, VAR_10, &VAR_17 ) )
            {

                if( VAR_17.i_idr_pic_id == -1 )
                    VAR_17.i_idr_pic_id = VAR_11->slice.i_idr_pic_id;

                bool VAR_18 = FUNC_2( &VAR_11->slice, &VAR_17 );
                if( VAR_18 )
                {

                    for( block_t *VAR_19 = VAR_11->leading.p_head; VAR_19; VAR_19 = VAR_19->p_next )
                    {
                        if( (VAR_19->i_flags & VAR_4) == 0 )
                            continue;
                        FUNC_1( VAR_19->p_buffer, VAR_19->i_buffer,
                                              1 , VAR_5, VAR_8 );
                    }

                    if( VAR_11->b_slice )
                        VAR_12 = FUNC_3( VAR_8 );
                }


                VAR_11->slice = VAR_17;
            }
            else
            {
                VAR_11->p_active_pps = ((void*)0);

            }
            VAR_11->b_slice = 1;

            FUNC_8( &VAR_11->frame.pp_append, VAR_10 );
        } break;



        case 151:
            if( VAR_11->b_slice )
                VAR_12 = FUNC_3( VAR_8 );


            FUNC_0( VAR_11 );

            VAR_10->i_flags |= VAR_3;

            FUNC_8( &VAR_11->leading.pp_append, VAR_10 );
        break;

        case 131:
        case 146:
            if( VAR_11->b_slice )
                VAR_12 = FUNC_3( VAR_8 );


            if( VAR_13 == 131 )
            {
                FUNC_6( VAR_8, VAR_10 );
                VAR_11->b_new_sps = 1;
            }
            else
            {
                FUNC_5( VAR_8, VAR_10 );
                VAR_11->b_new_pps = 1;
            }
        break;

        case 140:
            if( VAR_11->b_slice )
                VAR_12 = FUNC_3( VAR_8 );

            VAR_10->i_flags |= VAR_4;
            FUNC_8( &VAR_11->leading.pp_append, VAR_10 );
        break;

        case 130:
        case 145:
        case 129:
        case 150:
        case 144:
        case 143:
            if( VAR_11->b_slice )
                VAR_12 = FUNC_3( VAR_8 );

            FUNC_8( &VAR_11->leading.pp_append, VAR_10 );
        break;



        case 149:
        case 148:

            FUNC_8( &VAR_11->frame.pp_append, VAR_10 );


            VAR_11->i_next_block_flags |= VAR_2;
            if( VAR_11->b_slice )
                VAR_12 = FUNC_3( VAR_8 );
        break;

        case 132:
        case 128:
        case 147:
        case 134:
        case 138:
        case 142:
        case 141:
        default:
            FUNC_8( &VAR_11->frame.pp_append, VAR_10 );
        break;
    }

    *VAR_9 = 0;
    if( VAR_11->i_frame_dts == VAR_7 &&
        VAR_11->i_frame_pts == VAR_7 )
    {
        VAR_11->i_frame_dts = VAR_14;
        VAR_11->i_frame_pts = VAR_15;
        *VAR_9 = 1;
        if( VAR_14 != VAR_7 )
            FUNC_11( &VAR_11->dts, VAR_14 );
    }

    if( VAR_11->b_slice && VAR_16 && !VAR_12 )
    {
        VAR_12 = FUNC_3( VAR_8 );
    }

    if( VAR_12 && (VAR_12->i_flags & VAR_1) )
    {
        FUNC_9( VAR_12 );
        VAR_12 = ((void*)0);
    }

    return VAR_12;
}
