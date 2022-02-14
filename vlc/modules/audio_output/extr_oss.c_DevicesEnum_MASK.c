
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numaudios; int dev; int caps; int name; int devnode; int enabled; int license; int versionnum; int version; int product; } ;
typedef TYPE_1__ oss_sysinfo ;
typedef TYPE_1__ oss_audioinfo ;
typedef int audio_output_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int,int ,TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9 (audio_output_t *VAR_7)
{
    int VAR_8 = FUNC_6 ("/dev/dsp", VAR_0);
    if (VAR_8 == -1)
        return -1;

    oss_sysinfo VAR_9;
    int VAR_10 = -1;

    if (FUNC_1 (VAR_8, VAR_5, &VAR_9) < 0)
    {
        FUNC_3 (VAR_7, "cannot get system infos: %s", FUNC_7(VAR_6));
        goto out;
    }

    FUNC_2 (VAR_7, "using %s version %s (0x%06X) under %s", VAR_9.product,
             VAR_9.version, VAR_9.versionnum, VAR_9.license);

    for (int VAR_11 = 0; VAR_11 < VAR_9.numaudios; VAR_11++)
    {
        oss_audioinfo VAR_12 = { .dev = VAR_11 };

        if (FUNC_1 (VAR_8, VAR_4, &VAR_12) < 0)
        {
            FUNC_4 (VAR_7, "cannot get device %d infos: %s", VAR_11,
                      FUNC_8(VAR_6));
            continue;
        }
        if (VAR_12.caps & (VAR_1|VAR_2))
            continue;
        if (!(VAR_12.caps & VAR_3))
            continue;
        if (!VAR_12.enabled)
            continue;

        FUNC_0 (VAR_7, VAR_12.devnode, VAR_12.name);
        VAR_10++;
    }
out:
    FUNC_5 (VAR_8);
    return VAR_10;
}
