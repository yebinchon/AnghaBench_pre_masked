
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct nfsdirent {int type; int name; } ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_node_t ;
struct TYPE_6__ {int encoded_url; int p_nfsdir; int p_nfs; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 char* FUNC_0 (int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 struct nfsdirent* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct vlc_readdir_helper*,char*,int *,int ,int,int ) ;
 int FUNC_5 (struct vlc_readdir_helper*,int) ;
 int FUNC_6 (struct vlc_readdir_helper*,TYPE_1__*,int *) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(stream_t *VAR_6, input_item_node_t *VAR_7)
{
    access_sys_t *VAR_8 = VAR_6->p_sys;
    struct nfsdirent *VAR_9;
    int VAR_10 = VAR_5;
    FUNC_1(VAR_8->p_nfsdir);

    struct vlc_readdir_helper VAR_11;
    FUNC_6(&VAR_11, VAR_6, VAR_7);

    while (VAR_10 == VAR_5
        && (VAR_9 = FUNC_3(VAR_8->p_nfs, VAR_8->p_nfsdir)) != ((void*)0))
    {
        char *VAR_12 = FUNC_7(VAR_9->name);
        if (VAR_12 == ((void*)0))
        {
            VAR_10 = VAR_4;
            break;
        }
        char *VAR_13 = FUNC_0(&VAR_8->encoded_url, VAR_12);
        FUNC_2(VAR_12);
        if (VAR_13 == ((void*)0))
        {
            VAR_10 = VAR_4;
            break;
        }

        int VAR_14;
        switch (VAR_9->type)
        {
        case 128:
            VAR_14 = VAR_2;
            break;
        case 129:
            VAR_14 = VAR_1;
            break;
        default:
            VAR_14 = VAR_3;
        }
        VAR_10 = FUNC_4(&VAR_11, VAR_13, ((void*)0), VAR_9->name,
                                           VAR_14, VAR_0);
        FUNC_2(VAR_13);
    }

    FUNC_5(&VAR_11, VAR_10 == VAR_5);

    return VAR_10;
}
