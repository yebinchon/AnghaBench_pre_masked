
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int vdev_children; int vdev_path; int vdev_wholedisk; TYPE_1__* vdev_ops; struct TYPE_9__** vdev_child; TYPE_4__* vdev_tsd; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_10__ {TYPE_6__* vd_bdev; } ;
typedef TYPE_4__ vdev_disk_t ;
struct request_queue {int dummy; } ;
struct TYPE_11__ {TYPE_2__* bd_disk; } ;
struct TYPE_8__ {char* disk_name; } ;
struct TYPE_7__ {int vdev_op_leaf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct request_queue* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (char*,char**,char**,int ) ;
 int FUNC_2 (struct request_queue*,char*) ;
 char* FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char*,int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(vdev_t *VAR_2, char *VAR_3)
{
 vdev_disk_t *VAR_4 = VAR_2->vdev_tsd;
 struct request_queue *VAR_5;
 char *VAR_6;
 int VAR_7;

 for (int VAR_8 = 0; VAR_8 < VAR_2->vdev_children; VAR_8++)
  FUNC_8(VAR_2->vdev_child[VAR_8], VAR_3);

 if (!VAR_2->vdev_ops->vdev_op_leaf || VAR_4->vd_bdev == ((void*)0))
  return;

 VAR_5 = FUNC_0(VAR_4->vd_bdev);
 VAR_6 = VAR_4->vd_bdev->bd_disk->disk_name;
 if (!VAR_2->vdev_wholedisk && FUNC_6(VAR_6, "dm-", 3) != 0)
  return;


 if ((FUNC_6(VAR_3, "none", 4) == 0) && (FUNC_5(VAR_3) == 4))
  return;
 char *VAR_9[] = { "/bin/sh", "-c", ((void*)0), ((void*)0) };
 char *VAR_10[] = { ((void*)0) };

 VAR_9[2] = FUNC_3("exec 0</dev/null " "     1>/sys/block/%s/queue/scheduler " "     2>/dev/null; " "echo %s", VAR_6, VAR_3);
 VAR_7 = FUNC_1(VAR_9[0], VAR_9, VAR_10, VAR_1);
 FUNC_4(VAR_9[2]);

 if (VAR_7) {
  FUNC_7("Unable to set \"%s\" scheduler for %s (%s): %d",
      VAR_3, VAR_2->vdev_path, VAR_6, VAR_7);
 }
}
