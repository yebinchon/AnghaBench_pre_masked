
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ jobject ;
typedef enum AWindow_ID { ____Placeholder_AWindow_ID } AWindow_ID ;
struct TYPE_6__ {TYPE_1__* views; } ;
struct TYPE_5__ {scalar_t__ jsurface; } ;
typedef TYPE_2__ AWindowHandler ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

jobject
FUNC_2(AWindowHandler *VAR_1, enum AWindow_ID VAR_2)
{
    FUNC_1(VAR_2 < VAR_0);

    if (VAR_1->views[VAR_2].jsurface)
        return VAR_1->views[VAR_2].jsurface;

    FUNC_0(VAR_1, VAR_2);
    return VAR_1->views[VAR_2].jsurface;
}
