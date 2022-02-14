
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_5__ {int * vdev_enc_sysfs_path; scalar_t__ cols_cnt; scalar_t__ lines_cnt; int * cols; int lines; int cmd; int upath; void* path; void* pool; } ;
typedef TYPE_1__ vdev_cmd_data_t ;
struct TYPE_6__ {int count; int vdev_names_count; int cmd; TYPE_1__* data; void** vdev_names; int cb_name_flags; } ;
typedef TYPE_2__ vdev_cmd_data_list_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,char**) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (void*,char*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int *) ;
 char* FUNC_7 (int ,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_8(zpool_handle_t *VAR_4, nvlist_t *VAR_5, void *VAR_6)
{
 vdev_cmd_data_list_t *VAR_7 = VAR_6;
 vdev_cmd_data_t *VAR_8;
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 int VAR_12, VAR_13 = 0;

 if (FUNC_1(VAR_5, VAR_1, &VAR_9) != 0)
  return (1);

 FUNC_1(VAR_5, VAR_2,
     &VAR_11);


 for (VAR_12 = 0; VAR_12 < VAR_7->count; VAR_12++) {
  if ((FUNC_3(VAR_7->data[VAR_12].path, VAR_9) == 0) &&
      (FUNC_3(VAR_7->data[VAR_12].pool, FUNC_6(VAR_4)) == 0)) {

   return (0);
  }
 }


 for (VAR_12 = 0; VAR_12 < VAR_7->vdev_names_count; VAR_12++) {
  VAR_10 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_7->cb_name_flags);
  if (FUNC_3(VAR_7->vdev_names[VAR_12], VAR_10) == 0) {
   FUNC_0(VAR_10);
   VAR_13 = 1;
   break;
  }
  FUNC_0(VAR_10);
 }


 if (!VAR_13 && VAR_7->vdev_names_count)
  return (0);




 if (!(VAR_7->data = FUNC_2(VAR_7->data,
     sizeof (*VAR_7->data) * (VAR_7->count + 1))))
  return (VAR_0);

 VAR_8 = &VAR_7->data[VAR_7->count];

 VAR_8->pool = FUNC_4(FUNC_6(VAR_4));
 VAR_8->path = FUNC_4(VAR_9);
 VAR_8->upath = FUNC_5(VAR_9);
 VAR_8->cmd = VAR_7->cmd;
 VAR_8->lines = *(VAR_8->cols = ((void*)0));
 VAR_8->lines_cnt = VAR_8->cols_cnt = 0;
 if (VAR_11)
  VAR_8->vdev_enc_sysfs_path = FUNC_4(VAR_11);
 else
  VAR_8->vdev_enc_sysfs_path = ((void*)0);

 VAR_7->count++;

 return (0);
}
