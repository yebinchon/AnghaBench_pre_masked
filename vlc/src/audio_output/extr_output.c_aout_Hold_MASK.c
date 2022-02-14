
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int audio_output_t ;
struct TYPE_3__ {int refs; } ;
typedef TYPE_1__ aout_owner_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 int VAR_0 ;

audio_output_t *FUNC_2(audio_output_t *VAR_1)
{
    aout_owner_t *VAR_2 = FUNC_0(VAR_1);

    FUNC_1(&VAR_2->refs, 1, VAR_0);
    return VAR_1;
}
