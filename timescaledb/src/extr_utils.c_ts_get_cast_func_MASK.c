
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int castfunc; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_cast ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

Oid
FUNC_5(Oid VAR_2, Oid VAR_3)
{
 Oid VAR_4 = VAR_1;
 HeapTuple VAR_5;

 VAR_5 = FUNC_4(VAR_0, FUNC_2(VAR_2), FUNC_2(VAR_3));
 if (FUNC_1(VAR_5))
 {
  Form_pg_cast VAR_6 = (Form_pg_cast) FUNC_0(VAR_5);

  VAR_4 = VAR_6->castfunc;
  FUNC_3(VAR_5);
 }

 return VAR_4;
}
