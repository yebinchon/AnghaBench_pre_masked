
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* section; int preshared_key_file; int preshared_key; int public_key; int wireguard; } ;
typedef TYPE_1__ WireguardPeer ;
struct TYPE_5__ {int line; int filename; } ;
typedef int NetDev ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,char*,int ,int ,...) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(WireguardPeer *VAR_1) {
        NetDev *VAR_2 = FUNC_0(VAR_1->wireguard);
        int VAR_3;

        if (FUNC_4(VAR_1->section))
                return -VAR_0;

        if (FUNC_2(VAR_1->public_key))
                return FUNC_3(VAR_2, FUNC_1(VAR_0),
                                              "%s: WireGuardPeer section without PublicKey= configured. "
                                              "Ignoring [WireGuardPeer] section from line %u.",
                                              VAR_1->section->filename, VAR_1->section->line);

        VAR_3 = FUNC_5(VAR_1->preshared_key_file, VAR_1->preshared_key);
        if (VAR_3 < 0)
                return FUNC_3(VAR_2, VAR_3,
                                              "%s: Failed to read preshared key from '%s'. "
                                              "Ignoring [WireGuardPeer] section from line %u.",
                                              VAR_1->section->filename, VAR_1->preshared_key_file,
                                              VAR_1->section->line);

        return 0;
}
