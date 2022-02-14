
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uu_avl_pool_t ;
struct TYPE_6__ {char const* fsp_name; TYPE_2__* fsp_set; int * fsp_uge_avl; int * fsp_sc_avl; } ;
typedef TYPE_1__ fs_perm_t ;
struct TYPE_7__ {int * fsps_who_perm_avl_pool; int * fsps_named_set_avl_pool; } ;
typedef TYPE_2__ fs_perm_set_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 () ;
 void* FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static inline void
FUNC_3(fs_perm_t *VAR_1, fs_perm_set_t *VAR_2, const char *VAR_3)
{
 uu_avl_pool_t *VAR_4 = VAR_2->fsps_named_set_avl_pool;
 uu_avl_pool_t *VAR_5 = VAR_2->fsps_who_perm_avl_pool;

 FUNC_0(VAR_1, sizeof (fs_perm_t));

 if ((VAR_1->fsp_sc_avl = FUNC_2(VAR_4, ((void*)0), VAR_0))
     == ((void*)0))
  FUNC_1();

 if ((VAR_1->fsp_uge_avl = FUNC_2(VAR_5, ((void*)0), VAR_0))
     == ((void*)0))
  FUNC_1();

 VAR_1->fsp_set = VAR_2;
 VAR_1->fsp_name = VAR_3;
}
