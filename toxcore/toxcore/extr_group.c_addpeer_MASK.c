
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_15__ {int group_namelistchange_userdata; int m; int (* peer_namelistchange ) (int ,int,int,int ,int ) ;} ;
struct TYPE_14__ {int last_recv; int peer_number; int temp_pk; int real_pk; } ;
struct TYPE_13__ {int numpeers; int object; int (* peer_on_join ) (int ,int,int) ;TYPE_2__* group; } ;
typedef TYPE_1__ Group_c ;
typedef TYPE_2__ Group_Peer ;
typedef TYPE_3__ Group_Chats ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int const*,int const*) ;
 TYPE_1__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ,int,int,int ,int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(Group_Chats *VAR_1, int VAR_2, const uint8_t *VAR_3, const uint8_t *VAR_4,
                   uint16_t VAR_5)
{
    Group_c *VAR_6 = FUNC_1(VAR_1, VAR_2);

    if (!VAR_6)
        return -1;


    int VAR_7 = FUNC_5(VAR_6, VAR_3);

    if (VAR_7 != -1) {
        FUNC_3(VAR_6->group[VAR_7].temp_pk, VAR_4);

        if (VAR_6->group[VAR_7].peer_number != VAR_5)
            return -1;

        return VAR_7;
    }

    VAR_7 = FUNC_2(VAR_6, VAR_5);

    if (VAR_7 != -1)
        return -1;

    Group_Peer *VAR_8;
    VAR_8 = FUNC_6(VAR_6->group, sizeof(Group_Peer) * (VAR_6->numpeers + 1));

    if (VAR_8 == ((void*)0))
        return -1;

    FUNC_4(&(VAR_8[VAR_6->numpeers]), 0, sizeof(Group_Peer));
    VAR_6->group = VAR_8;

    FUNC_3(VAR_6->group[VAR_6->numpeers].real_pk, VAR_3);
    FUNC_3(VAR_6->group[VAR_6->numpeers].temp_pk, VAR_4);
    VAR_6->group[VAR_6->numpeers].peer_number = VAR_5;

    VAR_6->group[VAR_6->numpeers].last_recv = FUNC_9();
    ++VAR_6->numpeers;

    FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

    if (VAR_1->peer_namelistchange)
        VAR_1->peer_namelistchange(VAR_1->m, VAR_2, VAR_6->numpeers - 1, VAR_0,
                                 VAR_1->group_namelistchange_userdata);

    if (VAR_6->peer_on_join)
        VAR_6->peer_on_join(VAR_6->object, VAR_2, VAR_6->numpeers - 1);

    return (VAR_6->numpeers - 1);
}
