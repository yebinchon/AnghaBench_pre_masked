
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t i_data; int * p_data; } ;
struct TYPE_5__ {TYPE_1__ sample_priv; } ;
typedef TYPE_2__ mp4mux_trackinfo_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;

void FUNC_3(mp4mux_trackinfo_t *VAR_0,
                                const uint8_t *VAR_1, size_t VAR_2)
{
    if(VAR_0->sample_priv.p_data)
    {
        FUNC_0(VAR_0->sample_priv.p_data);
        VAR_0->sample_priv.p_data = ((void*)0);
        VAR_0->sample_priv.i_data = 0;
    }

    if(VAR_1 && VAR_2)
    {
        VAR_0->sample_priv.p_data = FUNC_1(VAR_2);
        if(VAR_2)
        {
            FUNC_2(VAR_0->sample_priv.p_data, VAR_1, VAR_2);
            VAR_0->sample_priv.i_data = VAR_2;
        }
    }
}
