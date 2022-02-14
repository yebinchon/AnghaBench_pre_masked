
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * sintable; int * costable; int * bitReverse; } ;
typedef TYPE_1__ fft_state ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (float) ;

fft_state *FUNC_4(void)
{
    fft_state *VAR_2;
    unsigned int VAR_3;

    VAR_2 = FUNC_1( sizeof(*VAR_2) );
    if(! VAR_2 )
        return ((void*)0);

    for(VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        VAR_2->bitReverse[VAR_3] = FUNC_2(VAR_3);
    }
    for(VAR_3 = 0; VAR_3 < VAR_0 / 2; VAR_3++)
    {
        float VAR_4 = 2 * VAR_1 * VAR_3 / VAR_0;
        VAR_2->costable[VAR_3] = FUNC_0(VAR_4);
        VAR_2->sintable[VAR_3] = FUNC_3(VAR_4);
    }

    return VAR_2;
}
