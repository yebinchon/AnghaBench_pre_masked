
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGFunction ;
typedef int Oid ;
typedef int Datum ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *,int*) ;

__attribute__((used)) static Datum
FUNC_5(PGFunction VAR_0, Datum VAR_1, Oid VAR_2)
{
 bool VAR_3;
 Oid VAR_4;

 FUNC_4(VAR_2, &VAR_4, &VAR_3);

 if (!FUNC_2(VAR_4))
  FUNC_3("output", VAR_2);

 return FUNC_0(VAR_0, FUNC_1(VAR_4, VAR_1));
}
