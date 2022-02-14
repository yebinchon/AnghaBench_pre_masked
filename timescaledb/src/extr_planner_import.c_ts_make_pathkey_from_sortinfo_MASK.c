
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int Relids ;
typedef int PlannerInfo ;
typedef int PathKey ;
typedef int Oid ;
typedef int List ;
typedef int Index ;
typedef int Expr ;
typedef int EquivalenceClass ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,...) ;
 int * FUNC_2 (int *,int *,int ,int *,int ,int ,int ,int ,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int * FUNC_5 (int *,int *,int ,int ,int) ;

PathKey *
FUNC_6(PlannerInfo *VAR_4, Expr *VAR_5, Relids VAR_6, Oid VAR_7,
         Oid VAR_8, Oid VAR_9, bool VAR_10, bool VAR_11,
         Index VAR_12, Relids VAR_13, bool VAR_14)
{
 int16 VAR_15;
 Oid VAR_16;
 List *VAR_17;
 EquivalenceClass *VAR_18;

 VAR_15 = VAR_10 ? VAR_1 : VAR_2;







 VAR_16 = FUNC_4(VAR_7, VAR_8, VAR_8, VAR_0);
 if (!FUNC_0(VAR_16))
  FUNC_1(VAR_3,
    "missing operator %d(%u,%u) in opfamily %u",
    VAR_0,
    VAR_8,
    VAR_8,
    VAR_7);
 VAR_17 = FUNC_3(VAR_16);
 if (!VAR_17)
  FUNC_1(VAR_3, "could not find opfamilies for equality operator %u", VAR_16);


 VAR_18 = FUNC_2(VAR_4,
           VAR_5,
           VAR_6,
           VAR_17,
           VAR_8,
           VAR_9,
           VAR_12,
           VAR_13,
           VAR_14);


 if (!VAR_18)
  return ((void*)0);


 return FUNC_5(VAR_4, VAR_18, VAR_7, VAR_15, VAR_11);
}
