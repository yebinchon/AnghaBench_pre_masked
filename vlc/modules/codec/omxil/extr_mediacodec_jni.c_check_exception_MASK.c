
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* ExceptionClear ) (TYPE_1__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_1__**) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_1__**) ;

__attribute__((used)) static inline bool FUNC_2(JNIEnv *VAR_0)
{
    if ((*VAR_0)->ExceptionCheck(VAR_0))
    {
        (*VAR_0)->ExceptionClear(VAR_0);
        return 1;
    }
    else
        return 0;
}
