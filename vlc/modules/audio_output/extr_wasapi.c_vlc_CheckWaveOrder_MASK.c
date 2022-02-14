
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int dwChannelMask; } ;
typedef TYPE_1__ WAVEFORMATEXTENSIBLE ;
struct TYPE_5__ {scalar_t__ wFormatTag; } ;
typedef TYPE_2__ WAVEFORMATEX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned FUNC_1 (const WAVEFORMATEX *restrict VAR_3,
                                    uint8_t *restrict VAR_4)
{
    uint32_t VAR_5 = 0;

    if (VAR_3->wFormatTag == VAR_0)
    {
        const WAVEFORMATEXTENSIBLE *VAR_6 = (void *)VAR_3;

        VAR_5 = VAR_6->dwChannelMask;
    }
    return FUNC_0(VAR_1, VAR_2, VAR_5, VAR_4);
}
