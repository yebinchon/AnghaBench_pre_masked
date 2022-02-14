
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct v4l2_buffer {size_t index; int bytesused; int memory; int type; } ;
struct buffer_t {int start; } ;
struct TYPE_5__ {int p_buffer; int i_dts; int i_pts; } ;
typedef TYPE_1__ block_t ;




 int FUNC_0 (struct v4l2_buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int ,struct v4l2_buffer*) ;
 int FUNC_7 (int) ;

block_t *FUNC_8 (vlc_object_t *VAR_5, int VAR_6,
                    const struct buffer_t *restrict VAR_7)
{
    struct v4l2_buffer VAR_8 = {
        .type = VAR_0,
        .memory = VAR_1,
    };


    if (FUNC_6 (VAR_6, VAR_2, &VAR_8) < 0)
    {
        switch (VAR_4)
        {
            case 129:
                return ((void*)0);
            case 128:


            default:
                FUNC_4 (VAR_5, "dequeue error: %s", FUNC_7(VAR_4));
                return ((void*)0);
        }
    }


    block_t *VAR_9 = FUNC_1 (VAR_8.bytesused);
    if (FUNC_5(VAR_9 == ((void*)0)))
        return ((void*)0);
    VAR_9->i_pts = VAR_9->i_dts = FUNC_0 (&VAR_8);
    FUNC_3 (VAR_9->p_buffer, VAR_7[VAR_8.index].start, VAR_8.bytesused);


    if (FUNC_6 (VAR_6, VAR_3, &VAR_8) < 0)
    {
        FUNC_4 (VAR_5, "queue error: %s", FUNC_7(VAR_4));
        FUNC_2 (VAR_9);
        return ((void*)0);
    }
    return VAR_9;
}
