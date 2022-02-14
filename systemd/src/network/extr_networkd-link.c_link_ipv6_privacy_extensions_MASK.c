
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* network; } ;
struct TYPE_5__ {int ipv6_privacy_extensions; } ;
typedef TYPE_2__ Link ;
typedef int IPv6PrivacyExtensions ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;

__attribute__((used)) static IPv6PrivacyExtensions FUNC_2(Link *VAR_2) {
        FUNC_0(VAR_2);

        if (!FUNC_1())
                return VAR_1;

        if (VAR_2->flags & VAR_0)
                return VAR_1;

        if (!VAR_2->network)
                return VAR_1;

        return VAR_2->network->ipv6_privacy_extensions;
}
