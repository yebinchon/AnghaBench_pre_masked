
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ const cid; } ;
typedef TYPE_1__ vlc_v4l2_ctrl_name_t ;
typedef scalar_t__ uint32_t ;
typedef int int32_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1)
{
    const uint32_t *VAR_2 = VAR_0;
    const vlc_v4l2_ctrl_name_t *VAR_3 = VAR_1;

    return (int32_t)(*VAR_2 - VAR_3->cid);
}
