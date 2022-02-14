
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_enumerate {int enumerator; int devices_list; } ;


 int FUNC_0 (struct udev_enumerate*) ;
 struct udev_enumerate* FUNC_1 (struct udev_enumerate*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct udev_enumerate *FUNC_4(struct udev_enumerate *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_3(VAR_0->devices_list);
        FUNC_2(VAR_0->enumerator);
        return FUNC_1(VAR_0);
}
