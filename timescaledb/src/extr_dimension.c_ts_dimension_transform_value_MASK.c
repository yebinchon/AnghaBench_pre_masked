
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ rettype; } ;
struct TYPE_9__ {TYPE_2__ partfunc; } ;
struct TYPE_6__ {scalar_t__ column_type; } ;
struct TYPE_8__ {TYPE_1__ fd; TYPE_4__* partitioning; } ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ Dimension ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;

Datum
FUNC_1(Dimension *VAR_1, Datum VAR_2, Oid VAR_3, Oid *VAR_4)
{
 if (((void*)0) != VAR_1->partitioning)
  VAR_2 = FUNC_0(VAR_1->partitioning, VAR_2);

 if (((void*)0) != VAR_4)
 {
  if (((void*)0) != VAR_1->partitioning)
   *VAR_4 = VAR_1->partitioning->partfunc.rettype;
  else if (VAR_3 != VAR_0)
   *VAR_4 = VAR_3;
  else
   *VAR_4 = VAR_1->fd.column_type;
 }

 return VAR_2;
}
