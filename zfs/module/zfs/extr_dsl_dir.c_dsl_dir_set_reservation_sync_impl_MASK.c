
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {int dd_lock; int * dd_parent; int dd_dbuf; } ;
typedef TYPE_1__ dsl_dir_t ;
typedef int dmu_tx_t ;
struct TYPE_6__ {int dd_reserved; int dd_used_bytes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,scalar_t__,int ,int ,int *) ;
 TYPE_3__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(dsl_dir_t *VAR_1, uint64_t VAR_2, dmu_tx_t *VAR_3)
{
 uint64_t VAR_4;
 int64_t VAR_5;

 FUNC_1(VAR_1->dd_dbuf, VAR_3);

 FUNC_4(&VAR_1->dd_lock);
 VAR_4 = FUNC_3(VAR_1)->dd_used_bytes;
 VAR_5 = FUNC_0(VAR_4, VAR_2) - FUNC_0(VAR_4, FUNC_3(VAR_1)->dd_reserved);
 FUNC_3(VAR_1)->dd_reserved = VAR_2;

 if (VAR_1->dd_parent != ((void*)0)) {

  FUNC_2(VAR_1->dd_parent, VAR_0,
      VAR_5, 0, 0, VAR_3);
 }
 FUNC_5(&VAR_1->dd_lock);
}
