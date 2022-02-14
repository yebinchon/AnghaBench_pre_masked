
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int schema_name; } ;
struct TYPE_4__ {TYPE_3__ fd; } ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,char const*) ;

bool
FUNC_2(Chunk *VAR_0, const char *VAR_1)
{
 FUNC_1(&VAR_0->fd.schema_name, VAR_1);

 return FUNC_0(&VAR_0->fd);
}
