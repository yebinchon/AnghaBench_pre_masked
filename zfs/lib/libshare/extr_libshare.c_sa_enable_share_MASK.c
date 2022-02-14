
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sa_share_t ;
typedef TYPE_2__* sa_share_impl_t ;
struct TYPE_12__ {struct TYPE_12__* next; TYPE_1__* ops; int name; } ;
typedef TYPE_3__ sa_fstype_t ;
typedef void* boolean_t ;
struct TYPE_13__ {void* active; } ;
struct TYPE_11__ {int handle; } ;
struct TYPE_10__ {int (* enable_share ) (TYPE_2__*) ;} ;


 void* B_FALSE ;
 void* B_TRUE ;
 TYPE_7__* FSINFO (TYPE_2__*,TYPE_3__*) ;
 int SA_INVALID_PROTOCOL ;
 int SA_OK ;
 TYPE_3__* fstypes ;
 scalar_t__ strcmp (int ,char*) ;
 int stub1 (TYPE_2__*) ;
 int update_sharetab (int ) ;
 int update_zfs_share (TYPE_2__*,int ) ;

int
sa_enable_share(sa_share_t share, char *protocol)
{
 sa_share_impl_t impl_share = (sa_share_impl_t)share;
 int rc, ret = SA_OK;
 boolean_t found_protocol = B_FALSE;
 sa_fstype_t *fstype;

 fstype = fstypes;
 while (fstype != ((void*)0)) {
  if (protocol == ((void*)0) || strcmp(fstype->name, protocol) == 0) {
   update_zfs_share(impl_share, fstype->name);

   rc = fstype->ops->enable_share(impl_share);

   if (rc != SA_OK)
    ret = rc;
   else
    FSINFO(impl_share, fstype)->active = B_TRUE;

   found_protocol = B_TRUE;
  }

  fstype = fstype->next;
 }

 update_sharetab(impl_share->handle);

 return (found_protocol ? ret : SA_INVALID_PROTOCOL);
}
