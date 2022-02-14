
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_7__ {int codec; } ;
typedef TYPE_1__ mc_api_sys ;
struct TYPE_8__ {int p_obj; TYPE_1__* p_sys; } ;
typedef TYPE_2__ mc_api ;
struct TYPE_10__ {int dequeue_input_buffer; } ;
struct TYPE_9__ {int (* CallIntMethod ) (TYPE_3__**,int ,int ,int ) ;} ;
typedef TYPE_3__* JNIEnv ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__**,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(mc_api *VAR_3, vlc_tick_t VAR_4)
{
    mc_api_sys *VAR_5 = VAR_3->p_sys;
    JNIEnv *VAR_6;
    int VAR_7;

    FUNC_1();

    VAR_7 = (*VAR_6)->CallIntMethod(VAR_6, VAR_5->codec,
                                    VAR_2.dequeue_input_buffer, VAR_4);
    if (FUNC_0())
    {
        FUNC_2(VAR_3->p_obj, "Exception occurred in MediaCodec.dequeueInputBuffer");
        return VAR_0;
    }
    if (VAR_7 >= 0)
        return VAR_7;
    else
        return VAR_1;

}
