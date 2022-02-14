
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t n_devices; int match_parent; int match_tag; int match_sysname; int match_property; int nomatch_sysattr; int match_sysattr; int nomatch_subsystem; int match_subsystem; int * devices; } ;
typedef TYPE_1__ sd_device_enumerator ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static sd_device_enumerator *FUNC_6(sd_device_enumerator *VAR_0) {
        size_t VAR_1;

        FUNC_0(VAR_0);

        for (VAR_1 = 0; VAR_1 < VAR_0->n_devices; VAR_1++)
                FUNC_4(VAR_0->devices[VAR_1]);

        FUNC_1(VAR_0->devices);
        FUNC_5(VAR_0->match_subsystem);
        FUNC_5(VAR_0->nomatch_subsystem);
        FUNC_2(VAR_0->match_sysattr);
        FUNC_2(VAR_0->nomatch_sysattr);
        FUNC_2(VAR_0->match_property);
        FUNC_5(VAR_0->match_sysname);
        FUNC_5(VAR_0->match_tag);
        FUNC_5(VAR_0->match_parent);

        return FUNC_3(VAR_0);
}
