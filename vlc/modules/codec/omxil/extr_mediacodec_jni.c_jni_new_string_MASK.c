
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * jstring ;
struct TYPE_4__ {int * (* NewStringUTF ) (TYPE_1__**,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 () ;
 int * FUNC_1 (TYPE_1__**,char const*) ;

__attribute__((used)) static inline jstring FUNC_2(JNIEnv *VAR_0, const char *VAR_1)
{
    jstring VAR_2 = (*VAR_0)->NewStringUTF(VAR_0, VAR_1);
    return !FUNC_0() ? VAR_2 : ((void*)0);
}
