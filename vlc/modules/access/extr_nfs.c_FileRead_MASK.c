
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
typedef int ssize_t ;
struct TYPE_10__ {int i_len; void* p_buf; } ;
struct TYPE_9__ {TYPE_2__ read; } ;
struct TYPE_12__ {TYPE_1__ res; int p_nfsfh; int p_nfs; scalar_t__ b_eof; } ;
typedef TYPE_4__ access_sys_t ;


 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,size_t,int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(stream_t *VAR_2, void *VAR_3, size_t VAR_4)
{
    access_sys_t *VAR_5 = VAR_2->p_sys;

    if (VAR_5->b_eof)
        return 0;

    VAR_5->res.read.i_len = 0;
    VAR_5->res.read.p_buf = VAR_3;
    if (FUNC_1(VAR_5->p_nfs, VAR_5->p_nfsfh, VAR_4, VAR_0,
                       VAR_2) < 0)
    {
        FUNC_0(VAR_2, "nfs_read_async failed");
        return -1;
    }

    if (FUNC_2(VAR_2, VAR_1) < 0)
        return -1;

    return VAR_5->res.read.i_len;
}
