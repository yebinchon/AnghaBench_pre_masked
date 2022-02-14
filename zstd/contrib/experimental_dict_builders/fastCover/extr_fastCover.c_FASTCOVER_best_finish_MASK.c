
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZDICT_fastCover_params_t ;
struct TYPE_3__ {size_t liveJobs; size_t compressedSize; size_t dictSize; int cond; int mutex; int parameters; scalar_t__ dict; } ;
typedef TYPE_1__ FASTCOVER_best_t ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (scalar_t__,void*,size_t) ;

__attribute__((used)) static void FUNC_7(FASTCOVER_best_t *VAR_1, size_t VAR_2,
                              ZDICT_fastCover_params_t VAR_3, void *VAR_4,
                              size_t VAR_5) {
  if (!VAR_1) {
    return;
  }
  {
    size_t VAR_6;
    FUNC_2(&VAR_1->mutex);
    --VAR_1->liveJobs;
    VAR_6 = VAR_1->liveJobs;

    if (VAR_2 < VAR_1->compressedSize) {

      if (!VAR_1->dict || VAR_1->dictSize < VAR_5) {
        if (VAR_1->dict) {
          FUNC_4(VAR_1->dict);
        }
        VAR_1->dict = FUNC_5(VAR_5);
        if (!VAR_1->dict) {
          VAR_1->compressedSize = FUNC_0(VAR_0);
          VAR_1->dictSize = 0;
          return;
        }
      }

      FUNC_6(VAR_1->dict, VAR_4, VAR_5);
      VAR_1->dictSize = VAR_5;
      VAR_1->parameters = VAR_3;
      VAR_1->compressedSize = VAR_2;
    }
    FUNC_3(&VAR_1->mutex);
    if (VAR_6 == 0) {
      FUNC_1(&VAR_1->cond);
    }
  }
}
