
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jobject ;
typedef enum AWindow_ID { ____Placeholder_AWindow_ID } AWindow_ID ;
struct TYPE_10__ {TYPE_1__* views; } ;
struct TYPE_9__ {int (* DeleteLocalRef ) (TYPE_2__**,int ) ;int (* NewGlobalRef ) (TYPE_2__**,int ) ;} ;
struct TYPE_8__ {int jsurface; } ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ AWindowHandler ;





 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__**,int ) ;
 int FUNC_3 (TYPE_2__**,int ) ;

__attribute__((used)) static int
FUNC_4(AWindowHandler *VAR_6, JNIEnv *VAR_7,
                            enum AWindow_ID VAR_8)
{
    jobject VAR_9;

    switch (VAR_8)
    {
        case 128:
            VAR_9 = FUNC_0(VAR_0, VAR_5);
            break;
        case 130:
            VAR_9 = FUNC_0(VAR_0, VAR_3);
            break;
        case 129:
            VAR_9 = FUNC_1(VAR_0, VAR_4);
            break;
    }
    if (!VAR_9)
        return VAR_1;

    VAR_6->views[VAR_8].jsurface = (*VAR_7)->NewGlobalRef(VAR_7, VAR_9);
    (*VAR_7)->DeleteLocalRef(VAR_7, VAR_9);
    return VAR_2;
}
