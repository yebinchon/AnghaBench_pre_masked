
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int scan_uptodate; scalar_t__ type; size_t n_devices; int * devices; scalar_t__ match_parent; int match_tag; } ;
typedef TYPE_1__ sd_device_enumerator ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,size_t,int ) ;

int FUNC_8(sd_device_enumerator *VAR_2) {
        int VAR_3 = 0, VAR_4;
        size_t VAR_5;

        FUNC_0(VAR_2);

        if (VAR_2->scan_uptodate &&
            VAR_2->type == VAR_0)
                return 0;

        for (VAR_5 = 0; VAR_5 < VAR_2->n_devices; VAR_5++)
                FUNC_5(VAR_2->devices[VAR_5]);

        VAR_2->n_devices = 0;

        if (!FUNC_6(VAR_2->match_tag)) {
                VAR_4 = FUNC_4(VAR_2);
                if (VAR_4 < 0)
                        VAR_3 = VAR_4;
        } else if (VAR_2->match_parent) {
                VAR_4 = FUNC_3(VAR_2);
                if (VAR_4 < 0)
                        VAR_3 = VAR_4;
        } else {
                VAR_4 = FUNC_2(VAR_2);
                if (VAR_4 < 0)
                        VAR_3 = VAR_4;
        }

        FUNC_7(VAR_2->devices, VAR_2->n_devices, VAR_1);
        FUNC_1(VAR_2);

        VAR_2->scan_uptodate = 1;
        VAR_2->type = VAR_0;

        return VAR_3;
}
