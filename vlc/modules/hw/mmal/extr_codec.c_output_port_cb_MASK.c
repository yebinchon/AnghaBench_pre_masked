
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int b_top_field_first; int b_progressive; int date; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_19__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_20__ {TYPE_6__* output_format; scalar_t__ opaque; int sem; int output_in_transit; scalar_t__ output_pool; int b_top_field_first; int b_progressive; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_24__ {scalar_t__ cmd; scalar_t__ length; int * data; scalar_t__ alloc_size; int * user_data; int pts; } ;
struct TYPE_23__ {int encoding; } ;
struct TYPE_22__ {int format; } ;
struct TYPE_21__ {scalar_t__ userdata; } ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_6__ MMAL_ES_FORMAT_T ;
typedef TYPE_7__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_7__*) ;
 TYPE_5__* FUNC_3 (TYPE_7__*) ;
 TYPE_6__* FUNC_4 () ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(MMAL_PORT_T *VAR_2, MMAL_BUFFER_HEADER_T *VAR_3)
{
    decoder_t *VAR_4 = (decoder_t *)VAR_2->userdata;
    decoder_sys_t *VAR_5 = VAR_4->p_sys;
    picture_t *VAR_6;
    MMAL_EVENT_FORMAT_CHANGED_T *VAR_7;
    MMAL_ES_FORMAT_T *VAR_8;

    if (VAR_3->cmd == 0) {
        VAR_6 = (picture_t *)VAR_3->user_data;
        if (VAR_3->length > 0) {
            VAR_6->date = VAR_3->pts;
            VAR_6->b_progressive = VAR_5->b_progressive;
            VAR_6->b_top_field_first = VAR_5->b_top_field_first;
            FUNC_1(VAR_4, VAR_6);
        } else {
            FUNC_6(VAR_6);
            if (VAR_5->output_pool) {
                VAR_3->user_data = ((void*)0);
                VAR_3->alloc_size = 0;
                VAR_3->data = ((void*)0);
                FUNC_2(VAR_3);
            }
        }
        FUNC_0(&VAR_5->output_in_transit, 1);
        FUNC_7(&VAR_5->sem);
    } else if (VAR_3->cmd == VAR_1) {
        VAR_7 = FUNC_3(VAR_3);

        VAR_8 = FUNC_4();
        FUNC_5(VAR_8, VAR_7->format);

        if (VAR_5->opaque)
            VAR_8->encoding = VAR_0;

        VAR_5->output_format = VAR_8;

        FUNC_2(VAR_3);
    } else {
        FUNC_2(VAR_3);
    }
}
