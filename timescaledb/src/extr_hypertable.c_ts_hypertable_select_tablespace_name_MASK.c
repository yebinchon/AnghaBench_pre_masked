
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tablespace_name; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef TYPE_2__ Tablespace ;
typedef int Hypertable ;
typedef int Chunk ;


 char* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *,int *) ;

char *
FUNC_2(Hypertable *VAR_0, Chunk *VAR_1)
{
 Tablespace *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (((void*)0) == VAR_2)
  return ((void*)0);

 return FUNC_0(VAR_2->fd.tablespace_name);
}
