
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int block_t ;
struct TYPE_5__ {int (* amplify ) (TYPE_2__*,int *,float) ;} ;
struct TYPE_4__ {float output_factor; TYPE_2__ object; int gain_factor; int * module; } ;
typedef TYPE_1__ aout_volume_t ;


 int FUNC_0 (TYPE_2__*,int *,float) ;
 scalar_t__ FUNC_1 (int ) ;
 float FUNC_2 (int *) ;

int FUNC_3(aout_volume_t *VAR_0, block_t *VAR_1)
{
    if (FUNC_1(VAR_0 == ((void*)0)) || VAR_0->module == ((void*)0))
        return -1;

    float VAR_2 = VAR_0->output_factor
              * FUNC_2 (&VAR_0->gain_factor);

    VAR_0->object.amplify(&VAR_0->object, VAR_1, VAR_2);
    return 0;
}
