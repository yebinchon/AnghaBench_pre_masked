
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_14__ {int codec; int input_buffers; } ;
typedef TYPE_1__ mc_api_sys ;
struct TYPE_15__ {int p_obj; TYPE_1__* p_sys; } ;
typedef TYPE_2__ mc_api ;
typedef size_t jsize ;
typedef int jobject ;
typedef int jint ;
struct TYPE_16__ {size_t (* GetDirectBufferCapacity ) (TYPE_3__**,int ) ;int (* DeleteLocalRef ) (TYPE_3__**,int ) ;int (* CallVoidMethod ) (TYPE_3__**,int ,int ,int,int ,size_t,int ,int) ;int * (* GetDirectBufferAddress ) (TYPE_3__**,int ) ;int (* CallObjectMethod ) (TYPE_3__**,int ,int ,int) ;int (* GetObjectArrayElement ) (TYPE_3__**,int ,int) ;} ;
struct TYPE_13__ {int queue_input_buffer; int get_input_buffer; scalar_t__ get_input_buffers; } ;
typedef TYPE_3__* JNIEnv ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 TYPE_11__ VAR_3 ;
 int FUNC_3 (int *,void const*,size_t) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_3__**,int ,int) ;
 int FUNC_6 (TYPE_3__**,int ,int ,int) ;
 size_t FUNC_7 (TYPE_3__**,int ) ;
 int * FUNC_8 (TYPE_3__**,int ) ;
 int FUNC_9 (TYPE_3__**,int ) ;
 int FUNC_10 (TYPE_3__**,int ,int ,int,int ,size_t,int ,int) ;
 int FUNC_11 (TYPE_3__**,int ) ;

__attribute__((used)) static int FUNC_12(mc_api *VAR_4, int VAR_5, const void *VAR_6,
                      size_t VAR_7, vlc_tick_t VAR_8, bool VAR_9)
{
    mc_api_sys *VAR_10 = VAR_4->p_sys;
    JNIEnv *VAR_11;
    uint8_t *VAR_12;
    jobject VAR_13;
    jsize VAR_14;
    jint VAR_15 = (VAR_9 ? VAR_0 : 0)
                | (VAR_6 == ((void*)0) ? VAR_1 : 0);

    FUNC_2(VAR_5 >= 0);

    FUNC_1();

    if (VAR_3.get_input_buffers)
        VAR_13 = (*VAR_11)->GetObjectArrayElement(VAR_11, VAR_10->input_buffers,
                                                 VAR_5);
    else
    {
        VAR_13 = (*VAR_11)->CallObjectMethod(VAR_11, VAR_10->codec,
                                            VAR_3.get_input_buffer, VAR_5);
        if (FUNC_0())
        {
            FUNC_4(VAR_4->p_obj, "Exception in MediaCodec.getInputBuffer");
            return VAR_2;
        }
    }
    VAR_14 = (*VAR_11)->GetDirectBufferCapacity(VAR_11, VAR_13);
    VAR_12 = (*VAR_11)->GetDirectBufferAddress(VAR_11, VAR_13);
    if (VAR_14 < 0)
    {
        FUNC_4(VAR_4->p_obj, "Java buffer has invalid size");
        (*VAR_11)->DeleteLocalRef(VAR_11, VAR_13);
        return VAR_2;
    }
    if ((size_t) VAR_14 > VAR_7)
        VAR_14 = VAR_7;
    FUNC_3(VAR_12, VAR_6, VAR_14);

    (*VAR_11)->CallVoidMethod(VAR_11, VAR_10->codec, VAR_3.queue_input_buffer,
                           VAR_5, 0, VAR_14, VAR_8, VAR_15);
    (*VAR_11)->DeleteLocalRef(VAR_11, VAR_13);
    if (FUNC_0())
    {
        FUNC_4(VAR_4->p_obj, "Exception in MediaCodec.queueInputBuffer");
        return VAR_2;
    }

    return 0;
}
