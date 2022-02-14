
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
struct TYPE_10__ {int flush; } ;
struct TYPE_9__ {int (* CallVoidMethod ) (TYPE_3__**,int ,int ) ;} ;
typedef TYPE_3__* JNIEnv ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__**,int ,int ) ;

__attribute__((used)) static int FUNC_4(mc_api *VAR_2)
{
    mc_api_sys *VAR_3 = VAR_2->p_sys;
    JNIEnv *VAR_4 = ((void*)0);

    FUNC_1();

    (*VAR_4)->CallVoidMethod(VAR_4, VAR_3->codec, VAR_1.flush);
    if (FUNC_0())
    {
        FUNC_2(VAR_2->p_obj, "Exception occurred in MediaCodec.flush");
        return VAR_0;
    }
    return 0;
}
