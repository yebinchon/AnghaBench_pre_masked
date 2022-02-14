
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct TYPE_21__ {scalar_t__ expr; } ;
typedef TYPE_4__ TargetEntry ;
struct TYPE_18__ {int * plan; } ;
struct TYPE_19__ {TYPE_1__ ps; } ;
struct TYPE_20__ {TYPE_2__ ss; } ;
struct TYPE_24__ {int sort_options; TYPE_3__ csstate; } ;
struct TYPE_23__ {scalar_t__ verbose; int * rtable; int deparse_cxt; } ;
struct TYPE_22__ {int data; } ;
struct TYPE_17__ {int custom_scan_tlist; } ;
typedef TYPE_5__ StringInfoData ;
typedef int Plan ;
typedef int Node ;
typedef int List ;
typedef TYPE_6__ ExplainState ;
typedef TYPE_7__ ChunkAppendState ;
typedef int AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,TYPE_6__*) ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_5__*,char*) ;
 TYPE_14__* FUNC_2 (int ,int *) ;
 char* FUNC_3 (int *,int *,int,int) ;
 int FUNC_4 (int ,char*,int ) ;
 TYPE_4__* FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_5__*) ;
 int * FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (TYPE_5__*,int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_18(ChunkAppendState *VAR_3, List *VAR_4, ExplainState *VAR_5)
{
 Plan *VAR_6 = VAR_3->csstate.ss.ps.plan;
 List *VAR_7;
 List *VAR_8 = VAR_2;
 StringInfoData VAR_9;
 bool VAR_10;
 int VAR_11;
 int VAR_12 = FUNC_10(FUNC_9(VAR_3->sort_options));
 List *VAR_13 = FUNC_9(VAR_3->sort_options);
 List *VAR_14 = FUNC_12(VAR_3->sort_options);
 List *VAR_15 = FUNC_13(VAR_3->sort_options);
 List *VAR_16 = FUNC_8(VAR_3->sort_options);

 if (VAR_12 <= 0)
  return;

 FUNC_6(&VAR_9);


 VAR_7 = FUNC_16(VAR_5->deparse_cxt, (Node *) VAR_3, VAR_4);
 VAR_10 = (FUNC_10(VAR_5->rtable) > 1 || VAR_5->verbose);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
 {

  AttrNumber VAR_17 = FUNC_11(VAR_13, VAR_11);
  TargetEntry *VAR_18 =
   FUNC_5(FUNC_2(VAR_0, VAR_6)->custom_scan_tlist, VAR_17);
  char *VAR_19;

  if (!VAR_18)
   FUNC_4(VAR_1, "no tlist entry for key %d", VAR_17);

  VAR_19 = FUNC_3((Node *) VAR_18->expr, VAR_7, VAR_10, 1);
  FUNC_15(&VAR_9);
  FUNC_1(&VAR_9, VAR_19);

  if (VAR_14 != VAR_2)
   FUNC_17(&VAR_9,
           (Node *) VAR_18->expr,
           FUNC_11(VAR_14, VAR_11),
           FUNC_11(VAR_15, VAR_11),
           FUNC_11(VAR_16, VAR_11));

  VAR_8 = FUNC_7(VAR_8, FUNC_14(VAR_9.data));
 }

 FUNC_0("Order", VAR_8, VAR_5);
}
