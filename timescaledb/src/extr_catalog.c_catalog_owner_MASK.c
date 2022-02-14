
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nspowner; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_namespace ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static Oid
FUNC_9(void)
{
 HeapTuple VAR_4;
 Oid VAR_5;
 Oid VAR_6 = FUNC_8(VAR_0, 0);

 VAR_4 = FUNC_4(VAR_3, FUNC_2(VAR_6));

 if (!FUNC_1(VAR_4))
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("schema with OID %u does not exist", VAR_6)));

 VAR_5 = ((Form_pg_namespace) FUNC_0(VAR_4))->nspowner;

 FUNC_3(VAR_4);

 return VAR_5;
}
