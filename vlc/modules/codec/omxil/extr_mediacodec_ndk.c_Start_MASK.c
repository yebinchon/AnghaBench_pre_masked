
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int p_codec; } ;
typedef TYPE_2__ mc_api_sys ;
struct TYPE_9__ {int b_started; int p_obj; TYPE_2__* p_sys; } ;
typedef TYPE_3__ mc_api ;
struct TYPE_7__ {scalar_t__ (* start ) (int ) ;} ;
struct TYPE_10__ {TYPE_1__ AMediaCodec; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static int FUNC_4(mc_api *VAR_3)
{
    mc_api_sys *VAR_4 = VAR_3->p_sys;
    int VAR_5 = VAR_1;

    if (VAR_2.AMediaCodec.start(VAR_4->p_codec) != VAR_0)
    {
        FUNC_2(VAR_3->p_obj, "AMediaCodec.start failed");
        goto error;
    }

    VAR_3->b_started = 1;
    VAR_5 = 0;

    FUNC_1(VAR_3->p_obj, "MediaCodec via NDK opened");
error:
    if (VAR_5 != 0)
        FUNC_0(VAR_3);
    return VAR_5;
}
