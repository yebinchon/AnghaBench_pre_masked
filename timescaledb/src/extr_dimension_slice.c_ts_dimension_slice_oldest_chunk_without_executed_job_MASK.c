
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_3__ {int chunk_id; int job_id; } ;
typedef int StrategyNumber ;
typedef TYPE_1__ ChunkStatInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,TYPE_1__*,int ,int) ;

int
FUNC_1(int32 VAR_1, int32 VAR_2,
              StrategyNumber VAR_3,
              int64 VAR_4, StrategyNumber VAR_5,
              int64 VAR_6)
{
 ChunkStatInfo VAR_7 = {
  .job_id = VAR_1,
  .chunk_id = -1,
 };

 FUNC_0(VAR_2,
           VAR_3,
           VAR_4,
           VAR_5,
           VAR_6,
           &VAR_7,
           VAR_0,
           -1);

 return VAR_7.chunk_id;
}
