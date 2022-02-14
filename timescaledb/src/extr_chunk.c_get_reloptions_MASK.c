
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int List ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int*) ;
 int FUNC_5 (int ,char*,int ) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static List *
FUNC_7(Oid VAR_3)
{
 HeapTuple VAR_4;
 Datum VAR_5;
 bool VAR_6;
 List *VAR_7;

 VAR_4 = FUNC_3(VAR_2, FUNC_1(VAR_3));

 if (!FUNC_0(VAR_4))
  FUNC_5(VAR_1, "cache lookup failed for relation %u", VAR_3);

 VAR_5 = FUNC_4(VAR_2, VAR_4, VAR_0, &VAR_6);

 VAR_7 = FUNC_6(VAR_5);

 FUNC_2(VAR_4);

 return VAR_7;
}
