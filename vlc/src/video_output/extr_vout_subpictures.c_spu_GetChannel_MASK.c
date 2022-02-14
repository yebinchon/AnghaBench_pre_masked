
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spu_channel {size_t id; } ;
struct TYPE_6__ {TYPE_3__* p; } ;
typedef TYPE_2__ spu_t ;
struct TYPE_5__ {size_t size; struct spu_channel* data; } ;
struct TYPE_7__ {TYPE_1__ channels; } ;
typedef TYPE_3__ spu_private_t ;


 int FUNC_0 () ;

__attribute__((used)) static struct spu_channel *FUNC_1(spu_t *VAR_0, size_t VAR_1)
{
    spu_private_t *VAR_2 = VAR_0->p;

    for (size_t VAR_3 = 0; VAR_3 < VAR_2->channels.size; ++VAR_3)
        if (VAR_2->channels.data[VAR_3].id == VAR_1)
            return &VAR_2->channels.data[VAR_3];

    FUNC_0();
}
