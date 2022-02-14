
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_7__ {int buffer_info; int codec; } ;
typedef TYPE_1__ mc_api_sys ;
struct TYPE_8__ {int p_obj; TYPE_1__* p_sys; } ;
typedef TYPE_2__ mc_api ;
struct TYPE_10__ {int dequeue_output_buffer; } ;
struct TYPE_9__ {int (* CallIntMethod ) (TYPE_3__**,int ,int ,int ,int ) ;} ;
typedef TYPE_3__* JNIEnv ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__**,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(mc_api *VAR_7, vlc_tick_t VAR_8)
{
    mc_api_sys *VAR_9 = VAR_7->p_sys;
    JNIEnv *VAR_10;
    int VAR_11;

    FUNC_1();
    VAR_11 = (*VAR_10)->CallIntMethod(VAR_10, VAR_9->codec,
                                    VAR_6.dequeue_output_buffer,
                                    VAR_9->buffer_info, VAR_8);
    if (FUNC_0())
    {
        FUNC_2(VAR_7->p_obj, "Exception in MediaCodec.dequeueOutputBuffer");
        return VAR_2;
    }
    if (VAR_11 >= 0)
        return VAR_11;
    else if (VAR_11 == VAR_1)
        return VAR_4;
    else if (VAR_11 == VAR_0)
        return VAR_3;
    else
        return VAR_5;
}
