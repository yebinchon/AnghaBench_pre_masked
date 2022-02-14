
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_4__ {char const* colname; } ;
typedef int Oid ;
typedef int NameData ;
typedef int DimensionInfo ;
typedef TYPE_1__ ChunkSizingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char const*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int * FUNC_6 (int ,int *,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int,int *,int *,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(int32 VAR_4, Oid VAR_5, const char *VAR_6,
        int64 VAR_7)
{
 bool VAR_8;
 int VAR_9 = 0;
 NameData VAR_10;
 DimensionInfo *VAR_11;
 ChunkSizingInfo *VAR_12;
 FUNC_4(&VAR_10, VAR_6);
 VAR_11 = FUNC_6(VAR_5,
              &VAR_10,
              FUNC_0(VAR_7),
              VAR_2,
              VAR_3);

 VAR_12 = FUNC_5(VAR_5);
 VAR_12->colname = VAR_6;
 VAR_8 = FUNC_7(VAR_5,
            VAR_4,
            VAR_9,
            VAR_11,
            ((void*)0),
            ((void*)0),
            ((void*)0),
            VAR_12);
 if (!VAR_8)
 {
  FUNC_1(VAR_1,
    (FUNC_2(VAR_0),
     FUNC_3("continuous agg could not create hypertable for relid")));
 }
}
