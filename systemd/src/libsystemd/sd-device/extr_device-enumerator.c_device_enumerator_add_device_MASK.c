
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ n_devices; int * devices; int n_allocated; } ;
typedef TYPE_1__ sd_device_enumerator ;
typedef TYPE_1__ sd_device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(sd_device_enumerator *VAR_2, sd_device *VAR_3) {
        FUNC_1(VAR_2, -VAR_0);
        FUNC_1(VAR_3, -VAR_0);

        if (!FUNC_0(VAR_2->devices, VAR_2->n_allocated, VAR_2->n_devices + 1))
                return -VAR_1;

        VAR_2->devices[VAR_2->n_devices++] = FUNC_2(VAR_3);

        return 0;
}
