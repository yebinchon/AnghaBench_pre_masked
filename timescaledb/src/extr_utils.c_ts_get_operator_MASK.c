
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int HeapTuple ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;

Oid
FUNC_6(const char *VAR_2, Oid VAR_3, Oid VAR_4, Oid VAR_5)
{
 HeapTuple VAR_6;
 Oid VAR_7 = VAR_0;

 VAR_6 = FUNC_5(VAR_1,
        FUNC_3(VAR_2),
        FUNC_2(VAR_4),
        FUNC_2(VAR_5),
        FUNC_2(VAR_3));
 if (FUNC_1(VAR_6))
 {
  VAR_7 = FUNC_0(VAR_6);
  FUNC_4(VAR_6);
 }

 return VAR_7;
}
