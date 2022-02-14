
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_hwdb {int properties_list; int hwdb; } ;


 int FUNC_0 (struct udev_hwdb*) ;
 struct udev_hwdb* FUNC_1 (struct udev_hwdb*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct udev_hwdb *FUNC_4(struct udev_hwdb *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_2(VAR_0->hwdb);
        FUNC_3(VAR_0->properties_list);
        return FUNC_1(VAR_0);
}
