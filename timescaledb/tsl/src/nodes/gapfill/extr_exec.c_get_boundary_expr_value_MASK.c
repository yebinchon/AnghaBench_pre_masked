
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_4__ {int gapfill_typid; } ;
typedef int Oid ;
typedef int Node ;
typedef TYPE_1__ GapFillState ;
typedef scalar_t__ GapFillBoundary ;
typedef int Expr ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int64
FUNC_10(GapFillState *VAR_4, GapFillBoundary VAR_5, Expr *VAR_6)
{
 Datum VAR_7;
 bool VAR_8;




 if (FUNC_4((Node *) VAR_6) != VAR_4->gapfill_typid)
 {
  Oid VAR_9 = FUNC_7(FUNC_4((Node *) VAR_6), VAR_4->gapfill_typid);

  VAR_6 = (Expr *) FUNC_9(VAR_9,
          VAR_4->gapfill_typid,
          FUNC_8(VAR_6),
          VAR_3,
          VAR_3,
          0);
 }

 VAR_7 = FUNC_6(VAR_4, VAR_6, &VAR_8);

 if (VAR_8)
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_3("invalid time_bucket_gapfill argument: %s cannot be NULL",
      VAR_5 == VAR_2 ? "start" : "finish"),
     FUNC_2(
      "You can either pass start and finish as arguments or in the WHERE clause")));

 return FUNC_5(VAR_7, VAR_4->gapfill_typid);
}
