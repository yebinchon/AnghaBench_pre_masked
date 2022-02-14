
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int zio_t ;
struct TYPE_12__ {int iv_attempts_max; int iv_splits; } ;
typedef TYPE_1__ indirect_vsd_t ;
struct TYPE_13__ {int is_children; scalar_t__ is_unique_children; int is_unique_child; TYPE_3__* is_good_child; TYPE_3__* is_child; } ;
typedef TYPE_2__ indirect_split_t ;
struct TYPE_14__ {TYPE_10__* ic_data; } ;
typedef TYPE_3__ indirect_child_t ;
struct TYPE_11__ {int abd_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long long VAR_1 ;
 int FUNC_1 (TYPE_10__*,int ) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_8(indirect_vsd_t *VAR_2, zio_t *VAR_3)
{
 int VAR_4;


 for (indirect_split_t *VAR_5 = FUNC_2(&VAR_2->iv_splits);
     VAR_5 != ((void*)0); VAR_5 = FUNC_5(&VAR_2->iv_splits, VAR_5)) {
  VAR_5->is_unique_children = 0;

  for (int VAR_6 = 0; VAR_6 < VAR_5->is_children; VAR_6++) {
   indirect_child_t *VAR_7 = &VAR_5->is_child[VAR_6];
   if (VAR_7->ic_data != ((void*)0)) {
    VAR_5->is_unique_children++;
    FUNC_3(&VAR_5->is_unique_child, VAR_7);
   }
  }

  if (FUNC_4(&VAR_5->is_unique_child)) {
   VAR_4 = FUNC_0(VAR_0);
   goto out;
  }
 }





 VAR_4 = FUNC_7(VAR_2, VAR_3);
 if (VAR_4)
  goto out;
 VAR_2->iv_attempts_max = 1;

 for (indirect_split_t *VAR_8 = FUNC_2(&VAR_2->iv_splits);
     VAR_8 != ((void*)0); VAR_8 = FUNC_5(&VAR_2->iv_splits, VAR_8)) {
  for (int VAR_9 = 0; VAR_9 < VAR_8->is_children; VAR_9++) {
   indirect_child_t *VAR_10 = &VAR_8->is_child[VAR_9];

   if (VAR_10 == VAR_8->is_good_child)
    continue;
   if (VAR_10->ic_data == ((void*)0))
    continue;

   FUNC_1(VAR_10->ic_data, VAR_10->ic_data->abd_size);
  }

  VAR_2->iv_attempts_max *= 2;
  if (VAR_2->iv_attempts_max >= (1ULL << 12)) {
   VAR_2->iv_attempts_max = VAR_1;
   break;
  }
 }

out:

 for (indirect_split_t *VAR_11 = FUNC_2(&VAR_2->iv_splits);
     VAR_11 != ((void*)0); VAR_11 = FUNC_5(&VAR_2->iv_splits, VAR_11)) {
  indirect_child_t *VAR_12;
  while ((VAR_12 = FUNC_2(&VAR_11->is_unique_child)) != ((void*)0))
   FUNC_6(&VAR_11->is_unique_child, VAR_12);

  VAR_11->is_unique_children = 0;
 }

 return (VAR_4);
}
