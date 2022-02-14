
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct TYPE_18__ {int buffer_info; int output_buffers; int codec; int input_buffers; } ;
typedef TYPE_1__ mc_api_sys ;
struct TYPE_19__ {int b_started; int p_obj; TYPE_1__* p_sys; } ;
typedef TYPE_2__ mc_api ;
typedef int * jobject ;
struct TYPE_20__ {int (* DeleteLocalRef ) (TYPE_3__**,int *) ;int (* NewGlobalRef ) (TYPE_3__**,int *) ;int * (* NewObject ) (TYPE_3__**,int ,int ) ;int * (* CallObjectMethod ) (TYPE_3__**,int ,scalar_t__) ;int (* CallVoidMethod ) (TYPE_3__**,int ,int ) ;} ;
struct TYPE_17__ {int buffer_info_ctor; int buffer_info_class; scalar_t__ get_output_buffers; scalar_t__ get_input_buffers; int start; } ;
typedef TYPE_3__* JNIEnv ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_14__ VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_3__**,int ,int ) ;
 int FUNC_7 (TYPE_3__**,int *) ;
 int * FUNC_8 (TYPE_3__**,int ,scalar_t__) ;
 int FUNC_9 (TYPE_3__**,int *) ;
 int * FUNC_10 (TYPE_3__**,int ,scalar_t__) ;
 int FUNC_11 (TYPE_3__**,int *) ;
 int * FUNC_12 (TYPE_3__**,int ,int ) ;
 int FUNC_13 (TYPE_3__**,int *) ;
 int FUNC_14 (TYPE_3__**,int *) ;
 int FUNC_15 (TYPE_3__**,int *) ;

__attribute__((used)) static int FUNC_16(mc_api *VAR_2)
{
    mc_api_sys *VAR_3 = VAR_2->p_sys;
    JNIEnv* VAR_4 = ((void*)0);
    jobject VAR_5 = ((void*)0);
    jobject VAR_6 = ((void*)0);
    jobject VAR_7 = ((void*)0);

    FUNC_1();

    int VAR_8 = VAR_0;

    (*VAR_4)->CallVoidMethod(VAR_4, VAR_3->codec, VAR_1.start);
    if (FUNC_0())
    {
        FUNC_5(VAR_2->p_obj, "Exception occurred in MediaCodec.start");
        goto error;
    }
    VAR_2->b_started = 1;

    if (VAR_1.get_input_buffers && VAR_1.get_output_buffers)
    {
        VAR_5 = (*VAR_4)->CallObjectMethod(VAR_4, VAR_3->codec,
                                                  VAR_1.get_input_buffers);
        if (FUNC_0())
        {
            FUNC_4(VAR_2->p_obj, "Exception in MediaCodec.getInputBuffers");
            goto error;
        }
        VAR_3->input_buffers = (*VAR_4)->NewGlobalRef(VAR_4, VAR_5);

        VAR_6 = (*VAR_4)->CallObjectMethod(VAR_4, VAR_3->codec,
                                                   VAR_1.get_output_buffers);
        if (FUNC_0())
        {
            FUNC_4(VAR_2->p_obj, "Exception in MediaCodec.getOutputBuffers");
            goto error;
        }
        VAR_3->output_buffers = (*VAR_4)->NewGlobalRef(VAR_4, VAR_6);
    }
    VAR_7 = (*VAR_4)->NewObject(VAR_4, VAR_1.buffer_info_class,
                                     VAR_1.buffer_info_ctor);
    VAR_3->buffer_info = (*VAR_4)->NewGlobalRef(VAR_4, VAR_7);

    VAR_8 = 0;
    FUNC_3(VAR_2->p_obj, "MediaCodec via JNI opened");

error:
    if (VAR_5)
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_5);
    if (VAR_6)
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_6);
    if (VAR_7)
        (*VAR_4)->DeleteLocalRef(VAR_4, VAR_7);

    if (VAR_8 != 0)
        FUNC_2(VAR_2);
    return VAR_8;
}
