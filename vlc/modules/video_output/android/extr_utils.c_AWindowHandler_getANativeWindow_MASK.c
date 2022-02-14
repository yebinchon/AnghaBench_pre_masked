
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AWindow_ID { ____Placeholder_AWindow_ID } AWindow_ID ;
struct TYPE_7__ {TYPE_1__* views; int * (* pf_winFromSurface ) (int *,int *) ;} ;
struct TYPE_6__ {int * p_anw; int * jsurface; } ;
typedef int JNIEnv ;
typedef TYPE_2__ AWindowHandler ;
typedef int ANativeWindow ;


 int * FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,int *) ;

ANativeWindow *
FUNC_4(AWindowHandler *VAR_2, enum AWindow_ID VAR_3)
{
    FUNC_2(VAR_3 < VAR_0);

    JNIEnv *VAR_4;

    if (VAR_2->views[VAR_3].p_anw)
        return VAR_2->views[VAR_3].p_anw;

    VAR_4 = FUNC_0(VAR_2);
    if (!VAR_4)
        return ((void*)0);

    if (FUNC_1(VAR_2, VAR_4, VAR_3) != VAR_1)
        return ((void*)0);
    FUNC_2(VAR_2->views[VAR_3].jsurface != ((void*)0));

    VAR_2->views[VAR_3].p_anw = VAR_2->pf_winFromSurface(VAR_4,
                                                      VAR_2->views[VAR_3].jsurface);
    return VAR_2->views[VAR_3].p_anw;
}
