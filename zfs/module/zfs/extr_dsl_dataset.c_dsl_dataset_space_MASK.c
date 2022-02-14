
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ ds_reserved; scalar_t__ ds_quota; int ds_bp_rwlock; int ds_dir; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_6__ {scalar_t__ ds_referenced_bytes; scalar_t__ ds_unique_bytes; int ds_bp; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(dsl_dataset_t *VAR_4,
    uint64_t *VAR_5, uint64_t *VAR_6,
    uint64_t *VAR_7, uint64_t *VAR_8)
{
 *VAR_5 = FUNC_2(VAR_4)->ds_referenced_bytes;
 *VAR_6 = FUNC_3(VAR_4->ds_dir, ((void*)0), 0, VAR_3);
 if (VAR_4->ds_reserved > FUNC_2(VAR_4)->ds_unique_bytes)
  *VAR_6 +=
      VAR_4->ds_reserved - FUNC_2(VAR_4)->ds_unique_bytes;
 if (VAR_4->ds_quota != 0) {



  if (*VAR_5 < VAR_4->ds_quota)
   *VAR_6 = FUNC_1(*VAR_6,
       VAR_4->ds_quota - *VAR_5);
  else
   *VAR_6 = 0;
 }
 FUNC_4(&VAR_4->ds_bp_rwlock, VAR_2, VAR_1);
 *VAR_7 = FUNC_0(&FUNC_2(VAR_4)->ds_bp);
 FUNC_5(&VAR_4->ds_bp_rwlock, VAR_1);
 *VAR_8 = VAR_0 - *VAR_7;
}
