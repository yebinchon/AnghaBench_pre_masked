
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_memory_keystore; } ;
typedef TYPE_1__ libvlc_priv_t ;
typedef int libvlc_int_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int *) ;

int
FUNC_4(libvlc_int_t *VAR_2)
{
    FUNC_1(VAR_2 != ((void*)0));
    libvlc_priv_t *VAR_3 = FUNC_3(VAR_2);

    VAR_3->p_memory_keystore = FUNC_2(FUNC_0(VAR_2), "memory");
    return VAR_3->p_memory_keystore != ((void*)0) ? VAR_1 : VAR_0;
}
