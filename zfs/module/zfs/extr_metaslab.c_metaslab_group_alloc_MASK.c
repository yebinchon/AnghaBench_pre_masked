
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zio_alloc_list_t ;
typedef unsigned long long uint64_t ;
struct TYPE_5__ {int mg_lock; int mg_allocations; int mg_no_free_space; int mg_failed_allocations; int mg_initialized; } ;
typedef TYPE_1__ metaslab_group_t ;
typedef int dva_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 unsigned long long FUNC_1 (TYPE_1__*,int *,unsigned long long,unsigned long long,int ,int *,int,int,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int *,unsigned long long,int,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static uint64_t
FUNC_5(metaslab_group_t *VAR_3, zio_alloc_list_t *VAR_4,
    uint64_t VAR_5, uint64_t VAR_6, boolean_t VAR_7, dva_t *VAR_8, int VAR_9,
    int VAR_10, boolean_t VAR_11)
{
 uint64_t VAR_12;
 FUNC_0(VAR_3->mg_initialized);

 VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_8, VAR_9, VAR_10, VAR_11);

 FUNC_3(&VAR_3->mg_lock);
 if (VAR_12 == -1ULL) {
  VAR_3->mg_failed_allocations++;
  FUNC_2(VAR_4, VAR_3, ((void*)0), VAR_5, VAR_9,
      VAR_2, VAR_10);
  if (VAR_5 == VAR_1) {
   VAR_3->mg_no_free_space = VAR_0;
  }
 }
 VAR_3->mg_allocations++;
 FUNC_4(&VAR_3->mg_lock);
 return (VAR_12);
}
