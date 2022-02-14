
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint64 ;
typedef int StringInfo ;
typedef int Simple8bRleSerialized ;
typedef int DeltaDeltaCompressed ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;

Datum
FUNC_6(StringInfo VAR_1)
{
 uint8 VAR_2;
 uint64 VAR_3;
 uint64 VAR_4;
 Simple8bRleSerialized *VAR_5;
 Simple8bRleSerialized *VAR_6 = ((void*)0);
 DeltaDeltaCompressed *VAR_7;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 != 0 && VAR_2 != 1)
  FUNC_2(VAR_0, "invalid recv in deltadelta: bad bool");

 VAR_3 = FUNC_4(VAR_1);
 VAR_4 = FUNC_4(VAR_1);
 VAR_5 = FUNC_5(VAR_1);
 if (VAR_2)
  VAR_6 = FUNC_5(VAR_1);

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_0(VAR_7);
}
