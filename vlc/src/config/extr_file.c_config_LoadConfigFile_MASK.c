
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int ssize_t ;
struct TYPE_8__ {float f; char* psz; int i; } ;
struct TYPE_7__ {int i; } ;
struct TYPE_6__ {int i; } ;
struct TYPE_9__ {TYPE_3__ value; TYPE_2__ min; TYPE_1__ max; int i_type; scalar_t__ b_removed; scalar_t__ b_unsaveable; } ;
typedef TYPE_4__ module_config_t ;
typedef scalar_t__ locale_t ;
typedef int int64_t ;
typedef int FILE ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (char const*) ;
 int * FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (char**,size_t*,int *) ;
 int * FUNC_11 (char*,char,int) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 int FUNC_13 (int *,char*,int ) ;
 int FUNC_14 (int *,char*,char const*,char const*,int ) ;
 scalar_t__ FUNC_15 (int ,char*,int *) ;
 int FUNC_16 (int *) ;
 char* FUNC_17 (char*,char) ;
 char* FUNC_18 (char const*) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (char const*) ;

int FUNC_24( vlc_object_t *VAR_5 )
{
    FILE *VAR_6;

    VAR_6 = FUNC_4 (VAR_5);
    if (VAR_6 == ((void*)0))
        return VAR_2;


    char VAR_7[3];
    if (FUNC_7 (VAR_7, 1, 3, VAR_6) != 3 || FUNC_12 (VAR_7, "\xEF\xBB\xBF", 3))
        FUNC_16 (VAR_6);

    char *VAR_8 = ((void*)0);
    size_t VAR_9;
    ssize_t VAR_10;


    locale_t VAR_11 = FUNC_15 (VAR_1, "C", ((void*)0));
    locale_t VAR_12 = FUNC_19 (VAR_11);

    FUNC_21 (&VAR_3);
    while ((VAR_10 = FUNC_10 (&VAR_8, &VAR_9, VAR_6)) != -1)
    {
        VAR_8[VAR_10 - 1] = '\0';


        if (FUNC_11 ("#[", VAR_8[0], 3) != ((void*)0))
            continue;


        const char *VAR_13 = VAR_8;

        char *VAR_14 = FUNC_17 (VAR_8, '=');
        if (VAR_14 == ((void*)0))
            continue;
        *VAR_14 = '\0';

        module_config_t *VAR_15 = FUNC_3(VAR_13);
        if (VAR_15 == ((void*)0))
            continue;


        if (VAR_15->b_unsaveable)
            continue;

        if (VAR_15->b_removed)
            continue;

        const char *VAR_16 = VAR_14 + 1;
        switch (FUNC_0(VAR_15->i_type))
        {
            case 130:
            case 128:
            {
                int64_t VAR_17;

                VAR_4 = 0;
                VAR_17 = FUNC_23 (VAR_16);
                if ((VAR_17 > VAR_15->max.i) || (VAR_17 < VAR_15->min.i))
                    VAR_4 = VAR_0;
                if (VAR_4)
                    FUNC_14 (VAR_5, "Integer value (%s) for %s: %s",
                              VAR_16, VAR_13,
                              FUNC_22(VAR_4));
                else
                    VAR_15->value.i = VAR_17;
                break;
            }

            case 129:
                if (!*VAR_16)
                    break;
                VAR_15->value.f = (float)FUNC_1 (VAR_16);
                break;

            default:
                FUNC_8 (VAR_15->value.psz);
                VAR_15->value.psz = FUNC_18 (VAR_16);
                break;
        }
    }
    FUNC_20 (&VAR_3);
    FUNC_8 (VAR_8);

    if (FUNC_6 (VAR_6))
    {
        FUNC_13 (VAR_5, "error reading configuration: %s",
                 FUNC_22(VAR_4));
        FUNC_2 (VAR_6);
    }
    FUNC_5 (VAR_6);

    if (VAR_11 != (locale_t)0)
    {
        FUNC_19 (VAR_12);
        FUNC_9 (VAR_11);
    }
    return 0;
}
