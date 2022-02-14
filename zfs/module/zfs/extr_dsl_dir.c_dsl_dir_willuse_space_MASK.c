
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int int64_t ;
struct TYPE_11__ {struct TYPE_11__* dd_parent; int dd_lock; int * dd_space_towrite; } ;
typedef TYPE_1__ dsl_dir_t ;
struct TYPE_12__ {size_t tx_txg; } ;
typedef TYPE_2__ dmu_tx_t ;
struct TYPE_13__ {scalar_t__ dd_used_bytes; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_7__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int ) ;

void
FUNC_6(dsl_dir_t *VAR_1, int64_t VAR_2, dmu_tx_t *VAR_3)
{
 int64_t VAR_4;
 uint64_t VAR_5;

 do {
  FUNC_3(&VAR_1->dd_lock);
  if (VAR_2 > 0)
   VAR_1->dd_space_towrite[VAR_3->tx_txg & VAR_0] += VAR_2;

  VAR_5 = FUNC_2(VAR_1) +
      FUNC_1(VAR_1)->dd_used_bytes;
  VAR_4 = FUNC_5(VAR_1, VAR_5, VAR_2);
  FUNC_4(&VAR_1->dd_lock);


  FUNC_0(VAR_1, VAR_3);

  VAR_1 = VAR_1->dd_parent;
  VAR_2 = VAR_4;
 } while (VAR_2 && VAR_1);
}
