
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ i_cat; char* psz_name; int psz_longname; } ;
typedef TYPE_1__ libvlc_media_discoverer_description_t ;
typedef scalar_t__ libvlc_media_discoverer_category_t ;
typedef int libvlc_instance_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int *,scalar_t__,TYPE_1__***) ;
 int FUNC_3 (TYPE_1__**,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,...) ;

int
FUNC_10(int VAR_5, char *VAR_6[])
{
    FUNC_8();

    char *VAR_7 = VAR_5 > 1 ? VAR_6[1] : ((void*)0);

    libvlc_instance_t *VAR_8 = FUNC_4(VAR_4,
                                          VAR_3);
    FUNC_1(VAR_8 != ((void*)0));

    if (VAR_7 != ((void*)0))
    {

        FUNC_0(0);
        FUNC_7(VAR_8, VAR_7, 1);
        FUNC_5(VAR_8);
        return 0;
    }

    for(libvlc_media_discoverer_category_t VAR_9 = VAR_0;
        VAR_9 <= VAR_2; VAR_9 ++)
    {
        FUNC_9("== getting list of media_discoverer for %d category ==\n", VAR_9);

        libvlc_media_discoverer_description_t **VAR_10;
        ssize_t VAR_11 =
            FUNC_2(VAR_8, VAR_9, &VAR_10);
        if (VAR_11 <= 0)
        {
            FUNC_9("warn: no discoverers (not critical)\n");
            continue;
        }
        FUNC_1(VAR_10 != ((void*)0));

        for (unsigned int VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12)
        {
            libvlc_media_discoverer_description_t *VAR_13 = VAR_10[VAR_12];

            FUNC_1(VAR_9 == VAR_13->i_cat);
            FUNC_9("= discoverer: name: '%s', longname: '%s' =\n",
                     VAR_13->psz_name, VAR_13->psz_longname);
        }
        FUNC_3(VAR_10, VAR_11);
    }
    FUNC_5(VAR_8);

    return 0;
}
