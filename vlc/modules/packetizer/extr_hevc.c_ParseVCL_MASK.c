
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int hevc_video_parameter_set_t ;
typedef int hevc_slice_segment_header_t ;
typedef int hevc_sequence_parameter_set_t ;
typedef int hevc_picture_parameter_set_t ;
typedef enum hevc_slice_type_e { ____Placeholder_hevc_slice_type_e } hevc_slice_type_e ;
struct TYPE_18__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_17__ {int pp_chain_last; scalar_t__ p_chain; } ;
struct TYPE_19__ {scalar_t__ sets; int b_recovery_point; TYPE_1__ frame; int p_ccs; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_20__ {int* p_buffer; size_t i_buffer; int i_flags; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_2__*,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,TYPE_3__*,int **,int **,int **) ;
 scalar_t__ VAR_4 ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int const*,size_t,int,int (*) (int ,TYPE_3__*,int **,int **,int **),TYPE_3__*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int const**,size_t*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static block_t *FUNC_14(decoder_t *VAR_5, uint8_t VAR_6, block_t *VAR_7)
{
    decoder_sys_t *VAR_8 = VAR_5->p_sys;
    block_t *VAR_9 = ((void*)0);

    const uint8_t *VAR_10 = VAR_7->p_buffer;
    size_t VAR_11 = VAR_7->i_buffer;

    if(FUNC_13(!FUNC_12(&VAR_10, &VAR_11) || VAR_11 < 3))
    {
        FUNC_5(&VAR_8->frame.pp_chain_last, VAR_7);
        return ((void*)0);
    }

    const uint8_t VAR_12 = FUNC_8( VAR_10 );
    bool VAR_13 = VAR_10[2] & 0x80;
    if (VAR_13)
    {
        if(VAR_8->frame.p_chain)
        {

            VAR_9 = FUNC_2(VAR_8, VAR_8->sets != VAR_4 &&
                                                VAR_8->b_recovery_point);
        }

        hevc_slice_segment_header_t *VAR_14 = FUNC_7(VAR_10, VAR_11, 1,
                                                                      FUNC_1, VAR_8);
        if(VAR_14 && VAR_12 == 0)
        {
            hevc_sequence_parameter_set_t *VAR_15;
            hevc_picture_parameter_set_t *VAR_16;
            hevc_video_parameter_set_t *VAR_17;
            FUNC_1(FUNC_9(VAR_14), VAR_8, &VAR_16, &VAR_15, &VAR_17);
            FUNC_0(VAR_5, VAR_16, VAR_15, VAR_17);
        }

        FUNC_3( VAR_5 );

        switch(VAR_6)
        {
            case 135:
            case 134:
            case 136:
            case 131:
            case 132:
            case 133:
                VAR_7->i_flags |= VAR_1;
                break;

            default:
            {
                if(VAR_14)
                {
                    enum hevc_slice_type_e VAR_18;
                    if(FUNC_10( VAR_14, &VAR_18 ))
                    {
                        switch(VAR_18)
                        {
                            case 130:
                                VAR_7->i_flags |= VAR_0;
                                break;
                            case 128:
                                VAR_7->i_flags |= VAR_2;
                                break;
                            case 129:
                                VAR_7->i_flags |= VAR_1;
                                break;
                        }
                    }
                }
                else VAR_7->i_flags |= VAR_0;
            }
            break;
        }

        if(VAR_14)
            FUNC_11(VAR_14);
    }

    if(VAR_8->sets == VAR_4 && VAR_12 == 0 && FUNC_4(VAR_8))
        VAR_8->sets = VAR_3;

    if(VAR_8->sets != VAR_4 && (VAR_7->i_flags & VAR_1))
    {
        VAR_8->b_recovery_point = 1;
    }

    if(!VAR_8->b_recovery_point)
        FUNC_6(VAR_8->p_ccs);

    FUNC_5(&VAR_8->frame.pp_chain_last, VAR_7);

    return VAR_9;
}
