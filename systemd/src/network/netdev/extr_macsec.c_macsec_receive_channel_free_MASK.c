
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ as_uint64; } ;
struct TYPE_8__ {scalar_t__* section; TYPE_2__* macsec; TYPE_1__ sci; } ;
struct TYPE_7__ {int receive_channels_by_section; int receive_channels; } ;
typedef TYPE_3__ ReceiveChannel ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(ReceiveChannel *VAR_0) {
        if (!VAR_0)
                return;

        if (VAR_0->macsec) {
                if (VAR_0->sci.as_uint64 > 0)
                        FUNC_2(VAR_0->macsec->receive_channels, &VAR_0->sci.as_uint64);

                if (VAR_0->section)
                        FUNC_2(VAR_0->macsec->receive_channels_by_section, VAR_0->section);
        }

        FUNC_1(VAR_0->section);

        FUNC_0(VAR_0);
}
