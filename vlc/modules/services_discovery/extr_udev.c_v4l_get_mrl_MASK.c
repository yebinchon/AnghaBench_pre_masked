
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;


 int FUNC_0 (char**,char*,char const*) ;
 char* FUNC_1 (struct udev_device*) ;
 int FUNC_2 (struct udev_device*) ;
 scalar_t__ FUNC_3 (struct udev_device*) ;

__attribute__((used)) static char *FUNC_4 (struct udev_device *VAR_0)
{

    if (FUNC_3 (VAR_0) || !FUNC_2 (VAR_0))
        return ((void*)0);

    const char *VAR_1 = FUNC_1 (VAR_0);
    char *VAR_2;

    if (FUNC_0 (&VAR_2, "v4l2://%s", VAR_1) == -1)
        VAR_2 = ((void*)0);
    return VAR_2;
}
