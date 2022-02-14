
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int StringInfo ;
typedef int Oid ;
typedef int Datum ;
typedef int ArrayCompressorSerializationInfo ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

Datum
FUNC_6(StringInfo VAR_1)
{
 ArrayCompressorSerializationInfo *VAR_2;
 uint8 VAR_3;
 Oid VAR_4;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3 != 0 && VAR_3 != 1)
  FUNC_4(VAR_0, "invalid recv in array: bad bool");

 VAR_4 = FUNC_3(VAR_1);

 VAR_2 = FUNC_1(VAR_1, VAR_4);

 FUNC_0(FUNC_2(VAR_2, VAR_4));
}
