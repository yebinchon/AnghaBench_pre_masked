
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_1__* f_ksid; int f_idx; } ;
typedef TYPE_2__ fuid_domain_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;
struct TYPE_5__ {char* kd_name; } ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__*,int *) ;
 char* VAR_0 ;

char *
FUNC_1(avl_tree_t *VAR_1, uint32_t VAR_2)
{
 fuid_domain_t VAR_3, *VAR_4;
 avl_index_t VAR_5;

 VAR_3.f_idx = VAR_2;

 VAR_4 = FUNC_0(VAR_1, &VAR_3, &VAR_5);

 return (VAR_4 ? VAR_4->f_ksid->kd_name : VAR_0);
}
