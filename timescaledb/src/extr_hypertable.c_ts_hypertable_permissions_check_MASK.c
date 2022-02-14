
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

Oid
FUNC_6(Oid VAR_2, Oid VAR_3)
{
 Oid VAR_4 = FUNC_5(VAR_2);

 if (!FUNC_4(VAR_3, VAR_4))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("must be owner of hypertable \"%s\"", FUNC_3(VAR_2))));

 return VAR_4;
}
