
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int * buffer_info; int * codec; int * output_buffers; int * input_buffers; } ;
typedef TYPE_1__ mc_api_sys ;
struct TYPE_14__ {int b_direct_rendering; int b_started; int p_obj; TYPE_1__* p_sys; } ;
typedef TYPE_2__ mc_api ;
struct TYPE_15__ {int (* DeleteGlobalRef ) (TYPE_3__**,int *) ;int (* CallVoidMethod ) (TYPE_3__**,int *,int ) ;} ;
struct TYPE_12__ {int release; int stop; } ;
typedef TYPE_3__* JNIEnv ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_10__ VAR_0 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_3__**,int *) ;
 int FUNC_5 (TYPE_3__**,int *) ;
 int FUNC_6 (TYPE_3__**,int *,int ) ;
 int FUNC_7 (TYPE_3__**,int *,int ) ;
 int FUNC_8 (TYPE_3__**,int *) ;
 int FUNC_9 (TYPE_3__**,int *) ;

__attribute__((used)) static int FUNC_10(mc_api *VAR_1)
{
    mc_api_sys *VAR_2 = VAR_1->p_sys;
    JNIEnv *VAR_3;

    VAR_1->b_direct_rendering = 0;

    FUNC_1();

    if (VAR_2->input_buffers)
    {
        (*VAR_3)->DeleteGlobalRef(VAR_3, VAR_2->input_buffers);
        VAR_2->input_buffers = ((void*)0);
    }
    if (VAR_2->output_buffers)
    {
        (*VAR_3)->DeleteGlobalRef(VAR_3, VAR_2->output_buffers);
        VAR_2->output_buffers = ((void*)0);
    }
    if (VAR_2->codec)
    {
        if (VAR_1->b_started)
        {
            (*VAR_3)->CallVoidMethod(VAR_3, VAR_2->codec, VAR_0.stop);
            if (FUNC_0())
                FUNC_3(VAR_1->p_obj, "Exception in MediaCodec.stop");
            VAR_1->b_started = 0;
        }

        (*VAR_3)->CallVoidMethod(VAR_3, VAR_2->codec, VAR_0.release);
        if (FUNC_0())
            FUNC_3(VAR_1->p_obj, "Exception in MediaCodec.release");
        (*VAR_3)->DeleteGlobalRef(VAR_3, VAR_2->codec);
        VAR_2->codec = ((void*)0);
    }
    if (VAR_2->buffer_info)
    {
        (*VAR_3)->DeleteGlobalRef(VAR_3, VAR_2->buffer_info);
        VAR_2->buffer_info = ((void*)0);
    }
    FUNC_2(VAR_1->p_obj, "MediaCodec via JNI closed");
    return 0;
}
