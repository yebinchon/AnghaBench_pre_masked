
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_iter_f ;
typedef int zfs_handle_t ;
typedef int tpool_t ;
struct TYPE_3__ {size_t mnt_num_handles; int mnt_idx; void* mnt_data; int mnt_func; int ** mnt_zhps; int * mnt_tp; int * mnt_hdl; } ;
typedef TYPE_1__ mnt_param_t ;
typedef int libzfs_handle_t ;


 int FUNC_0 (int *,int ,void*) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(libzfs_handle_t *VAR_1, zfs_handle_t **VAR_2,
    size_t VAR_3, int VAR_4, zfs_iter_f VAR_5, void *VAR_6, tpool_t *VAR_7)
{
 mnt_param_t *VAR_8 = FUNC_1(VAR_1, sizeof (mnt_param_t));

 VAR_8->mnt_hdl = VAR_1;
 VAR_8->mnt_tp = VAR_7;
 VAR_8->mnt_zhps = VAR_2;
 VAR_8->mnt_num_handles = VAR_3;
 VAR_8->mnt_idx = VAR_4;
 VAR_8->mnt_func = VAR_5;
 VAR_8->mnt_data = VAR_6;

 (void) FUNC_0(VAR_7, VAR_0, (void*)VAR_8);
}
