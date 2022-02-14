
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {scalar_t__ (* GetEnv ) (TYPE_2__**,void**,int ) ;scalar_t__ (* AttachCurrentThread ) (TYPE_2__**,int **,TYPE_1__*) ;int (* DetachCurrentThread ) (TYPE_2__**) ;} ;
struct TYPE_9__ {char const* name; int * group; int version; } ;
typedef TYPE_1__ JavaVMAttachArgs ;
typedef TYPE_2__* JavaVM ;
typedef int JNIEnv ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__**,void**,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__**,int **,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__**) ;
 TYPE_2__** FUNC_7 (int *,char*) ;

__attribute__((used)) static JNIEnv *
FUNC_8(vlc_object_t *VAR_5, JavaVM *VAR_6, const char *VAR_7)
{
    FUNC_0((VAR_5 && !VAR_6) || (!VAR_5 && VAR_6));

    JNIEnv *VAR_8;

    FUNC_2(&VAR_4, VAR_3);
    VAR_8 = FUNC_1(VAR_2);
    if (VAR_8 == ((void*)0))
    {
        if (!VAR_6)
            VAR_6 = FUNC_7(VAR_5, "android-jvm");

        if (!VAR_6)
            return ((void*)0);




        if ((*VAR_6)->GetEnv(VAR_6, (void **)&VAR_8, VAR_1) != VAR_0)
        {

            JavaVMAttachArgs VAR_9;

            VAR_9.version = VAR_1;
            VAR_9.name = VAR_7;
            VAR_9.group = ((void*)0);

            if ((*VAR_6)->AttachCurrentThread(VAR_6, &VAR_8, &VAR_9) != VAR_0)
                return ((void*)0);


            if (FUNC_3(VAR_2, VAR_8) != 0)
            {
                (*VAR_6)->DetachCurrentThread(VAR_6);
                return ((void*)0);
            }
        }
    }

    return VAR_8;
}
