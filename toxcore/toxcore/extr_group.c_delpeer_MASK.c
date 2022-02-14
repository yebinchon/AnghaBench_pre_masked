
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_17__ {int group_namelistchange_userdata; int m; int (* peer_namelistchange ) (int ,int,int,int ,int ) ;int fr_c; } ;
struct TYPE_16__ {void* object; int real_pk; } ;
struct TYPE_15__ {size_t numpeers; int object; int (* peer_on_leave ) (int ,int,int,void*) ;TYPE_3__* group; int changed; TYPE_1__* closest_peers; } ;
struct TYPE_14__ {scalar_t__ entry; int real_pk; } ;
typedef TYPE_2__ Group_c ;
typedef TYPE_3__ Group_Peer ;
typedef TYPE_4__ Group_Chats ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_2__* FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int) ;
 TYPE_3__* FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_4__*,int,int) ;
 int FUNC_7 (int ,int,int,int ,int ) ;
 int FUNC_8 (int ,int,int,void*) ;

__attribute__((used)) static int FUNC_9(Group_Chats *VAR_3, int VAR_4, int VAR_5)
{
    Group_c *VAR_6 = FUNC_1(VAR_3, VAR_4);

    if (!VAR_6)
        return -1;

    uint32_t VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
        if (VAR_6->closest_peers[VAR_7].entry && FUNC_3(VAR_6->closest_peers[VAR_7].real_pk, VAR_6->group[VAR_5].real_pk)) {
            VAR_6->closest_peers[VAR_7].entry = 0;
            VAR_6->changed = VAR_2;
            break;
        }
    }

    int VAR_8 = FUNC_2(VAR_3->fr_c, VAR_6->group[VAR_5].real_pk);

    if (VAR_8 != -1) {
        FUNC_6(VAR_3, VAR_4, VAR_8);
    }

    Group_Peer *VAR_9;
    --VAR_6->numpeers;

    void *VAR_10 = VAR_6->group[VAR_5].object;

    if (VAR_6->numpeers == 0) {
        FUNC_0(VAR_6->group);
        VAR_6->group = ((void*)0);
    } else {
        if (VAR_6->numpeers != (uint32_t)VAR_5)
            FUNC_4(&VAR_6->group[VAR_5], &VAR_6->group[VAR_6->numpeers], sizeof(Group_Peer));

        VAR_9 = FUNC_5(VAR_6->group, sizeof(Group_Peer) * (VAR_6->numpeers));

        if (VAR_9 == ((void*)0))
            return -1;

        VAR_6->group = VAR_9;
    }

    if (VAR_3->peer_namelistchange)
        VAR_3->peer_namelistchange(VAR_3->m, VAR_4, VAR_5, VAR_0, VAR_3->group_namelistchange_userdata);

    if (VAR_6->peer_on_leave)
        VAR_6->peer_on_leave(VAR_6->object, VAR_4, VAR_5, VAR_10);

    return 0;
}
