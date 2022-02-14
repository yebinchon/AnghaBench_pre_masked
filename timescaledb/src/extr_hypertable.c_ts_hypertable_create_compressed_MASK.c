
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int target_size_bytes; int func_name; int func_schema; int func; } ;
typedef int Relation ;
typedef int Oid ;
typedef int NameData ;
typedef TYPE_1__ ChunkSizingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int *,int *,int *,int *,int *,int *,int ,int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int *,int ,int) ;

bool
FUNC_20(Oid VAR_5, int32 VAR_6)
{
 Oid VAR_7 = FUNC_0();
 Oid VAR_8 = FUNC_8(VAR_5);
 NameData VAR_9, VAR_10, VAR_11;
 ChunkSizingInfo *VAR_12;
 Relation VAR_13;

 VAR_13 = FUNC_11(VAR_5, VAR_0);




 FUNC_17(VAR_5, VAR_7);
 if (FUNC_18(VAR_5))
 {
  FUNC_2(VAR_2,
    (FUNC_3(VAR_1),
     FUNC_4("table \"%s\" is already a hypertable", FUNC_6(VAR_5))));
  FUNC_10(VAR_13, VAR_0);
 }

 FUNC_14(&VAR_9, FUNC_5(FUNC_7(VAR_5)));
 FUNC_14(&VAR_10, FUNC_6(VAR_5));




 VAR_12 = FUNC_16(VAR_5);
 FUNC_15(VAR_12->func, VAR_12);


 FUNC_14(&VAR_9, FUNC_5(FUNC_7(VAR_5)));
 FUNC_14(&VAR_10, FUNC_6(VAR_5));
 FUNC_14(&VAR_11, VAR_3);


 FUNC_12(VAR_6,
       &VAR_9,
       &VAR_10,
       &VAR_11,
       ((void*)0),
       &VAR_12->func_schema,
       &VAR_12->func_name,
       VAR_12->target_size_bytes,
       0 ,
       1);




 if (FUNC_1(VAR_8))
 {
  NameData VAR_14;

  FUNC_14(&VAR_14, FUNC_9(VAR_8));
  FUNC_19(&VAR_14, VAR_5, 0);
 }

 FUNC_13(VAR_5);

 FUNC_10(VAR_13, VAR_4);
 return 1;
}
