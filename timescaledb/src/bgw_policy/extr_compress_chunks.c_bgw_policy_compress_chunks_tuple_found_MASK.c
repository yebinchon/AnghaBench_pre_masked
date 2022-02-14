
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mctx; int desc; int tuple; } ;
typedef TYPE_2__ TupleInfo ;
struct TYPE_6__ {int older_than; void* hypertable_id; void* job_id; } ;
struct TYPE_8__ {TYPE_1__ fd; } ;
typedef int ScanTupleResult ;
typedef int Datum ;
typedef TYPE_3__ BgwPolicyCompressChunks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int *,int*) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static ScanTupleResult
FUNC_6(TupleInfo *VAR_5, void *const VAR_6)
{
 BgwPolicyCompressChunks **VAR_7 = VAR_6;
 bool VAR_8[VAR_3];
 Datum VAR_9[VAR_3];

 FUNC_4(VAR_5->tuple, VAR_5->desc, VAR_9, VAR_8);

 *VAR_7 = FUNC_3(VAR_5->mctx, sizeof(BgwPolicyCompressChunks));
 FUNC_0(!VAR_8[FUNC_1(VAR_1)]);
 (*VAR_7)->fd.job_id =
  FUNC_2(VAR_9[FUNC_1(VAR_1)]);

 FUNC_0(!VAR_8[FUNC_1(VAR_0)]);
 (*VAR_7)->fd.hypertable_id = FUNC_2(
  VAR_9[FUNC_1(VAR_0)]);

 FUNC_0(!VAR_8[FUNC_1(VAR_2)]);

 (*VAR_7)->fd.older_than = *FUNC_5(
  VAR_9[FUNC_1(VAR_2)]);

 return VAR_4;
}
