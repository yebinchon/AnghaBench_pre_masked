
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p_jvm; } ;
typedef int JNIEnv ;
typedef TYPE_1__ AWindowHandler ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ,char*) ;
 int VAR_3 ;

int
FUNC_2(AWindowHandler *VAR_4, int VAR_5)
{
    JNIEnv *VAR_6 = FUNC_1(((void*)0), VAR_4->p_jvm, "SurfaceTexture");
    if (!VAR_6)
        return VAR_1;

    return FUNC_0(VAR_0, VAR_3, VAR_5) ?
           VAR_2 : VAR_1;
}
