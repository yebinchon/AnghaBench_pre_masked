
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ v_type; } ;
typedef TYPE_2__ vnode_t ;
struct TYPE_11__ {void* vs_aux; } ;
struct TYPE_13__ {char* vdev_path; int vdev_reopening; TYPE_1__ vdev_stat; int vdev_spa; TYPE_4__* vdev_tsd; int vdev_has_securetrim; void* vdev_has_trim; void* vdev_nonrot; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_14__ {TYPE_2__* vf_vnode; } ;
typedef TYPE_4__ vdev_file_t ;
struct TYPE_15__ {int va_size; int va_mask; } ;
typedef TYPE_5__ vattr_t ;
typedef int uint64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_2 (TYPE_2__*,TYPE_5__*,int ,int ,int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 TYPE_4__* FUNC_3 (int,int ) ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int,int ,TYPE_2__**,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(vdev_t *VAR_14, uint64_t *VAR_15, uint64_t *VAR_16,
    uint64_t *VAR_17)
{
 vdev_file_t *VAR_18;
 vnode_t *VAR_19;
 vattr_t VAR_20;
 int VAR_21;




 VAR_14->vdev_nonrot = VAR_2;






 VAR_14->vdev_has_trim = VAR_2;





 VAR_14->vdev_has_securetrim = VAR_1;




 if (VAR_14->vdev_path == ((void*)0) || VAR_14->vdev_path[0] != '/') {
  VAR_14->vdev_stat.vs_aux = VAR_9;
  return (FUNC_1(VAR_3));
 }





 if (VAR_14->vdev_tsd != ((void*)0)) {
  FUNC_0(VAR_14->vdev_reopening);
  VAR_18 = VAR_14->vdev_tsd;
  goto skip_open;
 }

 VAR_18 = VAR_14->vdev_tsd = FUNC_3(sizeof (vdev_file_t), VAR_6);







 FUNC_0(VAR_14->vdev_path != ((void*)0) && VAR_14->vdev_path[0] == '/');
 VAR_21 = FUNC_5(VAR_14->vdev_path + 1, VAR_8,
     FUNC_4(VAR_14->vdev_spa) | VAR_5, 0, &VAR_19, 0, 0, VAR_13, -1);

 if (VAR_21) {
  VAR_14->vdev_stat.vs_aux = VAR_10;
  return (VAR_21);
 }

 VAR_18->vf_vnode = VAR_19;
skip_open:



 VAR_20.va_mask = VAR_0;
 VAR_21 = FUNC_2(VAR_18->vf_vnode, &VAR_20, 0, VAR_12, ((void*)0));
 if (VAR_21) {
  VAR_14->vdev_stat.vs_aux = VAR_10;
  return (VAR_21);
 }

 *VAR_16 = *VAR_15 = VAR_20.va_size;
 *VAR_17 = VAR_7;

 return (0);
}
