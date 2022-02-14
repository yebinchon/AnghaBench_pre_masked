
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int values; } ;
typedef TYPE_3__ oidvector ;
typedef int int32 ;
typedef int bits16 ;
struct TYPE_15__ {int rd_indoption; int rd_indcollation; TYPE_2__* rd_rel; TYPE_1__* rd_index; int rd_indextuple; } ;
struct TYPE_13__ {int relam; } ;
struct TYPE_12__ {scalar_t__ indisprimary; } ;
typedef TYPE_4__* Relation ;
typedef int Oid ;
typedef int List ;
typedef int IndexInfo ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ,int*) ;
 char* FUNC_9 (int ,int ,int ) ;
 int * FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*,char const*,int ,int ,int *,int *,int ,int ,int ,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_15 (int ,TYPE_4__*,TYPE_4__*) ;

__attribute__((used)) static Oid
FUNC_16(int32 VAR_8, Relation VAR_9,
           Relation VAR_10, IndexInfo *VAR_11, bool VAR_12,
           Oid VAR_13)
{
 Oid VAR_14 = VAR_6;
 const char *VAR_15;
 HeapTuple VAR_16;
 bool VAR_17;
 Datum VAR_18;
 Datum VAR_19;
 oidvector *VAR_20;
 List *VAR_21 = FUNC_10(VAR_9);
 Oid VAR_22;
 bits16 VAR_23 = 0;

 VAR_16 = FUNC_7(VAR_7, FUNC_3(FUNC_5(VAR_9)));

 if (!FUNC_2(VAR_16))
  FUNC_11(VAR_2,
    "cache lookup failed for index relation %u",
    FUNC_5(VAR_9));

 VAR_18 = FUNC_8(VAR_7, VAR_16, VAR_0, &VAR_17);

 VAR_19 = FUNC_8(VAR_3,
          VAR_9->rd_indextuple,
          VAR_1,
          &VAR_17);
 FUNC_0(!VAR_17);
 VAR_20 = (oidvector *) FUNC_1(VAR_19);

 VAR_15 = FUNC_9(FUNC_12(FUNC_5(VAR_10)),
          FUNC_12(FUNC_5(VAR_9)),
          FUNC_13(FUNC_5(VAR_10)));
 if (FUNC_4(VAR_13))
  VAR_22 = VAR_13;
 else
  VAR_22 = FUNC_15(VAR_8, VAR_9, VAR_10);


 if (VAR_12)
  VAR_23 |= VAR_4;
 if (VAR_9->rd_index->indisprimary)
  VAR_23 |= VAR_5;

 VAR_14 = FUNC_14(VAR_10,
             VAR_15,
             VAR_6,
             VAR_6,
             VAR_11,
             VAR_21,
             VAR_9->rd_rel->relam,
             VAR_22,
             VAR_9->rd_indcollation,
             VAR_20->values,
             VAR_9->rd_indoption,
             VAR_18,
             VAR_23,
             0,

             0,
             0);

 FUNC_6(VAR_16);

 return VAR_14;
}
