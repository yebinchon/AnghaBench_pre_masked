
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ gt_opr; scalar_t__ lt_opr; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int StringInfo ;
typedef scalar_t__ Oid ;
typedef int Node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int*) ;
 char* FUNC_7 (scalar_t__) ;
 TYPE_1__* FUNC_8 (scalar_t__,int) ;
 char* FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(StringInfo VAR_4, Node *VAR_5, Oid VAR_6, Oid VAR_7,
        bool VAR_8)
{
 Oid VAR_9 = FUNC_4(VAR_5);
 bool VAR_10 = 0;
 TypeCacheEntry *VAR_11;

 VAR_11 = FUNC_8(VAR_9, VAR_3 | VAR_2);






 if (FUNC_0(VAR_7) && VAR_7 != VAR_0)
 {
  char *VAR_12 = FUNC_5(VAR_7);

  if (VAR_12 == ((void*)0))
   FUNC_3(VAR_1, "cache lookup failed for collation %u", VAR_7);
  FUNC_1(VAR_4, " COLLATE %s", FUNC_9(VAR_12));
 }


 if (VAR_6 == VAR_11->gt_opr)
 {
  FUNC_2(VAR_4, " DESC");
  VAR_10 = 1;
 }
 else if (VAR_6 != VAR_11->lt_opr)
 {
  char *VAR_13 = FUNC_7(VAR_6);

  if (VAR_13 == ((void*)0))
   FUNC_3(VAR_1, "cache lookup failed for operator %u", VAR_6);
  FUNC_1(VAR_4, " USING %s", VAR_13);

  (void) FUNC_6(VAR_6, &VAR_10);
 }


 if (VAR_8 && !VAR_10)
 {
  FUNC_2(VAR_4, " NULLS FIRST");
 }
 else if (!VAR_8 && VAR_10)
 {
  FUNC_2(VAR_4, " NULLS LAST");
 }
}
