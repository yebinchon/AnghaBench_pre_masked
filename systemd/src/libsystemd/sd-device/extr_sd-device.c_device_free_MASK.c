
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int devlinks; int tags; int sysattrs; int sysattr_values; int properties_db; int properties; int properties_nulstr; int properties_strv; int id_filename; int driver; int driver_subsystem; int subsystem; int devname; int devtype; int sysname; int syspath; int parent; } ;
typedef TYPE_1__ sd_device ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static sd_device *FUNC_7(sd_device *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_5(VAR_0->parent);
        FUNC_1(VAR_0->syspath);
        FUNC_1(VAR_0->sysname);
        FUNC_1(VAR_0->devtype);
        FUNC_1(VAR_0->devname);
        FUNC_1(VAR_0->subsystem);
        FUNC_1(VAR_0->driver_subsystem);
        FUNC_1(VAR_0->driver);
        FUNC_1(VAR_0->id_filename);
        FUNC_1(VAR_0->properties_strv);
        FUNC_1(VAR_0->properties_nulstr);

        FUNC_4(VAR_0->properties);
        FUNC_4(VAR_0->properties_db);
        FUNC_2(VAR_0->sysattr_values);
        FUNC_6(VAR_0->sysattrs);
        FUNC_6(VAR_0->tags);
        FUNC_6(VAR_0->devlinks);

        return FUNC_3(VAR_0);
}
