
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {char** ppsz_keys; int * global_map; int * map; } ;
typedef TYPE_1__ vlc_actions_t ;
typedef int name ;
typedef int libvlc_int_t ;
struct TYPE_7__ {TYPE_1__* actions; } ;
struct TYPE_6__ {char* psz; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int **,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int **,char*,int ) ;
 TYPE_4__* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int *,char*,char*,char*) ;
 TYPE_2__* VAR_9 ;
 int FUNC_8 (char*,int,char*,char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,char*,int ,int **) ;
 int FUNC_12 (int *,char*,int ) ;
 int FUNC_13 (int *,char*) ;
 int VAR_10 ;

int FUNC_14 (libvlc_int_t *VAR_11)
{
    FUNC_3(VAR_11 != ((void*)0));

    vlc_object_t *VAR_12 = FUNC_0(VAR_11);
    vlc_actions_t *VAR_13 = FUNC_6 (sizeof (*VAR_13) + (1 + VAR_0)
                      * sizeof (*VAR_13->ppsz_keys));

    if (FUNC_10(VAR_13 == ((void*)0)))
        return VAR_6;
    VAR_13->map = ((void*)0);
    VAR_13->global_map = ((void*)0);

    FUNC_12 (VAR_12, "key-pressed", VAR_8);
    FUNC_12 (VAR_12, "global-key-pressed", VAR_8);
    FUNC_12 (VAR_12, "key-action", VAR_8);


    for (size_t VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
    {

        if (VAR_14 > 0
         && FUNC_9 (VAR_9[VAR_14-1].psz, VAR_9[VAR_14].psz) >= 0)
        {
            FUNC_7 (VAR_11, "key-%s and key-%s are not ordered properly",
                     VAR_9[VAR_14-1].psz, VAR_9[VAR_14].psz);
            FUNC_1 ();
        }

        VAR_13->ppsz_keys[VAR_14] = VAR_9[VAR_14].psz;

        char VAR_15[12 + VAR_5];

        FUNC_8 (VAR_15, sizeof (VAR_15), "global-key-%s", VAR_9[VAR_14].psz);
        FUNC_4 (VAR_12, &VAR_13->map, VAR_15 + 7, VAR_9[VAR_14].id);
        FUNC_4 (VAR_12, &VAR_13->global_map, VAR_15, VAR_9[VAR_14].id);
    }
    VAR_13->ppsz_keys[VAR_0] = ((void*)0);


    FUNC_2 (&VAR_13->map, VAR_3, VAR_2,
                         FUNC_13 (VAR_12, "hotkeys-x-wheel-mode"));
    FUNC_2 (&VAR_13->map, VAR_4, VAR_1,
                         FUNC_13 (VAR_12, "hotkeys-y-wheel-mode"));

    FUNC_5(VAR_11)->actions = VAR_13;
    FUNC_11 (VAR_12, "key-pressed", VAR_10, &VAR_13->map);
    FUNC_11 (VAR_12, "global-key-pressed", VAR_10,
                     &VAR_13->global_map);
    return VAR_7;
}
