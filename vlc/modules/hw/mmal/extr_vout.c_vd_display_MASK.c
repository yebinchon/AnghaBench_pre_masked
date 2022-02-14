
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_19__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_20__ {scalar_t__ i_frame_rate; scalar_t__ i_frame_rate_base; scalar_t__ b_progressive; scalar_t__ b_top_field_first; int next_phase_check; int buffer_mutex; int buffer_cond; int buffers_in_transit; scalar_t__ opaque; scalar_t__ adjust_refresh_rate; TYPE_11__* input; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct TYPE_18__ {scalar_t__ i_frame_rate; scalar_t__ i_frame_rate_base; } ;
struct TYPE_21__ {scalar_t__ b_progressive; scalar_t__ b_top_field_first; TYPE_16__ format; TYPE_4__* p_sys; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_22__ {int displayed; TYPE_5__* buffer; } ;
typedef TYPE_4__ picture_sys_t ;
struct TYPE_23__ {int user_data; int length; scalar_t__ cmd; } ;
struct TYPE_17__ {int buffer_size; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_16__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_11__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(vout_display_t *VAR_4, picture_t *VAR_5)
{
    vout_display_sys_t *VAR_6 = VAR_4->sys;
    picture_sys_t *VAR_7 = VAR_5->p_sys;
    MMAL_BUFFER_HEADER_T *VAR_8 = VAR_7->buffer;
    MMAL_STATUS_T VAR_9;

    if (VAR_5->format.i_frame_rate != VAR_6->i_frame_rate ||
        VAR_5->format.i_frame_rate_base != VAR_6->i_frame_rate_base ||
        VAR_5->b_progressive != VAR_6->b_progressive ||
        VAR_5->b_top_field_first != VAR_6->b_top_field_first) {
        VAR_6->b_top_field_first = VAR_5->b_top_field_first;
        VAR_6->b_progressive = VAR_5->b_progressive;
        VAR_6->i_frame_rate = VAR_5->format.i_frame_rate;
        VAR_6->i_frame_rate_base = VAR_5->format.i_frame_rate_base;
        FUNC_2(VAR_4, ((void*)0), &VAR_5->format);
    }

    if (!VAR_7->displayed || !VAR_6->opaque) {
        VAR_8->cmd = 0;
        VAR_8->length = VAR_6->input->buffer_size;
        VAR_8->user_data = FUNC_7(VAR_5);

        VAR_9 = FUNC_5(VAR_6->input, VAR_8);
        if (VAR_9 == VAR_1)
            FUNC_0(&VAR_6->buffers_in_transit, 1);

        if (VAR_9 != VAR_1) {
            FUNC_6(VAR_4, "Failed to send buffer to input port. Frame dropped");
            FUNC_8(VAR_5);
        }

        VAR_7->displayed = 1;
    }

    FUNC_3(VAR_4, VAR_3);

    if (VAR_6->next_phase_check == 0 && VAR_6->adjust_refresh_rate)
        FUNC_4(VAR_4);
    VAR_6->next_phase_check = (VAR_6->next_phase_check + 1) % VAR_2;

    if (VAR_6->opaque) {
        FUNC_10(&VAR_6->buffer_mutex);
        while (FUNC_1(&VAR_6->buffers_in_transit) >= VAR_0)
            FUNC_9(&VAR_6->buffer_cond, &VAR_6->buffer_mutex);
        FUNC_11(&VAR_6->buffer_mutex);
    }
}
