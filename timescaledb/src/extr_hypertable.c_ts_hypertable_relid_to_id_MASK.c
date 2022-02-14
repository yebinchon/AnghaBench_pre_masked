
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ fd; } ;
typedef int Oid ;
typedef TYPE_2__ Hypertable ;
typedef int Cache ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;

int32
FUNC_3(Oid VAR_0)
{
 Cache *VAR_1 = FUNC_2();
 Hypertable *VAR_2 = FUNC_1(VAR_1, VAR_0);
 int VAR_3 = (VAR_2 == ((void*)0)) ? -1 : VAR_2->fd.id;

 FUNC_0(VAR_1);

 return VAR_3;
}
