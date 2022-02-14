
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {void* z_next_ace; TYPE_1__* z_ops; TYPE_3__* z_curr_node; int z_acl; } ;
typedef TYPE_2__ zfs_acl_t ;
struct TYPE_11__ {scalar_t__ z_ace_idx; scalar_t__ z_ace_count; scalar_t__ z_size; void* z_acldata; } ;
typedef TYPE_3__ zfs_acl_node_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_9__ {size_t (* ace_size ) (void*) ;int (* ace_who_get ) (void*) ;int (* ace_mask_get ) (void*) ;int (* ace_type_get ) (void*) ;int (* ace_flags_get ) (void*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*) ;
 size_t FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void *
FUNC_8(zfs_acl_t *VAR_0, void *VAR_1, uint64_t *VAR_2,
    uint32_t *VAR_3, uint16_t *VAR_4, uint16_t *VAR_5)
{
 zfs_acl_node_t *VAR_6;

 FUNC_0(VAR_0);

 if (VAR_1 == ((void*)0)) {
  VAR_6 = FUNC_1(&VAR_0->z_acl);
  if (VAR_6 == ((void*)0))
   return (((void*)0));

  VAR_0->z_next_ace = VAR_6->z_acldata;
  VAR_0->z_curr_node = VAR_6;
  VAR_6->z_ace_idx = 0;
 }

 VAR_6 = VAR_0->z_curr_node;

 if (VAR_6 == ((void*)0))
  return (((void*)0));

 if (VAR_6->z_ace_idx >= VAR_6->z_ace_count) {
  VAR_6 = FUNC_2(&VAR_0->z_acl, VAR_6);
  if (VAR_6 == ((void*)0))
   return (((void*)0));
  else {
   VAR_0->z_curr_node = VAR_6;
   VAR_6->z_ace_idx = 0;
   VAR_0->z_next_ace = VAR_6->z_acldata;
  }
 }

 if (VAR_6->z_ace_idx < VAR_6->z_ace_count) {
  void *VAR_7 = VAR_0->z_next_ace;
  size_t VAR_8;




  VAR_8 = VAR_0->z_ops->ace_size(VAR_7);

  if (((caddr_t)VAR_7 + VAR_8) >
      ((caddr_t)VAR_6->z_acldata + VAR_6->z_size)) {
   return (((void*)0));
  }

  *VAR_4 = VAR_0->z_ops->ace_flags_get(VAR_7);
  *VAR_5 = VAR_0->z_ops->ace_type_get(VAR_7);
  *VAR_3 = VAR_0->z_ops->ace_mask_get(VAR_7);
  *VAR_2 = VAR_0->z_ops->ace_who_get(VAR_7);
  VAR_0->z_next_ace = (caddr_t)VAR_0->z_next_ace + VAR_8;
  VAR_6->z_ace_idx++;

  return ((void *)VAR_7);
 }
 return (((void*)0));
}
