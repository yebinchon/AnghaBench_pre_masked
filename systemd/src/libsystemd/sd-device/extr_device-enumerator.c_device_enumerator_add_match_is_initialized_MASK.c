
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int match_allow_uninitialized; int scan_uptodate; } ;
typedef TYPE_1__ sd_device_enumerator ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(sd_device_enumerator *VAR_1) {
        FUNC_0(VAR_1, -VAR_0);

        VAR_1->match_allow_uninitialized = 0;

        VAR_1->scan_uptodate = 0;

        return 0;
}
