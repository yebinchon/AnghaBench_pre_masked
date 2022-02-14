
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_5__ {int synth; int end_date; } ;
typedef TYPE_2__ decoder_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3 (decoder_t *VAR_1)
{
    decoder_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0 (&VAR_2->end_date, VAR_0);

    FUNC_2 (VAR_2->synth);
    for (unsigned VAR_3 = 0; VAR_3 < 16; VAR_3++)
        for (unsigned VAR_4 = 0; VAR_4 < 128; VAR_4++)
            FUNC_1 (VAR_2->synth, VAR_3, VAR_4);
}
