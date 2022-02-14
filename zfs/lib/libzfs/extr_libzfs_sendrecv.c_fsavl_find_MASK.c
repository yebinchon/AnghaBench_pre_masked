
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_4__ {char* fn_snapname; int * fn_nvfs; int fn_guid; } ;
typedef TYPE_1__ fsavl_node_t ;
typedef int avl_tree_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static nvlist_t *
FUNC_1(avl_tree_t *VAR_0, uint64_t VAR_1, char **VAR_2)
{
 fsavl_node_t VAR_3;
 fsavl_node_t *VAR_4;

 VAR_3.fn_guid = VAR_1;

 VAR_4 = FUNC_0(VAR_0, &VAR_3, ((void*)0));
 if (VAR_4) {
  if (VAR_2)
   *VAR_2 = VAR_4->fn_snapname;
  return (VAR_4->fn_nvfs);
 }
 return (((void*)0));
}
