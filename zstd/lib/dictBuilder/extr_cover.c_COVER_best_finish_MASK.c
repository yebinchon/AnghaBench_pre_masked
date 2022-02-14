
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ZDICT_cover_params_t ;
struct TYPE_6__ {size_t liveJobs; size_t compressedSize; size_t dictSize; int mutex; int cond; int parameters; int dict; } ;
struct TYPE_5__ {size_t totalCompressedSize; size_t dictSize; void* dictContent; } ;
typedef TYPE_1__ COVER_dictSelection_t ;
typedef TYPE_2__ COVER_best_t ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int ,void*,size_t) ;

void FUNC_8(COVER_best_t *VAR_1, ZDICT_cover_params_t VAR_2,
                              COVER_dictSelection_t VAR_3) {
  void* VAR_4 = VAR_3.dictContent;
  size_t VAR_5 = VAR_3.totalCompressedSize;
  size_t VAR_6 = VAR_3.dictSize;
  if (!VAR_1) {
    return;
  }
  {
    size_t VAR_7;
    FUNC_3(&VAR_1->mutex);
    --VAR_1->liveJobs;
    VAR_7 = VAR_1->liveJobs;

    if (VAR_5 < VAR_1->compressedSize) {

      if (!VAR_1->dict || VAR_1->dictSize < VAR_6) {
        if (VAR_1->dict) {
          FUNC_5(VAR_1->dict);
        }
        VAR_1->dict = FUNC_6(VAR_6);
        if (!VAR_1->dict) {
          VAR_1->compressedSize = FUNC_0(VAR_0);
          VAR_1->dictSize = 0;
          FUNC_2(&VAR_1->cond);
          FUNC_4(&VAR_1->mutex);
          return;
        }
      }

      if (VAR_4) {
        FUNC_7(VAR_1->dict, VAR_4, VAR_6);
        VAR_1->dictSize = VAR_6;
        VAR_1->parameters = VAR_2;
        VAR_1->compressedSize = VAR_5;
      }
    }
    if (VAR_7 == 0) {
      FUNC_1(&VAR_1->cond);
    }
    FUNC_4(&VAR_1->mutex);
  }
}
