
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int audio_output_t ;
struct TYPE_3__ {int restart; } ;
typedef TYPE_1__ aout_owner_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*,unsigned int) ;

void FUNC_3 (audio_output_t *VAR_1, unsigned VAR_2)
{
    aout_owner_t *VAR_3 = FUNC_0 (VAR_1);
    FUNC_1(&VAR_3->restart, VAR_2, VAR_0);
    FUNC_2 (VAR_1, "restart requested (%u)", VAR_2);
}
