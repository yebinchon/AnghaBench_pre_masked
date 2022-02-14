
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_13__ {scalar_t__ pending_output_events; scalar_t__ pending_input_events; int input_stream_id; int output_stream_id; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_14__ {int i_flags; } ;
typedef TYPE_3__ block_t ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_7(decoder_t *VAR_4, block_t *VAR_5)
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;
    HRESULT VAR_7;

    if (!VAR_5)
        return VAR_3;

    if (VAR_5->i_flags & (VAR_0))
    {
        FUNC_5(VAR_5);
        return VAR_3;
    }


    while ((VAR_7 = FUNC_0(VAR_4)) == VAR_2)
        continue;
    if (VAR_7 != VAR_1 && FUNC_1(VAR_7))
        goto error;


    if (VAR_6->pending_output_events > 0)
    {
        VAR_6->pending_output_events -= 1;
        if (FUNC_3(VAR_4, VAR_6->output_stream_id))
            goto error;
    }


    while (VAR_6->pending_input_events == 0)
    {
        VAR_7 = FUNC_0(VAR_4);
        if (VAR_7 == VAR_1)
        {

            FUNC_4(1);
            continue;
        }
        if (FUNC_1(VAR_7))
            goto error;

        if (VAR_6->pending_output_events > 0)
        {
            VAR_6->pending_output_events -= 1;
            if (FUNC_3(VAR_4, VAR_6->output_stream_id))
                goto error;
            break;
        }
    }

    VAR_6->pending_input_events -= 1;
    if (FUNC_2(VAR_4, VAR_6->input_stream_id, VAR_5))
        goto error;

    FUNC_5(VAR_5);

    return VAR_3;

error:
    FUNC_6(VAR_4, "Error in DecodeAsync()");
    FUNC_5(VAR_5);
    return VAR_3;
}
