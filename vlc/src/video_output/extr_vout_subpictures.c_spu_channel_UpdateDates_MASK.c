
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vlc_tick_t ;
struct TYPE_4__ {size_t size; TYPE_2__* data; } ;
struct spu_channel {TYPE_1__ entries; int rate; scalar_t__ clock; } ;
struct TYPE_5__ {void* stop; void* start; void* orgstop; void* orgstart; } ;
typedef TYPE_2__ spu_render_entry_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (void**) ;
 void** FUNC_2 (size_t,int) ;
 int FUNC_3 (scalar_t__,void*,void**,int,int ) ;

__attribute__((used)) static size_t FUNC_4(struct spu_channel *VAR_0,
                                       vlc_tick_t VAR_1)
{


    if (VAR_0->entries.size == 0)
        return 0;
    vlc_tick_t *VAR_2 = FUNC_2(VAR_0->entries.size,
                                       2 * sizeof(vlc_tick_t));
    if (!VAR_2)
        return 0;

    for (size_t VAR_3 = 0; VAR_3 < VAR_0->entries.size; VAR_3++)
    {
        spu_render_entry_t *VAR_4 = &VAR_0->entries.data[VAR_3];
        FUNC_0(VAR_4);

        VAR_2[VAR_3 * 2] = VAR_4->orgstart;
        VAR_2[VAR_3 * 2 + 1] = VAR_4->orgstop;
    }


    if (VAR_0->clock)
        FUNC_3(VAR_0->clock, VAR_1, VAR_2,
                                       VAR_0->entries.size * 2, VAR_0->rate);


    for (size_t VAR_5 = 0; VAR_5 < VAR_0->entries.size; VAR_5++)
    {
        spu_render_entry_t *VAR_6 = &VAR_0->entries.data[VAR_5];

        VAR_6->start = VAR_2[VAR_5 * 2];
        VAR_6->stop = VAR_2[VAR_5 * 2 + 1];
    }

    FUNC_1(VAR_2);
    return VAR_0->entries.size;
}
