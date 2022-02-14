
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int psz_host; int * psz_path; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int vlc_object_t ;
struct TYPE_17__ {char* psz_realm; int psz_password; int psz_username; } ;
typedef TYPE_2__ vlc_credential ;
typedef scalar_t__ uint64_t ;
struct stat {scalar_t__ st_size; int st_mode; } ;
struct TYPE_18__ {int psz_location; int pf_seek; int pf_control; int pf_read; int pf_readdir; TYPE_4__* p_sys; int psz_url; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_19__ {int i_smb; scalar_t__ size; TYPE_1__ url; } ;
typedef TYPE_4__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int VAR_13 ;
 char* FUNC_3 (char*,int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,struct stat*) ;
 scalar_t__ FUNC_8 (int ) ;
 char* FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,TYPE_3__*,char*,char*,int ,int ,...) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_15 (TYPE_2__*,TYPE_3__*) ;
 TYPE_4__* FUNC_16 (int *,int,int) ;
 int FUNC_17 (scalar_t__) ;
 char* FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(vlc_object_t *VAR_14)
{
    stream_t *VAR_15 = (stream_t *)VAR_14;
    vlc_url_t VAR_16;
    vlc_credential VAR_17;
    char *VAR_18 = ((void*)0), *VAR_19, *VAR_20 = ((void*)0);
    int VAR_21;
    uint64_t VAR_22;
    bool VAR_23;

    if (FUNC_4(VAR_13, 0))
        return VAR_8;

    if (FUNC_11(&VAR_16, VAR_15->psz_url) != 0)
    {
        FUNC_10(&VAR_16);
        return VAR_8;
    }

    if (VAR_16.psz_path != ((void*)0))
    {
        VAR_18 = FUNC_18(VAR_16.psz_path);
        if (VAR_18 == ((void*)0))
        {
            FUNC_10(&VAR_16);
            return VAR_8;
        }
    }

    FUNC_14(&VAR_17, &VAR_16);
    VAR_20 = FUNC_9(VAR_15, "smb-domain");
    VAR_17.psz_realm = VAR_20;
    FUNC_13(&VAR_17, VAR_15, "smb-user", "smb-pwd", ((void*)0), ((void*)0));

    for (;;)
    {
        struct stat VAR_24;

        VAR_19 = FUNC_3(VAR_17.psz_realm, VAR_17.psz_username,
                          VAR_17.psz_password, VAR_16.psz_host,
                          VAR_18, ((void*)0));
        if (VAR_19 == ((void*)0))
        {
            FUNC_12(&VAR_17);
            FUNC_1(VAR_20);
            FUNC_1(VAR_18);
            FUNC_10(&VAR_16);
            return VAR_9;
        }

        if (FUNC_7(VAR_19, &VAR_24) == 0)
        {
            VAR_23 = FUNC_0(VAR_24.st_mode) != 0;
            VAR_22 = VAR_24.st_size;
            break;
        }


        VAR_23 = 1;
        VAR_22 = 0;

        if (VAR_12 != VAR_2)
            break;

        VAR_12 = 0;
        if (!FUNC_13(&VAR_17, VAR_15, "smb-user",
                                "smb-pwd", VAR_6,
                                VAR_5, VAR_16.psz_host))
            break;
    }

    FUNC_15(&VAR_17, VAR_15);
    FUNC_12(&VAR_17);
    FUNC_1(VAR_20);
    FUNC_1(VAR_18);


    access_sys_t *VAR_25 = FUNC_16(VAR_14, 1, sizeof (*VAR_25));
    if (FUNC_8(VAR_25 == ((void*)0)))
    {
        FUNC_1(VAR_19);
        FUNC_10(&VAR_16);
        return VAR_9;
    }

    VAR_15->p_sys = VAR_25;

    if (VAR_23)
    {
        VAR_25->url = VAR_16;
        VAR_15->pf_readdir = VAR_1;
        VAR_15->pf_control = VAR_11;
        VAR_21 = FUNC_6(VAR_19);
        if (VAR_21 < 0)
            FUNC_10(&VAR_25->url);
    }
    else
    {
        VAR_15->pf_read = VAR_4;
        VAR_15->pf_control = VAR_0;
        VAR_15->pf_seek = VAR_7;
        VAR_21 = FUNC_5(VAR_19, VAR_3, 0);
        FUNC_10(&VAR_16);
    }
    FUNC_1(VAR_19);

    if (VAR_21 < 0)
    {
        FUNC_2(VAR_14, "cannot open %s: %s",
                VAR_15->psz_location, FUNC_17(VAR_12));
        return VAR_8;
    }

    VAR_25->size = VAR_22;
    VAR_25->i_smb = VAR_21;

    return VAR_10;
}
