
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;
 char* FUNC_2 (struct udev_device*) ;
 char* FUNC_3 (struct udev_device*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int ) ;
 char* FUNC_6 (char const*,char const*) ;

__attribute__((used)) static char *FUNC_7 (struct udev_device *VAR_1)
{
    const char *VAR_2 = FUNC_2 (VAR_1);
    const char *VAR_3;

    VAR_3 = FUNC_3 (VAR_1, "ID_CDROM");
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_3 = FUNC_3 (VAR_1, "ID_CDROM_MEDIA_STATE");
    if (VAR_3 == ((void*)0))
    {
        int VAR_4 = FUNC_5 (VAR_2, VAR_0);
        if (VAR_4 != -1)
            FUNC_4 (VAR_4);
        return ((void*)0);
    }
    if (!FUNC_1 (VAR_3, "blank"))
        return ((void*)0);

    const char *VAR_5 = ((void*)0);
    VAR_3 = FUNC_3 (VAR_1,
                                          "ID_CDROM_MEDIA_TRACK_COUNT_AUDIO");
    if (VAR_3 && FUNC_0 (VAR_3))
        VAR_5 = "cdda";
    VAR_3 = FUNC_3 (VAR_1, "ID_CDROM_MEDIA_DVD");
    if (VAR_3 && FUNC_0 (VAR_3))
        VAR_5 = "dvd";

    VAR_3 = FUNC_3 (VAR_1, "ID_CDROM_MEDIA_BD");
    if (VAR_3 && FUNC_0 (VAR_3))
        VAR_5 = "bluray";
    if (VAR_5 == ((void*)0))
        return ((void*)0);

    return FUNC_6 (VAR_2, VAR_5);
}
