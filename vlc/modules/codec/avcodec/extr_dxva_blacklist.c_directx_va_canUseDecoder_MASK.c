
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ force; } ;
struct TYPE_7__ {TYPE_1__ obj; } ;
typedef TYPE_2__ vlc_va_t ;
struct decoders {scalar_t__ deviceID; scalar_t__ cmd; scalar_t__ driverBuild; int ** decoder_list; } ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ vendor; struct decoders* devices; } ;
typedef int GUID ;


 size_t FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 TYPE_3__* VAR_2 ;

bool FUNC_2(vlc_va_t *VAR_3, UINT VAR_4, UINT VAR_5, const GUID *VAR_6, UINT VAR_7)
{
    if (VAR_3->obj.force)
        return 1;

    for (size_t VAR_8=0; VAR_8<FUNC_0(VAR_2); VAR_8++)
    {
        if (VAR_2[VAR_8].vendor == VAR_4)
        {
            const struct decoders *VAR_9 = VAR_2[VAR_8].devices;
            while (VAR_9->deviceID != 0)
            {
                if (VAR_9->deviceID == VAR_5)
                {
                    const GUID **VAR_10 = VAR_9->decoder_list;
                    while (*VAR_10 != ((void*)0))
                    {
                        if (FUNC_1(VAR_6, *VAR_10))
                        {
                            if (VAR_9->cmd == VAR_0)
                                return 0;
                            if (VAR_9->cmd == VAR_1 && VAR_7 < VAR_9->driverBuild)
                                return 0;
                            break;
                        }
                        VAR_10++;
                    }
                    return 1;
                }
                VAR_9++;
            }
            break;
        }
    }

    return 1;
}
