
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_12__ {int input_stream_id; int output_stream_id; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_13__ {int i_flags; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_4(decoder_t *VAR_2, block_t *VAR_3)
{
    decoder_sys_t *VAR_4 = VAR_2->p_sys;

    if (!VAR_3)
        return VAR_1;

    if (VAR_3->i_flags & (VAR_0))
    {
        FUNC_2(VAR_3);
        return VAR_1;
    }


    if (FUNC_1(VAR_2, VAR_4->output_stream_id))
        goto error;
    if (FUNC_0(VAR_2, VAR_4->input_stream_id, VAR_3))
        goto error;
    FUNC_2(VAR_3);

    return VAR_1;

error:
    FUNC_3(VAR_2, "Error in DecodeSync()");
    FUNC_2(VAR_3);
    return VAR_1;
}
