
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
typedef int input_item_node_t ;
struct TYPE_7__ {scalar_t__ i_count; char** ppsz_names; } ;
struct TYPE_8__ {TYPE_1__ exports; } ;
struct TYPE_10__ {int encoded_url; TYPE_2__ res; int * p_mount; } ;
typedef TYPE_4__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vlc_readdir_helper*,char*,int *,char*,int ,int ) ;
 int FUNC_4 (struct vlc_readdir_helper*,int) ;
 int FUNC_5 (struct vlc_readdir_helper*,TYPE_3__*,int *) ;

__attribute__((used)) static int
FUNC_6(stream_t *VAR_4, input_item_node_t *VAR_5)
{
    access_sys_t *VAR_6 = VAR_4->p_sys;
    FUNC_1(VAR_6->p_mount != ((void*)0) && VAR_6->res.exports.i_count >= 0);
    int VAR_7 = VAR_3;

    struct vlc_readdir_helper VAR_8;
    FUNC_5(&VAR_8, VAR_4, VAR_5);

    for (int VAR_9 = 0; VAR_9 < VAR_6->res.exports.i_count && VAR_7 == VAR_3; ++VAR_9)
    {
        char *VAR_10 = VAR_6->res.exports.ppsz_names[VAR_9];

        char *VAR_11 = FUNC_0(&VAR_6->encoded_url, VAR_10);
        if (VAR_11 == ((void*)0))
        {
            VAR_7 = VAR_2;
            break;
        }
        VAR_7 = FUNC_3(&VAR_8, VAR_11, ((void*)0), VAR_10,
                                            VAR_1, VAR_0);
        FUNC_2(VAR_11);
    }

    FUNC_4(&VAR_8, VAR_7 == VAR_3);

    return VAR_7;
}
