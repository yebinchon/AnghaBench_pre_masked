
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zpool_handle_t ;
typedef int nvlist_t ;
struct TYPE_4__ {int cb_iteration; int cb_flags; int * vcdl; int cb_vdev_names_count; scalar_t__ cb_verbose; int cb_scripted; } ;
typedef TYPE_1__ iostat_cbdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int *,int *,TYPE_1__*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int *,int **) ;
 int FUNC_7 (int *) ;

int
FUNC_8(zpool_handle_t *VAR_2, void *VAR_3)
{
 iostat_cbdata_t *VAR_4 = VAR_3;
 nvlist_t *VAR_5, *VAR_6;
 nvlist_t *VAR_7, *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_6(VAR_2, &VAR_5);

 if (VAR_4->cb_iteration == 1)
  VAR_5 = ((void*)0);

 FUNC_5(FUNC_0(VAR_6, VAR_1,
     &VAR_8) == 0);

 if (VAR_5 == ((void*)0))
  VAR_7 = ((void*)0);
 else
  FUNC_5(FUNC_0(VAR_5, VAR_1,
      &VAR_7) == 0);

 VAR_9 = FUNC_3(VAR_2, FUNC_7(VAR_2), VAR_7, VAR_8,
     VAR_4, 0);
 if ((VAR_9 != 0) && !(VAR_4->cb_flags & VAR_0) &&
     !VAR_4->cb_scripted && VAR_4->cb_verbose && !VAR_4->cb_vdev_names_count) {
  FUNC_2(VAR_4);
  if (VAR_4->vcdl != ((void*)0)) {
   FUNC_1(VAR_4->vcdl, 1);
  }
  FUNC_4("\n");
 }

 return (VAR_9);
}
