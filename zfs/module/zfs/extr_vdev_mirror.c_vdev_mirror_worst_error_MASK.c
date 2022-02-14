
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mm_children; TYPE_2__* mm_child; } ;
typedef TYPE_1__ mirror_map_t ;
struct TYPE_5__ {int mc_speculative; int mc_error; } ;
typedef TYPE_2__ mirror_child_t ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(mirror_map_t *VAR_0)
{
 int VAR_1[2] = { 0, 0 };

 for (int VAR_2 = 0; VAR_2 < VAR_0->mm_children; VAR_2++) {
  mirror_child_t *VAR_3 = &VAR_0->mm_child[VAR_2];
  int VAR_4 = VAR_3->mc_speculative;
  VAR_1[VAR_4] = FUNC_0(VAR_1[VAR_4], VAR_3->mc_error);
 }

 return (VAR_1[0] ? VAR_1[0] : VAR_1[1]);
}
