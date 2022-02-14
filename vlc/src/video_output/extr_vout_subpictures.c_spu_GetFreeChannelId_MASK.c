
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_8__ {TYPE_4__* p; } ;
typedef TYPE_3__ spu_t ;
struct TYPE_7__ {size_t size; TYPE_1__* data; } ;
struct TYPE_9__ {TYPE_2__ channels; } ;
typedef TYPE_4__ spu_private_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
struct TYPE_6__ {size_t id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static ssize_t FUNC_1(spu_t *VAR_5, enum vlc_vout_order *VAR_6)
{
    spu_private_t *VAR_7 = VAR_5->p;

    if (FUNC_0(VAR_7->channels.size > VAR_0))
        return VAR_3;

    size_t VAR_8;
    if (VAR_6)
        *VAR_6 = VAR_1;
    for (VAR_8 = VAR_4; VAR_8 < VAR_7->channels.size + 1; ++VAR_8)
    {
        bool VAR_9 = 0;
        for (size_t VAR_10 = VAR_4; VAR_10 < VAR_7->channels.size; ++VAR_10)
        {
            if (VAR_7->channels.data[VAR_10].id == VAR_8)
            {
                VAR_9 = 1;
                if (VAR_6)
                    *VAR_6 = VAR_2;
                break;
            }
        }
        if (!VAR_9)
            return VAR_8;
    }
    return VAR_3;
}
