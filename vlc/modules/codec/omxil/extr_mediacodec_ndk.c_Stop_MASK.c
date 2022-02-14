
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * p_format; int * p_codec; } ;
typedef TYPE_3__ mc_api_sys ;
struct TYPE_10__ {int b_direct_rendering; int b_started; int p_obj; TYPE_3__* p_sys; } ;
typedef TYPE_4__ mc_api ;
struct TYPE_8__ {int (* delete ) (int *) ;} ;
struct TYPE_7__ {int (* delete ) (int *) ;int (* stop ) (int *) ;} ;
struct TYPE_11__ {TYPE_2__ AMediaFormat; TYPE_1__ AMediaCodec; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_5__ VAR_0 ;

__attribute__((used)) static int FUNC_4(mc_api *VAR_1)
{
    mc_api_sys *VAR_2 = VAR_1->p_sys;

    VAR_1->b_direct_rendering = 0;

    if (VAR_2->p_codec)
    {
        if (VAR_1->b_started)
        {
            VAR_0.AMediaCodec.stop(VAR_2->p_codec);
            VAR_1->b_started = 0;
        }
        VAR_0.AMediaCodec.delete(VAR_2->p_codec);
        VAR_2->p_codec = ((void*)0);
    }
    if (VAR_2->p_format)
    {
        VAR_0.AMediaFormat.delete(VAR_2->p_format);
        VAR_2->p_format = ((void*)0);
    }

    FUNC_0(VAR_1->p_obj, "MediaCodec via NDK closed");
    return 0;
}
