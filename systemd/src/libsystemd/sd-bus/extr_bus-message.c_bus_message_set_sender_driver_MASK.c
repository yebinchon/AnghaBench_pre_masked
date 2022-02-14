
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* unique_name; int well_known_names_driver; int mask; } ;
struct TYPE_8__ {char* sender; int creds_mask; TYPE_1__ creds; } ;
typedef TYPE_2__ sd_bus_message ;
typedef TYPE_2__ sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(sd_bus *VAR_2, sd_bus_message *VAR_3) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_3->sender = VAR_3->creds.unique_name = (char*) "org.freedesktop.DBus";
        VAR_3->creds.well_known_names_driver = 1;
        VAR_3->creds.mask |= (VAR_0|VAR_1) & VAR_2->creds_mask;
}
