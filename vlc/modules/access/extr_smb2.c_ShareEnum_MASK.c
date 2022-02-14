
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vlc_readdir_helper {int dummy; } ;
struct srvsvc_netshareinfo1 {int type; int name; } ;
struct TYPE_8__ {size_t count; struct srvsvc_netshareinfo1* array; } ;
struct srvsvc_netsharectr {TYPE_2__ ctr1; } ;
struct access_sys {TYPE_1__* share_enum; } ;
struct TYPE_9__ {struct access_sys* p_sys; } ;
typedef TYPE_3__ stream_t ;
typedef int input_item_node_t ;
struct TYPE_7__ {struct srvsvc_netsharectr* ctr; } ;


 int FUNC_0 (TYPE_3__*,struct vlc_readdir_helper*,int ,int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vlc_readdir_helper*,int) ;
 int FUNC_3 (struct vlc_readdir_helper*,TYPE_3__*,int *) ;

__attribute__((used)) static int
FUNC_4(stream_t *VAR_3, input_item_node_t *VAR_4)
{
    struct access_sys *VAR_5 = VAR_3->p_sys;
    FUNC_1(VAR_5->share_enum != ((void*)0));

    int VAR_6 = VAR_2;
    struct vlc_readdir_helper VAR_7;
    FUNC_3(&VAR_7, VAR_3, VAR_4);

    struct srvsvc_netsharectr *VAR_8 = VAR_5->share_enum->ctr;
    for (uint32_t VAR_9 = 0;
         VAR_9 < VAR_8->ctr1.count && VAR_6 == VAR_2; ++VAR_9)
    {
       struct srvsvc_netshareinfo1 *VAR_10 = &VAR_8->ctr1.array[VAR_9];
       if (VAR_10->type & VAR_1)
           continue;
       switch (VAR_10->type & 0x3)
       {
           case 128:
               VAR_6 = FUNC_0(VAR_3, &VAR_7, VAR_10->name, VAR_0);
               break;
       }
    }

    FUNC_2(&VAR_7, VAR_6 == VAR_2);
    return 0;
}
