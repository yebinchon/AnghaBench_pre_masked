
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct TYPE_6__ {int smb2_type; } ;
struct smb2dirent {int name; TYPE_1__ st; } ;
struct access_sys {int smb2dir; int smb2; } ;
struct TYPE_7__ {struct access_sys* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef int input_item_node_t ;


 int FUNC_0 (TYPE_2__*,struct vlc_readdir_helper*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (int ) ;
 struct smb2dirent* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vlc_readdir_helper*,int) ;
 int FUNC_4 (struct vlc_readdir_helper*,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_5(stream_t *VAR_4, input_item_node_t *VAR_5)
{
    struct access_sys *VAR_6 = VAR_4->p_sys;
    struct smb2dirent *VAR_7;
    int VAR_8 = VAR_3;
    FUNC_1(VAR_6->smb2dir);

    struct vlc_readdir_helper VAR_9;
    FUNC_4(&VAR_9, VAR_4, VAR_5);

    while (VAR_8 == VAR_3
        && (VAR_7 = FUNC_2(VAR_6->smb2, VAR_6->smb2dir)) != ((void*)0))
    {
        int VAR_10;
        switch (VAR_7->st.smb2_type)
        {
        case 128:
            VAR_10 = VAR_1;
            break;
        case 129:
            VAR_10 = VAR_0;
            break;
        default:
            VAR_10 = VAR_2;
            break;
        }
        VAR_8 = FUNC_0(VAR_4, &VAR_9, VAR_7->name, VAR_10);
    }

    FUNC_3(&VAR_9, VAR_8 == VAR_3);

    return VAR_8;
}
