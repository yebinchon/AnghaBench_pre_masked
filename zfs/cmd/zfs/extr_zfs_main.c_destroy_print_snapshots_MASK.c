
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int * cb_prevsnap; int * cb_firstsnap; int cb_snapused; } ;
typedef TYPE_1__ destroy_cbdata_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,scalar_t__*) ;
 int FUNC_3 (int *,int ,TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_1, destroy_cbdata_t *VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_2->cb_firstsnap == ((void*)0));
 FUNC_0(VAR_2->cb_prevsnap == ((void*)0));
 VAR_3 = FUNC_3(VAR_1, VAR_0, VAR_2, 0, 0);
 if (VAR_2->cb_firstsnap != ((void*)0)) {
  uint64_t VAR_4 = 0;
  if (VAR_3 == 0) {
   VAR_3 = FUNC_2(VAR_2->cb_firstsnap,
       VAR_2->cb_prevsnap, &VAR_4);
  }
  VAR_2->cb_snapused += VAR_4;
  FUNC_1(VAR_2->cb_firstsnap);
  VAR_2->cb_firstsnap = ((void*)0);
  FUNC_1(VAR_2->cb_prevsnap);
  VAR_2->cb_prevsnap = ((void*)0);
 }
 return (VAR_3);
}
