
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pronargs; scalar_t__ prorettype; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* Form_pg_proc ;



__attribute__((used)) static bool
FUNC_0(Form_pg_proc VAR_0, void *VAR_1)
{
 Oid *VAR_2 = VAR_1;

 return VAR_0->pronargs == 0 && VAR_0->prorettype == *VAR_2;
}
