
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ packet_number; scalar_t__ key_len; } ;
struct TYPE_7__ {TYPE_2__* section; TYPE_4__ sa; struct TYPE_7__* macsec; } ;
typedef TYPE_1__ TransmitAssociation ;
struct TYPE_8__ {int line; int filename; } ;
typedef int NetDev ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,char*,int ,int ) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(TransmitAssociation *VAR_1) {
        NetDev *VAR_2;
        int VAR_3;

        FUNC_2(VAR_1);
        FUNC_2(VAR_1->macsec);

        VAR_2 = FUNC_0(VAR_1->macsec);

        if (FUNC_5(VAR_1->section))
                return -VAR_0;

        if (VAR_1->sa.packet_number == 0)
                return FUNC_3(VAR_2, FUNC_1(VAR_0),
                                              "%s: MACsec transmit secure association without PacketNumber= configured. "
                                              "Ignoring [MACsecTransmitAssociation] section from line %u",
                                              VAR_1->section->filename, VAR_1->section->line);

        VAR_3 = FUNC_4(VAR_2, &VAR_1->sa);
        if (VAR_3 < 0)
                return VAR_3;

        if (VAR_1->sa.key_len <= 0)
                return FUNC_3(VAR_2, FUNC_1(VAR_0),
                                              "%s: MACsec transmit secure association without key configured. "
                                              "Ignoring [MACsecTransmitAssociation] section from line %u",
                                              VAR_1->section->filename, VAR_1->section->line);

        return 0;
}
