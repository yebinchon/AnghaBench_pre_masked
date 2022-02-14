
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parser; } ;
typedef TYPE_1__ libvlc_priv_t ;
typedef int libvlc_int_t ;


 int FUNC_0 (int *,void*) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(libvlc_int_t *VAR_0, void *VAR_1)
{
    libvlc_priv_t *VAR_2 = FUNC_1(VAR_0);

    if (FUNC_2(VAR_2->parser == ((void*)0)))
        return;

    FUNC_0(VAR_2->parser, VAR_1);
}
