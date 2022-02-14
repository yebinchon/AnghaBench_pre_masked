
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int schema_name; } ;
struct TYPE_6__ {TYPE_1__ fd; } ;
typedef TYPE_2__ Hypertable ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (TYPE_2__*) ;

int
FUNC_2(Hypertable *VAR_0, const char *VAR_1)
{
 FUNC_0(&VAR_0->fd.schema_name, VAR_1);

 return FUNC_1(VAR_0);
}
