
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {char const* (* errmsg ) (TYPE_2__*) ;} ;
typedef TYPE_2__ Connection ;


 char const* FUNC_0 (TYPE_2__*) ;

const char *
FUNC_1(Connection *VAR_0)
{
 if (((void*)0) != VAR_0->ops->errmsg)
  return VAR_0->ops->errmsg(VAR_0);

 return "unknown connection error";
}
