
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int psz_host; int * psz_path; } ;
typedef TYPE_1__ vlc_url_t ;
typedef int vlc_object_t ;
struct TYPE_18__ {char* psz_realm; int psz_password; int psz_username; } ;
typedef TYPE_2__ vlc_credential ;
typedef scalar_t__ uint64_t ;
struct stat {scalar_t__ st_size; int st_mode; } ;
struct TYPE_19__ {int pf_seek; int pf_control; int pf_read; int pf_readdir; TYPE_4__* p_sys; int psz_url; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_20__ {int i_smb; scalar_t__ size; TYPE_1__ url; } ;
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
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,char**,int ,int ,int ,char*,int *) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (int ) ;
 char* FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*,char*,char*,int ,int ,...) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_3__*) ;
 TYPE_4__* FUNC_13 (int *,int,int) ;
 char* FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(vlc_object_t *VAR_13)
{
    stream_t *VAR_14 = (stream_t *)VAR_13;
    vlc_url_t VAR_15;
    vlc_credential VAR_16;
    char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    int VAR_20;
    uint64_t VAR_21;
    bool VAR_22;

    if (FUNC_8(&VAR_15, VAR_14->psz_url) != 0)
    {
        FUNC_7(&VAR_15);
        return VAR_8;
    }

    if (VAR_15.psz_path != ((void*)0))
    {
        VAR_17 = FUNC_14(VAR_15.psz_path);
        if (VAR_17 == ((void*)0))
        {
            FUNC_7(&VAR_15);
            return VAR_8;
        }
    }

    FUNC_11(&VAR_16, &VAR_15);
    VAR_19 = FUNC_6(VAR_14, "smb-domain");
    VAR_16.psz_realm = VAR_19;
    FUNC_10(&VAR_16, VAR_14, "smb-user", "smb-pwd", ((void*)0), ((void*)0));

    for (;;)
    {
        struct stat VAR_23;

        if (FUNC_3(VAR_14, &VAR_18,
                        VAR_16.psz_username, VAR_16.psz_password,
                        VAR_15.psz_host, VAR_17, ((void*)0) ) == -1 )
        {
            FUNC_9(&VAR_16);
            FUNC_1(VAR_19);
            FUNC_1(VAR_17);
            FUNC_7(&VAR_15);
            return VAR_9;
        }

        if (FUNC_4(VAR_18, &VAR_23) == 0)
        {
            VAR_22 = FUNC_0(VAR_23.st_mode) != 0;
            VAR_21 = VAR_23.st_size;
            break;
        }


        VAR_22 = 1;
        VAR_21 = 0;

        if (VAR_12 != VAR_2)
            break;

        VAR_12 = 0;
        if (!FUNC_10(&VAR_16, VAR_14, "smb-user",
                                "smb-pwd", VAR_6,
                                VAR_5, VAR_15.psz_host))
            break;
    }

    FUNC_12(&VAR_16, VAR_14);
    FUNC_9(&VAR_16);
    FUNC_1(VAR_19);
    FUNC_1(VAR_17);


    access_sys_t *VAR_24 = FUNC_13(VAR_13, 1, sizeof (*VAR_24));
    if (FUNC_5(VAR_24 == ((void*)0)))
    {
        FUNC_1(VAR_18);
        FUNC_7(&VAR_15);
        return VAR_9;
    }

    VAR_14->p_sys = VAR_24;

    if (VAR_22)
    {
        VAR_24->url = VAR_15;
        VAR_14->pf_readdir = VAR_1;
        VAR_14->pf_control = VAR_11;
        VAR_20 = -1;
    }
    else
    {
        VAR_14->pf_read = VAR_4;
        VAR_14->pf_control = VAR_0;
        VAR_14->pf_seek = VAR_7;
        VAR_20 = FUNC_2(VAR_18, VAR_3, 0);
        FUNC_7(&VAR_15);
    }
    FUNC_1(VAR_18);

    VAR_24->size = VAR_21;
    VAR_24->i_smb = VAR_20;

    return VAR_10;
}
