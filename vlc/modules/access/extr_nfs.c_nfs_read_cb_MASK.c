
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_context {int dummy; } ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_6__ {int i_len; int p_buf; } ;
struct TYPE_7__ {TYPE_1__ read; } ;
struct TYPE_9__ {int b_eof; TYPE_2__ res; struct nfs_context* p_nfs; } ;
typedef TYPE_4__ access_sys_t ;


 scalar_t__ FUNC_0 (TYPE_3__*,int,void*) ;
 int FUNC_1 (struct nfs_context*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, struct nfs_context *VAR_1, void *VAR_2,
            void *VAR_3)
{
    FUNC_1(VAR_1);
    stream_t *VAR_4 = VAR_3;
    access_sys_t *VAR_5 = VAR_4->p_sys;
    FUNC_2(VAR_5->p_nfs == VAR_1);
    if (FUNC_0(VAR_4, VAR_0, VAR_2))
        return;

    if (VAR_0 == 0)
        VAR_5->b_eof = 1;
    else
    {
        VAR_5->res.read.i_len = VAR_0;
        FUNC_3(VAR_5->res.read.p_buf, VAR_2, VAR_0);
    }
}
