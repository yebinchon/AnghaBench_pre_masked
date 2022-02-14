
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* GetJavaVM ) (TYPE_2__**,TYPE_1__***) ;} ;
struct TYPE_7__ {int (* DetachCurrentThread ) (TYPE_1__**) ;} ;
typedef TYPE_1__* JavaVM ;
typedef TYPE_2__* JNIEnv ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_2__**,TYPE_1__***) ;
 int FUNC_2 (TYPE_1__**) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
    JNIEnv *VAR_1 = VAR_0;
    JavaVM *VAR_2;

    (*VAR_1)->GetJavaVM(VAR_1, &VAR_2);
    FUNC_0(VAR_2);
    (*VAR_2)->DetachCurrentThread(VAR_2);
}
