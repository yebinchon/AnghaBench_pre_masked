
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* set_timeout ) (TYPE_2__*,unsigned long) ;} ;
typedef TYPE_2__ Connection ;


 int FUNC_0 (TYPE_2__*,unsigned long) ;

int
FUNC_1(Connection *VAR_0, unsigned long VAR_1)
{
 if (((void*)0) != VAR_0->ops->set_timeout)
  return VAR_0->ops->set_timeout(VAR_0, VAR_1);

 return -1;
}
