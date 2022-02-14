
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* data; } ;
typedef TYPE_1__ vlc_interrupt_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    vlc_interrupt_t *VAR_1 = VAR_0;
    int *VAR_2 = VAR_1->data;

    FUNC_1(VAR_1);
    if (VAR_2[1] != VAR_2[0])
        FUNC_0(VAR_2[1]);
    FUNC_0(VAR_2[0]);
}
