
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int line; int filename; } ;
struct TYPE_8__ {scalar_t__ port; int as_uint64; int mac; } ;
struct TYPE_9__ {TYPE_3__* section; TYPE_1__ sci; int receive_channels; struct TYPE_9__* macsec; } ;
typedef TYPE_2__ ReceiveChannel ;
typedef int NetDev ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int,char*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int *,TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(ReceiveChannel *VAR_3) {
        NetDev *VAR_4;
        int VAR_5;

        FUNC_2(VAR_3);
        FUNC_2(VAR_3->macsec);

        VAR_4 = FUNC_0(VAR_3->macsec);

        if (FUNC_8(VAR_3->section))
                return -VAR_1;

        if (FUNC_3(&VAR_3->sci.mac))
                return FUNC_4(VAR_4, FUNC_1(VAR_1),
                                              "%s: MACsec receive channel without MAC address configured. "
                                              "Ignoring [MACsecReceiveChannel] section from line %u",
                                              VAR_3->section->filename, VAR_3->section->line);

        if (VAR_3->sci.port == 0)
                return FUNC_4(VAR_4, FUNC_1(VAR_1),
                                              "%s: MACsec receive channel without port configured. "
                                              "Ignoring [MACsecReceiveChannel] section from line %u",
                                              VAR_3->section->filename, VAR_3->section->line);

        VAR_5 = FUNC_6(&VAR_3->macsec->receive_channels, &VAR_2);
        if (VAR_5 < 0)
                return FUNC_5();

        VAR_5 = FUNC_7(VAR_3->macsec->receive_channels, &VAR_3->sci.as_uint64, VAR_3);
        if (VAR_5 == -VAR_0)
                return FUNC_4(VAR_4, VAR_5,
                                              "%s: Multiple [MACsecReceiveChannel] sections have same SCI, "
                                              "Ignoring [MACsecReceiveChannel] section from line %u",
                                              VAR_3->section->filename, VAR_3->section->line);
        if (VAR_5 < 0)
                return FUNC_4(VAR_4, VAR_5,
                                              "%s: Failed to store [MACsecReceiveChannel] section at hashmap, "
                                              "Ignoring [MACsecReceiveChannel] section from line %u",
                                              VAR_3->section->filename, VAR_3->section->line);
        return 0;
}
