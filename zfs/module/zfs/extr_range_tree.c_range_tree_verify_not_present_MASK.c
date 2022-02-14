
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int range_tree_t ;
typedef int range_seg_t ;


 int FUNC_0 (char*,void*) ;
 int * FUNC_1 (int *,int ,int ) ;

void
FUNC_2(range_tree_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 range_seg_t *VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_0("segment already in tree; rs=%p", (void *)VAR_3);
}
