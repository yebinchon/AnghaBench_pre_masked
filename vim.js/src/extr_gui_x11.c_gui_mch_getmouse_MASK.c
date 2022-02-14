
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int Window ;
struct TYPE_2__ {scalar_t__ wid; int dpy; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int *,int *,int*,int*,int*,int*,unsigned int*) ;
 TYPE_1__ VAR_0 ;

void
FUNC_1(int *VAR_1, int *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;
    Window VAR_7, VAR_8;
    unsigned int VAR_9;

    if (VAR_0.wid && FUNC_0(VAR_0.dpy, VAR_0.wid, &VAR_7, &VAR_8,
      &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_9)) {
 *VAR_1 = VAR_5;
 *VAR_2 = VAR_6;
    } else {
 *VAR_1 = -1;
 *VAR_2 = -1;
    }
}
