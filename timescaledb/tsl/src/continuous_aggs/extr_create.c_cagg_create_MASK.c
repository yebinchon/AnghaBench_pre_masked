
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_32__ {int is_default; int parsed; } ;
typedef TYPE_1__ WithClauseResult ;
struct TYPE_33__ {TYPE_3__* view; int * options; int aliases; } ;
typedef TYPE_2__ ViewStmt ;
struct TYPE_37__ {int htid; int htoid; int bucket_width; int htpartcoltype; } ;
struct TYPE_36__ {int matcollist; } ;
struct TYPE_35__ {int rtable; struct TYPE_35__* groupClause; } ;
struct TYPE_34__ {int relname; int schemaname; } ;
typedef TYPE_3__ RangeVar ;
typedef int RangeTblEntry ;
typedef TYPE_4__ Query ;
typedef int Oid ;
typedef int ObjectAddress ;
typedef TYPE_5__ MatTableColumnInfo ;
typedef int Interval ;
typedef int FinalizeQueryInfo ;
typedef int CatalogSecurityContext ;
typedef TYPE_6__ CAggTimebucketInfo ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_4__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 TYPE_4__* FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (int *,TYPE_4__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (int ,TYPE_1__*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,TYPE_1__*) ;
 int * FUNC_16 (int ,int ) ;
 TYPE_3__* FUNC_17 (int ,int ,int) ;
 int FUNC_18 (TYPE_5__*,int *,int) ;
 int FUNC_19 (TYPE_5__*,int ,TYPE_3__*,TYPE_6__*,int,int *) ;
 TYPE_4__* FUNC_20 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_21 (TYPE_5__*,int ,int ,TYPE_4__*) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (char*,int,char*,int) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int ,int ) ;
 int FUNC_29 (int,int ,int *) ;

__attribute__((used)) static void
FUNC_30(ViewStmt *VAR_8, Query *VAR_9, CAggTimebucketInfo *VAR_10,
   WithClauseResult *VAR_11)
{
 ObjectAddress VAR_12;
 char VAR_13[VAR_6];
 MatTableColumnInfo VAR_14;
 FinalizeQueryInfo VAR_15;
 CatalogSecurityContext VAR_16;
 bool VAR_17;

 Query *VAR_18;
 Query *VAR_19;
 Query *VAR_20;
 RangeTblEntry *VAR_21;
 Oid VAR_22;
 RangeVar *VAR_23 = ((void*)0), *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);
 int32 VAR_26;
 int32 VAR_27;
 char VAR_28[VAR_6];
 int VAR_29;
 Interval *VAR_30 =
  FUNC_0(VAR_11[VAR_1].parsed);
 int64 VAR_31 = FUNC_15(VAR_10->htpartcoltype,
          VAR_10->bucket_width,
          VAR_11);
 int64 VAR_32 = FUNC_13(VAR_10->htpartcoltype,
                VAR_11,
                VAR_10->bucket_width);



 FUNC_12(VAR_9, VAR_8->aliases);
 FUNC_21(&VAR_14, VAR_7, VAR_7, FUNC_4(VAR_9->groupClause));
 FUNC_11(&VAR_15, VAR_9, &VAR_14);




 VAR_8->options = ((void*)0);




 VAR_21 = FUNC_16(VAR_9->rtable, 0);
 FUNC_18(&VAR_14, VAR_21, VAR_10->htid);


 FUNC_24(FUNC_25(), &VAR_16);
 VAR_26 = FUNC_28(FUNC_26(), VAR_4);
 FUNC_27(&VAR_16);
 FUNC_1(VAR_13, "_materialized_hypertable_%d", VAR_26);
 VAR_24 = FUNC_17(FUNC_22(VAR_5), FUNC_22(VAR_13), -1);
 VAR_17 = VAR_11[VAR_0].is_default;
 FUNC_19(&VAR_14,
             VAR_26,
             VAR_24,
             VAR_10,
             VAR_17,
             &VAR_12);



 VAR_18 =
  FUNC_10(&VAR_15, VAR_14.matcollist, &VAR_12);
 FUNC_6(VAR_18, VAR_8->view);



 VAR_19 = FUNC_20(&VAR_14, VAR_9);

 FUNC_1(VAR_13, "_partial_view_%d", VAR_26);
 VAR_23 = FUNC_17(FUNC_22(VAR_5), FUNC_22(VAR_13), -1);
 FUNC_6(VAR_19, VAR_23);





 VAR_20 = FUNC_4(VAR_9);
 FUNC_1(VAR_13, "_direct_view_%d", VAR_26);
 VAR_25 = FUNC_17(FUNC_22(VAR_5), FUNC_22(VAR_13), -1);
 FUNC_6(VAR_20, VAR_25);


 VAR_27 =
  FUNC_29(VAR_10->htid, VAR_10->bucket_width, VAR_30);


 VAR_22 = FUNC_2(VAR_8->view);
 FUNC_5(VAR_26,
        VAR_10->htid,
        FUNC_14(VAR_22),
        VAR_8->view->relname,
        VAR_23->schemaname,
        VAR_23->relname,
        VAR_10->bucket_width,
        VAR_31,
        VAR_32,
        VAR_27,
        VAR_25->schemaname,
        VAR_25->relname);


 VAR_29 = FUNC_23(VAR_28, VAR_6, "%d", VAR_10->htid);
 if (VAR_29 < 0 || VAR_29 >= VAR_6)
  FUNC_7(VAR_3,
    (FUNC_8(VAR_2),
     FUNC_9("bad argument to continuous aggregate trigger")));
 FUNC_3(VAR_10->htoid, VAR_28);

 return;
}
