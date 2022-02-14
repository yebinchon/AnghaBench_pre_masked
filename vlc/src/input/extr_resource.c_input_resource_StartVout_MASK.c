
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* fmt; int vout; } ;
typedef TYPE_2__ vout_configuration_t ;
typedef int vlc_video_context ;
struct TYPE_13__ {int lock; int * p_input; } ;
typedef TYPE_3__ input_resource_t ;
struct TYPE_14__ {int viewpoint; } ;
typedef TYPE_4__ input_control_param_t ;
struct TYPE_11__ {int pose; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__ const*,int *,int *) ;

int FUNC_6(input_resource_t *VAR_1,
                              vlc_video_context *VAR_2,
                              const vout_configuration_t *VAR_3)
{
    FUNC_3( &VAR_1->lock );
    if (FUNC_5(VAR_3, VAR_2, VAR_1->p_input)) {
        FUNC_2(VAR_1, VAR_3->vout);
        FUNC_4(&VAR_1->lock);
        return -1;
    }

    FUNC_0(VAR_1, VAR_3->vout);


    if (VAR_1->p_input != ((void*)0))
    {
        input_control_param_t VAR_4 = { .viewpoint = VAR_3->fmt->pose };
        FUNC_1(VAR_1->p_input, VAR_0,
                          &VAR_4);
    }
    FUNC_4( &VAR_1->lock );
    return 0;
}
