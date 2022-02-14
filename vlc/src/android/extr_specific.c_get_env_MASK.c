
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* GetEnv ) (TYPE_2__**,void**,int ) ;scalar_t__ (* AttachCurrentThread ) (TYPE_2__**,int **,TYPE_1__*) ;} ;
struct TYPE_6__ {char* name; int * group; int version; } ;
typedef TYPE_1__ JavaVMAttachArgs ;
typedef int JNIEnv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__**,void**,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__**,int **,TYPE_1__*) ;

__attribute__((used)) static JNIEnv *FUNC_2(bool *VAR_3)
{
    JNIEnv *VAR_4;
    if ((*VAR_2)->GetEnv(VAR_2, (void **)&VAR_4, VAR_1) != VAR_0)
    {

        JavaVMAttachArgs VAR_5;

        VAR_5.version = VAR_1;
        VAR_5.name = "config_GetGenericDir";
        VAR_5.group = ((void*)0);

        if ((*VAR_2)->AttachCurrentThread(VAR_2, &VAR_4, &VAR_5) != VAR_0)
            return ((void*)0);
        *VAR_3 = 1;
    }
    else
        *VAR_3 = 0;
    return VAR_4;
}
