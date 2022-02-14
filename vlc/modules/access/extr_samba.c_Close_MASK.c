
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int * pf_readdir; TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_4__ {int i_smb; int url; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(vlc_object_t *VAR_0)
{
    stream_t *VAR_1 = (stream_t *)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_2(&VAR_2->url);

    if (VAR_1->pf_readdir != ((void*)0))
        FUNC_1(VAR_2->i_smb);
    else
        FUNC_0(VAR_2->i_smb);
}
