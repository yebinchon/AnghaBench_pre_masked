
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;


 int * FUNC_0 (char const*,char*) ;
 char* FUNC_1 (struct udev_device*,char*) ;

__attribute__((used)) static bool FUNC_2 (struct udev_device *VAR_0)
{
    const char *VAR_1;

    VAR_1 = FUNC_1 (VAR_0, "ID_V4L_CAPABILITIES");
    return (VAR_1 != ((void*)0)) && (FUNC_0 (VAR_1, ":capture:") != ((void*)0));
}
