
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ifreq {scalar_t__ kind; struct ifreq* ifname; int ifr_name; int ifr_flags; } ;
struct TYPE_4__ {scalar_t__ vnet_hdr; scalar_t__ multi_queue; int packet_info; } ;
typedef TYPE_1__ TunTap ;
typedef struct ifreq NetDev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_0 (struct ifreq*) ;
 TYPE_1__* FUNC_1 (struct ifreq*) ;
 int FUNC_2 (struct ifreq*) ;
 int FUNC_3 (int ,struct ifreq*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(NetDev *VAR_7, struct ifreq *VAR_8) {
        TunTap *VAR_9;

        FUNC_2(VAR_7);
        FUNC_2(VAR_7->ifname);
        FUNC_2(VAR_8);

        if (VAR_7->kind == VAR_6) {
                VAR_9 = FUNC_0(VAR_7);
                VAR_8->ifr_flags |= VAR_2;
        } else {
                VAR_9 = FUNC_1(VAR_7);
                VAR_8->ifr_flags |= VAR_3;
        }

        if (!VAR_9->packet_info)
                VAR_8->ifr_flags |= VAR_1;

        if (VAR_9->multi_queue)
                VAR_8->ifr_flags |= VAR_0;

        if (VAR_9->vnet_hdr)
                VAR_8->ifr_flags |= VAR_4;

        FUNC_3(VAR_8->ifr_name, VAR_7->ifname, VAR_5-1);

        return 0;
}
