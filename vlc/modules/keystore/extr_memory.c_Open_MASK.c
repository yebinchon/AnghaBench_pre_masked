
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_keystore_sys ;
struct TYPE_3__ {int pf_remove; int pf_find; int pf_store; TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_keystore ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(vlc_object_t *VAR_5)
{
    vlc_keystore *VAR_6 = (vlc_keystore *)VAR_5;
    VAR_6->p_sys = FUNC_0(1, sizeof(vlc_keystore_sys));
    if (!VAR_6->p_sys)
        return VAR_3;

    FUNC_1(&VAR_6->p_sys->lock);
    VAR_6->pf_store = VAR_2;
    VAR_6->pf_find = VAR_0;
    VAR_6->pf_remove = VAR_1;

    return VAR_4;
}
