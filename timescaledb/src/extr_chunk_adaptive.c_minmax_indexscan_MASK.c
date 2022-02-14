
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relation ;
typedef int MinMaxResult ;
typedef int IndexScanDesc ;
typedef int HeapTuple ;
typedef int Datum ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *,int ,int *,int ) ;

__attribute__((used)) static MinMaxResult
FUNC_8(Relation VAR_4, Relation VAR_5, AttrNumber VAR_6, Datum VAR_7[2])
{
 IndexScanDesc VAR_8 = FUNC_4(VAR_4, VAR_5, FUNC_0(), 0, 0);
 HeapTuple VAR_9;
 bool VAR_10;
 bool VAR_11[2] = { 1, 1 };
 int VAR_12 = 0;

 VAR_9 = FUNC_6(VAR_8, VAR_0);

 if (FUNC_1(VAR_9))
 {
  VAR_7[VAR_12] = FUNC_3(VAR_9, VAR_6, FUNC_2(VAR_4), &VAR_10);
  VAR_11[VAR_12++] = 0;
 }

 FUNC_7(VAR_8, ((void*)0), 0, ((void*)0), 0);
 VAR_9 = FUNC_6(VAR_8, VAR_1);

 if (FUNC_1(VAR_9))
 {
  VAR_7[VAR_12] = FUNC_3(VAR_9, VAR_6, FUNC_2(VAR_4), &VAR_10);
  VAR_11[VAR_12++] = 0;
 }

 FUNC_5(VAR_8);

 return (VAR_11[0] || VAR_11[1]) ? VAR_3 : VAR_2;
}
