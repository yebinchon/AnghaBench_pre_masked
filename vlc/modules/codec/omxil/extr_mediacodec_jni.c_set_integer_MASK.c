
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ jstring ;
typedef int jobject ;
struct TYPE_7__ {int set_integer; } ;
struct TYPE_6__ {int (* DeleteLocalRef ) (TYPE_1__**,scalar_t__) ;int (* CallVoidMethod ) (TYPE_1__**,int ,int ,scalar_t__,int) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ FUNC_0 (char const*) ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (TYPE_1__**,int ,int ,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__**,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(JNIEnv *VAR_1, jobject VAR_2, const char *VAR_3,
                               int VAR_4)
{
    jstring VAR_5 = FUNC_0(VAR_3);
    if (VAR_5)
    {
        (*VAR_1)->CallVoidMethod(VAR_1, VAR_2, VAR_0.set_integer, VAR_5, VAR_4);
        (*VAR_1)->DeleteLocalRef(VAR_1, VAR_5);
    }
}
