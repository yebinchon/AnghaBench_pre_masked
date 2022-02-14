
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* close ) (TYPE_2__*) ;} ;
typedef TYPE_2__ Connection ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(Connection *VAR_0)
{
 if (((void*)0) != VAR_0->ops)
  VAR_0->ops->close(VAR_0);
}
