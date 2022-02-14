
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_memory_keystore; } ;
typedef TYPE_1__ libvlc_priv_t ;
typedef int libvlc_int_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(libvlc_int_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));
    libvlc_priv_t *VAR_1 = FUNC_1(VAR_0);

    if (VAR_1->p_memory_keystore != ((void*)0))
    {
        FUNC_2(VAR_1->p_memory_keystore);
        VAR_1->p_memory_keystore = ((void*)0);
    }
}
