
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
typedef TYPE_2__ vlc_logger_t ;
struct TYPE_5__ {int (* destroy ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(vlc_logger_t *VAR_0)
{
    VAR_0->ops->destroy(VAR_0);
}
