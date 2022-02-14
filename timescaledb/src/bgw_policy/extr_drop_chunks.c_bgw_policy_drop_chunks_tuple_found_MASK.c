
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mctx; int desc; int tuple; } ;
typedef TYPE_2__ TupleInfo ;
struct TYPE_6__ {void* cascade_to_materializations; void* cascade; int older_than; void* hypertable_id; void* job_id; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
typedef int ScanTupleResult ;
typedef int Datum ;
typedef TYPE_3__ BgwPolicyDropChunks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int *,int*) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_7(TupleInfo *VAR_7, void *const VAR_8)
{
 BgwPolicyDropChunks **VAR_9 = VAR_8;
 bool VAR_10[VAR_5];
 Datum VAR_11[VAR_5];




 FUNC_5(VAR_7->tuple, VAR_7->desc, VAR_11, VAR_10);

 *VAR_9 = FUNC_4(VAR_7->mctx, sizeof(BgwPolicyDropChunks));
 FUNC_0(!VAR_10[FUNC_1(VAR_3)]);
 (*VAR_9)->fd.job_id =
  FUNC_3(VAR_11[FUNC_1(VAR_3)]);

 FUNC_0(!VAR_10[FUNC_1(VAR_2)]);
 (*VAR_9)->fd.hypertable_id =
  FUNC_3(VAR_11[FUNC_1(VAR_2)]);

 FUNC_0(!VAR_10[FUNC_1(VAR_4)]);

 (*VAR_9)->fd.older_than = *FUNC_6(
  VAR_11[FUNC_1(VAR_4)]);

 FUNC_0(!VAR_10[FUNC_1(VAR_0)]);
 (*VAR_9)->fd.cascade =
  FUNC_2(VAR_11[FUNC_1(VAR_0)]);

 FUNC_0(
  !VAR_10[FUNC_1(VAR_1)]);
 (*VAR_9)->fd.cascade_to_materializations = FUNC_2(
  VAR_11[FUNC_1(VAR_1)]);

 return VAR_6;
}
