
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ io_txg; int * io_bp; TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_8__ {size_t mm_preferred_cnt; int mm_children; int* mm_preferred; TYPE_3__* mm_child; } ;
typedef TYPE_2__ mirror_map_t ;
struct TYPE_9__ {int mc_tried; int mc_skipped; int mc_speculative; int mc_load; int mc_offset; int * mc_vd; void* mc_error; } ;
typedef TYPE_3__ mirror_child_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__,int) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(zio_t *VAR_6)
{
 mirror_map_t *VAR_7 = VAR_6->io_vsd;
 uint64_t VAR_8 = VAR_6->io_txg;
 int VAR_9, VAR_10;

 FUNC_0(VAR_6->io_bp == ((void*)0) || FUNC_1(VAR_6->io_bp) == VAR_8);

 VAR_10 = VAR_3;
 VAR_7->mm_preferred_cnt = 0;
 for (VAR_9 = 0; VAR_9 < VAR_7->mm_children; VAR_9++) {
  mirror_child_t *VAR_11;

  VAR_11 = &VAR_7->mm_child[VAR_9];
  if (VAR_11->mc_tried || VAR_11->mc_skipped)
   continue;

  if (VAR_11->mc_vd == ((void*)0) || !FUNC_7(VAR_11->mc_vd)) {
   VAR_11->mc_error = FUNC_3(VAR_1);
   VAR_11->mc_tried = 1;
   VAR_11->mc_skipped = 1;
   continue;
  }

  if (FUNC_4(VAR_11->mc_vd, VAR_0, VAR_8, 1)) {
   VAR_11->mc_error = FUNC_3(VAR_2);
   VAR_11->mc_skipped = 1;
   VAR_11->mc_speculative = 1;
   continue;
  }

  VAR_11->mc_load = FUNC_5(VAR_7, VAR_11->mc_vd, VAR_11->mc_offset);
  if (VAR_11->mc_load > VAR_10)
   continue;

  if (VAR_11->mc_load < VAR_10) {
   VAR_10 = VAR_11->mc_load;
   VAR_7->mm_preferred_cnt = 0;
  }
  VAR_7->mm_preferred[VAR_7->mm_preferred_cnt] = VAR_9;
  VAR_7->mm_preferred_cnt++;
 }

 if (VAR_7->mm_preferred_cnt == 1) {
  FUNC_2(VAR_4);
  return (VAR_7->mm_preferred[0]);
 }

 if (VAR_7->mm_preferred_cnt > 1) {
  FUNC_2(VAR_5);
  return (FUNC_6(VAR_6));
 }





 for (VAR_9 = 0; VAR_9 < VAR_7->mm_children; VAR_9++) {
  if (!VAR_7->mm_child[VAR_9].mc_tried)
   return (VAR_9);
 }




 return (-1);
}
