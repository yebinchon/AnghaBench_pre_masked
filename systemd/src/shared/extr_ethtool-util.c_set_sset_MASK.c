
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifreq {void* ifr_data; } ;
struct TYPE_4__ {scalar_t__ cmd; scalar_t__ link_mode_masks_nwords; int eth_tp_mdix_ctrl; int eth_tp_mdix; int mdio_support; int autoneg; int phy_address; int port; int duplex; int speed; } ;
struct TYPE_3__ {int * lp_advertising; int * advertising; int * supported; } ;
struct ethtool_link_usettings {TYPE_2__ base; TYPE_1__ link_modes; } ;
struct ethtool_cmd {int eth_tp_mdix_ctrl; int eth_tp_mdix; int mdio_support; int autoneg; int phy_address; int port; int duplex; int lp_advertising; int advertising; int supported; int cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ethtool_cmd*,int ) ;
 int FUNC_1 (int,int ,struct ifreq*) ;

__attribute__((used)) static int FUNC_2(int VAR_5, struct ifreq *VAR_6, const struct ethtool_link_usettings *VAR_7) {
        struct ethtool_cmd VAR_8 = {
                .cmd = VAR_2,
        };
        int VAR_9;

        if (VAR_7->base.cmd != VAR_1 || VAR_7->base.link_mode_masks_nwords <= 0)
                return -VAR_0;

        VAR_8.supported = VAR_7->link_modes.supported[0];
        VAR_8.advertising = VAR_7->link_modes.advertising[0];
        VAR_8.lp_advertising = VAR_7->link_modes.lp_advertising[0];

        FUNC_0(&VAR_8, VAR_7->base.speed);

        VAR_8.duplex = VAR_7->base.duplex;
        VAR_8.port = VAR_7->base.port;
        VAR_8.phy_address = VAR_7->base.phy_address;
        VAR_8.autoneg = VAR_7->base.autoneg;
        VAR_8.mdio_support = VAR_7->base.mdio_support;
        VAR_8.eth_tp_mdix = VAR_7->base.eth_tp_mdix;
        VAR_8.eth_tp_mdix_ctrl = VAR_7->base.eth_tp_mdix_ctrl;

        VAR_6->ifr_data = (void *) &VAR_8;

        VAR_9 = FUNC_1(VAR_5, VAR_3, VAR_6);
        if (VAR_9 < 0)
                return -VAR_4;

        return 0;
}
