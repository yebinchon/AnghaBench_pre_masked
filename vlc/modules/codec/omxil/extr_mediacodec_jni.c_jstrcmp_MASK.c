
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ jsize ;
typedef int jobject ;
struct TYPE_6__ {scalar_t__ (* GetStringUTFLength ) (TYPE_1__**,int ) ;char* (* GetStringUTFChars ) (TYPE_1__**,int ,int *) ;int (* ReleaseStringUTFChars ) (TYPE_1__**,int ,char const*) ;} ;
typedef TYPE_1__* JNIEnv ;


 int FUNC_0 (char const*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int ) ;
 char* FUNC_3 (TYPE_1__**,int ,int *) ;
 int FUNC_4 (TYPE_1__**,int ,char const*) ;

__attribute__((used)) static int FUNC_5(JNIEnv* VAR_0, jobject VAR_1, const char* VAR_2)
{
    jsize VAR_3 = (*VAR_0)->GetStringUTFLength(VAR_0, VAR_1);
    if (VAR_3 != (jsize) FUNC_1(VAR_2))
        return -1;
    const char *VAR_4 = (*VAR_0)->GetStringUTFChars(VAR_0, VAR_1, ((void*)0));
    int VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
    (*VAR_0)->ReleaseStringUTFChars(VAR_0, VAR_1, VAR_4);
    return VAR_5;
}
