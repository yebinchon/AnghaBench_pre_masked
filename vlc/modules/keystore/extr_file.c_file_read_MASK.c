
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int psz_file; } ;
typedef TYPE_1__ vlc_keystore_sys ;
struct TYPE_7__ {char** ppsz_values; int p_secret; int i_secret_len; } ;
typedef TYPE_2__ vlc_keystore_entry ;
struct TYPE_8__ {TYPE_1__* p_sys; } ;
typedef TYPE_3__ vlc_keystore ;
struct ks_list {int dummy; } ;
typedef int ssize_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char**,size_t*,int *) ;
 TYPE_2__* FUNC_3 (struct ks_list*) ;
 int FUNC_4 (char*) ;
 size_t FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(vlc_keystore *VAR_2, FILE *VAR_3, int VAR_4, struct ks_list *VAR_5)
{
    vlc_keystore_sys *VAR_6 = VAR_2->p_sys;
    char *VAR_7 = ((void*)0);
    size_t VAR_8 = 0;
    ssize_t VAR_9;
    bool VAR_10 = 0;

    while ((VAR_9 = FUNC_2(&VAR_7, &VAR_8, VAR_3)) != -1)
    {
        char *VAR_11 = VAR_7;
        if (*(VAR_11++) != '{')
        {
            FUNC_1();
            goto end;
        }

        vlc_keystore_entry *VAR_12 = FUNC_3(VAR_5);
        if (!VAR_12)
            goto end;

        bool VAR_13 = 0;
        while (*VAR_11 != '\0' && !VAR_13)
        {
            int VAR_14;
            char *VAR_15, *VAR_16;
            size_t VAR_17;


            VAR_17 = FUNC_5(VAR_11, ":");
            if (!VAR_17 || VAR_11[VAR_17] == '\0')
                goto end;

            VAR_11[VAR_17] = '\0';
            VAR_15 = VAR_11;
            VAR_14 = FUNC_4(VAR_15);
            if (VAR_14 == -1 || VAR_14 >= VAR_0)
                goto end;
            VAR_11 += VAR_17 + 1;


            VAR_17 = FUNC_5(VAR_11, ",}");
            if (!VAR_17 || VAR_11[VAR_17] == '\0')
                goto end;

            if (VAR_11[VAR_17] == '}')
                VAR_13 = 1;

            VAR_11[VAR_17] = '\0';
            VAR_16 = FUNC_7(VAR_11);
            if (!VAR_16)
                goto end;
            VAR_11 += VAR_17 + 1;

            VAR_12->ppsz_values[VAR_14] = VAR_16;
        }

        if (*VAR_11 == '\0' || *VAR_11 != ':')
            goto end;

        VAR_12->i_secret_len = FUNC_8(&VAR_12->p_secret, VAR_11 + 1);
        if (!VAR_12->p_secret)
            goto end;
    }

    VAR_10 = 1;

end:
    FUNC_0(VAR_7);
    if (!VAR_10)
    {
        if (FUNC_6(VAR_4))
            FUNC_9(VAR_6->psz_file);
    }
    return VAR_1;
}
