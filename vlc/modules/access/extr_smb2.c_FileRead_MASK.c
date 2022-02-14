
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; } ;
struct TYPE_9__ {TYPE_1__ read; } ;
struct access_sys {scalar_t__ error_status; TYPE_2__ res; int smb2fh; int smb2; scalar_t__ eof; } ;
struct TYPE_10__ {struct access_sys* p_sys; } ;
typedef TYPE_3__ stream_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_3__*,char*,int) ;
 scalar_t__ FUNC_1 (int ,int ,void*,size_t,int ,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(stream_t *VAR_1, void *VAR_2, size_t VAR_3)
{
    struct access_sys *VAR_4 = VAR_1->p_sys;

    if (VAR_4->error_status != 0)
        return -1;

    if (VAR_4->eof)
        return 0;

    VAR_4->res.read.len = 0;
    if (FUNC_1(VAR_4->smb2, VAR_4->smb2fh, VAR_2, VAR_3,
                        VAR_0, VAR_1) < 0)
    {
        FUNC_0(VAR_1, "smb2_read_async", 1);
        return -1;
    }

    if (FUNC_2(VAR_1, 0) < 0)
        return -1;

    return VAR_4->res.read.len;
}
