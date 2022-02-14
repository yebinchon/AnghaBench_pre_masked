
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int * p_nfsdir; int * p_nfsfh; } ;
typedef TYPE_2__ access_sys_t ;



__attribute__((used)) static bool
FUNC_0(stream_t *VAR_0)
{
    access_sys_t *VAR_1 = VAR_0->p_sys;
    return VAR_1->p_nfsfh != ((void*)0) || VAR_1->p_nfsdir != ((void*)0);
}
