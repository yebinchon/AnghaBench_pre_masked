
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {size_t num_friends; TYPE_2__* friends_list; } ;
struct TYPE_8__ {scalar_t__ NATping_timestamp; int hole_punching; scalar_t__ punching_timestamp; scalar_t__ recvNATping_timestamp; int NATping_id; } ;
struct TYPE_9__ {TYPE_1__ nat; int public_key; } ;
typedef int IP_Port ;
typedef int IP ;
typedef TYPE_3__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int *,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,int *,int ,size_t) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void FUNC_7(DHT *VAR_3)
{
    uint32_t VAR_4;
    uint64_t VAR_5 = FUNC_6();

    for (VAR_4 = 0; VAR_4 < VAR_3->num_friends; ++VAR_4) {
        IP_Port VAR_6[VAR_0];
        int VAR_7 = FUNC_2(VAR_3, VAR_6, VAR_4);


        if (VAR_7 < VAR_0 / 2)
            continue;

        if (VAR_3->friends_list[VAR_4].nat.NATping_timestamp + VAR_2 < VAR_5) {
            FUNC_5(VAR_3, VAR_3->friends_list[VAR_4].public_key, VAR_3->friends_list[VAR_4].nat.NATping_id, VAR_1);
            VAR_3->friends_list[VAR_4].nat.NATping_timestamp = VAR_5;
        }

        if (VAR_3->friends_list[VAR_4].nat.hole_punching == 1 &&
                VAR_3->friends_list[VAR_4].nat.punching_timestamp + VAR_2 < VAR_5 &&
                VAR_3->friends_list[VAR_4].nat.recvNATping_timestamp + VAR_2 * 2 >= VAR_5) {

            IP VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_0 / 2);

            if (!FUNC_3(&VAR_8))
                continue;

            uint16_t VAR_9[VAR_0];
            uint16_t VAR_10 = FUNC_1(VAR_9, VAR_6, VAR_7, VAR_8);
            FUNC_4(VAR_3, VAR_8, VAR_9, VAR_10, VAR_4);

            VAR_3->friends_list[VAR_4].nat.punching_timestamp = VAR_5;
            VAR_3->friends_list[VAR_4].nat.hole_punching = 0;
        }
    }
}
