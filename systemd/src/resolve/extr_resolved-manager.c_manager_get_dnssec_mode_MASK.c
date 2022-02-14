
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dnssec_mode; } ;
typedef TYPE_1__ Manager ;
typedef scalar_t__ DnssecMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

DnssecMode FUNC_1(Manager *VAR_2) {
        FUNC_0(VAR_2);

        if (VAR_2->dnssec_mode != VAR_1)
                return VAR_2->dnssec_mode;

        return VAR_0;
}
