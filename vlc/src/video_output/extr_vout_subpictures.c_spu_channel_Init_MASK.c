
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_clock_t ;
struct spu_channel {size_t id; float rate; int order; int entries; scalar_t__ delay; int * clock; } ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct spu_channel *VAR_0, size_t VAR_1,
                             enum vlc_vout_order VAR_2, vlc_clock_t *VAR_3)
{
    VAR_0->id = VAR_1;
    VAR_0->clock = VAR_3;
    VAR_0->delay = 0;
    VAR_0->rate = 1.f;
    VAR_0->order = VAR_2;

    FUNC_0(&VAR_0->entries);
}
