
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {struct TYPE_4__* psz_file; } ;
typedef TYPE_1__ vlc_keystore_sys ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ vlc_keystore ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(vlc_object_t *VAR_0)
{
    vlc_keystore *VAR_1 = (vlc_keystore *)VAR_0;
    vlc_keystore_sys *VAR_2 = VAR_1->p_sys;

    FUNC_0(VAR_2->psz_file);
    FUNC_0(VAR_2);
}
