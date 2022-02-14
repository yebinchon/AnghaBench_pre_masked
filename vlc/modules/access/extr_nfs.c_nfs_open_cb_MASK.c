
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_context {int dummy; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {void* p_nfsfh; struct nfs_context* p_nfs; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,void*) ;
 int FUNC_1 (struct nfs_context*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, struct nfs_context *VAR_1, void *VAR_2,
            void *VAR_3)
{
    FUNC_1(VAR_1);
    stream_t *VAR_4 = VAR_3;
    access_sys_t *VAR_5 = VAR_4->p_sys;
    FUNC_2(VAR_5->p_nfs == VAR_1);
    if (FUNC_0(VAR_4, VAR_0, VAR_2))
        return;

    VAR_5->p_nfsfh = VAR_2;
}
