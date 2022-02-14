
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int Tablespaces ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_2__ Hypertable ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

bool
FUNC_2(Hypertable *VAR_0, Oid VAR_1)
{
 Tablespaces *VAR_2 = FUNC_0(VAR_0->fd.id);

 return FUNC_1(VAR_2, VAR_1);
}
