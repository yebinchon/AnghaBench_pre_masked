
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ jstring ;
typedef int jobject ;
struct TYPE_7__ {int get_integer; } ;
struct TYPE_6__ {int (* CallIntMethod ) (TYPE_1__**,int ,int ,scalar_t__) ;int (* DeleteLocalRef ) (TYPE_1__**,scalar_t__) ;} ;
typedef TYPE_1__* JNIEnv ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_2 (TYPE_1__**,int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__**,scalar_t__) ;

__attribute__((used)) static inline int FUNC_4(JNIEnv *VAR_1, jobject VAR_2, const char *VAR_3)
{
    jstring VAR_4 = FUNC_1(VAR_3);
    if (VAR_4)
    {
        int VAR_5 = (*VAR_1)->CallIntMethod(VAR_1, VAR_2, VAR_0.get_integer, VAR_4);
        (*VAR_1)->DeleteLocalRef(VAR_1, VAR_4);


        if (FUNC_0())
            return 0;
        return VAR_5;
    }
    else
        return 0;
}
