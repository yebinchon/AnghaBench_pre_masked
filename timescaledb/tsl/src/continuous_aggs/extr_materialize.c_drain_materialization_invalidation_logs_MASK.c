
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
typedef int int32 ;
struct TYPE_3__ {int mctx; int materialization_invalidation_threshold; int ** invalidations; } ;
typedef int ScanKeyData ;
typedef int List ;
typedef TYPE_1__ InvalidationScanState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int *,int,int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(int32 VAR_8, int64 VAR_9,
          List **VAR_10)
{
 InvalidationScanState VAR_11 = {
  .invalidations = VAR_10,
  .materialization_invalidation_threshold = VAR_9,
  .mctx = VAR_4,
 };
 ScanKeyData VAR_12[1];

 FUNC_1(&VAR_12[0],
    VAR_0,
    VAR_1,
    VAR_5,
    FUNC_0(VAR_8));

 FUNC_2(VAR_2 ,
      VAR_3
      ,
      VAR_12 ,
      1 ,
      VAR_7 ,
      VAR_6 ,
      &VAR_11 );
}
