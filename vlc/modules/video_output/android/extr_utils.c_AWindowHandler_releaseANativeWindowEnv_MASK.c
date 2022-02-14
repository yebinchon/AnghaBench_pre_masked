
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AWindow_ID { ____Placeholder_AWindow_ID } AWindow_ID ;
struct TYPE_9__ {TYPE_1__* views; int (* pf_winRelease ) (int *) ;} ;
struct TYPE_8__ {int (* DeleteGlobalRef ) (TYPE_2__**,int *) ;} ;
struct TYPE_7__ {int * jsurface; int * p_anw; } ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ AWindowHandler ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__**,int *) ;

__attribute__((used)) static void
FUNC_3(AWindowHandler *VAR_1, JNIEnv *VAR_2,
                                       enum AWindow_ID VAR_3)
{
    FUNC_0(VAR_3 < VAR_0);

    if (VAR_1->views[VAR_3].p_anw)
    {
        VAR_1->pf_winRelease(VAR_1->views[VAR_3].p_anw);
        VAR_1->views[VAR_3].p_anw = ((void*)0);
    }

    if (VAR_1->views[VAR_3].jsurface)
    {
        (*VAR_2)->DeleteGlobalRef(VAR_2, VAR_1->views[VAR_3].jsurface);
        VAR_1->views[VAR_3].jsurface = ((void*)0);
    }
}
