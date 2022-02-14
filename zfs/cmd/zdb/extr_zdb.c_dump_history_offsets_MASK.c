
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_2__ {scalar_t__ sh_records_lost; scalar_t__ sh_eof; scalar_t__ sh_bof; scalar_t__ sh_phys_max_off; scalar_t__ sh_pool_create_len; } ;
typedef TYPE_1__ spa_history_phys_t ;
typedef int objset_t ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1(objset_t *VAR_0, uint64_t VAR_1, void *VAR_2, size_t VAR_3)
{
 spa_history_phys_t *VAR_4 = VAR_2;

 if (VAR_4 == ((void*)0))
  return;

 (void) FUNC_0("\t\tpool_create_len = %llu\n",
     (u_longlong_t)VAR_4->sh_pool_create_len);
 (void) FUNC_0("\t\tphys_max_off = %llu\n",
     (u_longlong_t)VAR_4->sh_phys_max_off);
 (void) FUNC_0("\t\tbof = %llu\n",
     (u_longlong_t)VAR_4->sh_bof);
 (void) FUNC_0("\t\teof = %llu\n",
     (u_longlong_t)VAR_4->sh_eof);
 (void) FUNC_0("\t\trecords_lost = %llu\n",
     (u_longlong_t)VAR_4->sh_records_lost);
}
