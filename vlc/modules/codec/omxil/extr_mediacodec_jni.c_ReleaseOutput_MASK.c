
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int codec; } ;
typedef TYPE_1__ mc_api_sys ;
struct TYPE_8__ {int p_obj; TYPE_1__* p_sys; } ;
typedef TYPE_2__ mc_api ;
struct TYPE_10__ {int release_output_buffer; } ;
struct TYPE_9__ {int (* CallVoidMethod ) (TYPE_3__**,int ,int ,int,int) ;} ;
typedef TYPE_3__* JNIEnv ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 TYPE_5__ VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_3__**,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_5(mc_api *VAR_2, int VAR_3, bool VAR_4)
{
    mc_api_sys *VAR_5 = VAR_2->p_sys;
    JNIEnv *VAR_6;

    FUNC_2(VAR_3 >= 0);

    FUNC_1();

    (*VAR_6)->CallVoidMethod(VAR_6, VAR_5->codec, VAR_1.release_output_buffer,
                           VAR_3, VAR_4);
    if (FUNC_0())
    {
        FUNC_3(VAR_2->p_obj, "Exception in MediaCodec.releaseOutputBuffer");
        return VAR_0;
    }
    return 0;
}
