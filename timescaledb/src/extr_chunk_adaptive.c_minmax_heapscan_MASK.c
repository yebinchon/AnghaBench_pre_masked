
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmp_proc_finfo; int cmp_proc; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int Relation ;
typedef int Oid ;
typedef int MinMaxResult ;
typedef int * HeapTuple ;
typedef int HeapScanDesc ;
typedef int Datum ;
typedef int AttrNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,int*) ;
 int * FUNC_9 (int ,int ) ;
 TYPE_1__* FUNC_10 (int ,int) ;

__attribute__((used)) static MinMaxResult
FUNC_11(Relation VAR_6, Oid VAR_7, AttrNumber VAR_8, Datum VAR_9[2])
{
 HeapScanDesc VAR_10;
 HeapTuple VAR_11;
 TypeCacheEntry *VAR_12;
 bool VAR_13[2] = { 1, 1 };


 VAR_12 = FUNC_10(VAR_7, VAR_4 | VAR_5);

 if (((void*)0) == VAR_12 || !FUNC_3(VAR_12->cmp_proc))
  FUNC_5(VAR_0, "no comparison function for type %u", VAR_7);

 VAR_10 = FUNC_6(VAR_6, FUNC_2(), 0, ((void*)0));

 while ((VAR_11 = FUNC_9(VAR_10, VAR_1)) != ((void*)0))
 {
  bool VAR_14;
  Datum VAR_15 = FUNC_8(VAR_11, VAR_8, FUNC_4(VAR_6), &VAR_14);

  if (VAR_14)
   continue;


  if (VAR_13[0] || FUNC_0(FUNC_1(&VAR_12->cmp_proc_finfo, VAR_15, VAR_9[0])) < 0)
  {
   VAR_13[0] = 0;
   VAR_9[0] = VAR_15;
  }


  if (VAR_13[1] || FUNC_0(FUNC_1(&VAR_12->cmp_proc_finfo, VAR_15, VAR_9[1])) > 0)
  {
   VAR_13[1] = 0;
   VAR_9[1] = VAR_15;
  }
 }

 FUNC_7(VAR_10);

 return (VAR_13[0] || VAR_13[1]) ? VAR_3 : VAR_2;
}
