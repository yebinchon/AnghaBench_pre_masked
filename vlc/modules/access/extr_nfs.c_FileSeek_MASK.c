
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_9__ {int b_done; } ;
struct TYPE_10__ {TYPE_1__ seek; } ;
struct TYPE_12__ {int b_eof; int p_nfsfh; int p_nfs; TYPE_2__ res; } ;
typedef TYPE_4__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_3(stream_t *VAR_5, uint64_t VAR_6)
{
    access_sys_t *VAR_7 = VAR_5->p_sys;

    VAR_7->res.seek.b_done = 0;
    if (FUNC_1(VAR_7->p_nfs, VAR_7->p_nfsfh, VAR_6, VAR_0,
                        VAR_3, VAR_5) < 0)
    {
        FUNC_0(VAR_5, "nfs_seek_async failed");
        return VAR_1;
    }

    if (FUNC_2(VAR_5, VAR_4) < 0)
        return VAR_1;

    VAR_7->b_eof = 0;

    return VAR_2;
}
