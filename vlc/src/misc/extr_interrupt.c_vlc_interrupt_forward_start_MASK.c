
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_interrupt_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,void**) ;
 int * VAR_1 ;

void FUNC_2(vlc_interrupt_t *VAR_2, void *VAR_3[2])
{
    VAR_3[0] = VAR_3[1] = ((void*)0);

    vlc_interrupt_t *VAR_4 = VAR_1;
    if (VAR_4 == ((void*)0))
        return;

    FUNC_0(VAR_4 != VAR_2);
    VAR_3[0] = VAR_2;
    VAR_3[1] = VAR_4;
    FUNC_1(VAR_4, VAR_0, VAR_3);
}
