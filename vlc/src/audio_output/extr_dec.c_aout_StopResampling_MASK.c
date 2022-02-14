
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int audio_output_t ;
struct TYPE_4__ {int resamp_type; } ;
struct TYPE_5__ {int filters; TYPE_1__ sync; } ;
typedef TYPE_2__ aout_owner_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (audio_output_t *VAR_1)
{
    aout_owner_t *VAR_2 = FUNC_1 (VAR_1);

    VAR_2->sync.resamp_type = VAR_0;
    FUNC_0 (VAR_2->filters, 0);
}
