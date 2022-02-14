
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* connect ) (TYPE_2__*,char const*,char const*,int) ;} ;
typedef TYPE_2__ Connection ;


 int FUNC_0 (TYPE_2__*,char const*,char const*,int) ;

int
FUNC_1(Connection *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{




 return VAR_0->ops->connect(VAR_0, VAR_1, VAR_2, VAR_3);
}
