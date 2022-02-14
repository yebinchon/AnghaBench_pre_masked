
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int synthUnit; int end_date; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (int ,unsigned int,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_2 (decoder_t *VAR_3)
{
    decoder_sys_t *VAR_4 = VAR_3->p_sys;

    FUNC_1(&VAR_4->end_date, VAR_0);



    for (unsigned VAR_5 = 0; VAR_5 < 16; VAR_5++) {
        FUNC_0(VAR_4->synthUnit, VAR_2 | VAR_5, VAR_1, 0, 0);
    }
}
