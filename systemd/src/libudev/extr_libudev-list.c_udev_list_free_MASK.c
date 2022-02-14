
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_list {int unique_entries; } ;


 int FUNC_0 (int ) ;
 struct udev_list* FUNC_1 (struct udev_list*) ;
 int FUNC_2 (struct udev_list*) ;

struct udev_list *FUNC_3(struct udev_list *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_2(VAR_0);
        FUNC_0(VAR_0->unique_entries);

        return FUNC_1(VAR_0);
}
