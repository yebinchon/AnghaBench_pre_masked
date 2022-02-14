
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vlc_va_t ;
struct TYPE_6__ {int (* close ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(vlc_va_t *VAR_0)
{
    if (VAR_0->ops->close != ((void*)0))
        VAR_0->ops->close(VAR_0);
    FUNC_1(VAR_0);
}
