
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(Oid VAR_4, Oid VAR_5, Oid VAR_6)
{
 AclResult VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_1);

 if (VAR_7 != VAR_0)
  FUNC_0(VAR_3,
    (FUNC_1(VAR_2),
     FUNC_3("cannot revoke privilege while tablespace \"%s\" is attached to hypertable "
      "\"%s\"",
      FUNC_5(VAR_4),
      FUNC_4(VAR_6)),
     FUNC_2("Detach the tablespace before revoking the privilege on it.")));
}
