
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_10__ {TYPE_2__* friends_list; int ping; } ;
struct TYPE_9__ {void* port; int ip; } ;
struct TYPE_7__ {int punching_index; scalar_t__ tries; int punching_index2; } ;
struct TYPE_8__ {TYPE_1__ nat; int public_key; } ;
typedef TYPE_3__ IP_Port ;
typedef int IP ;
typedef TYPE_4__ DHT ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,TYPE_3__,int ) ;

__attribute__((used)) static void FUNC_3(DHT *VAR_3, IP VAR_4, uint16_t *VAR_5, uint16_t VAR_6, uint16_t VAR_7)
{
    if (VAR_6 > VAR_0 || VAR_6 == 0)
        return;

    uint32_t VAR_8;
    uint32_t VAR_9 = VAR_3->friends_list[VAR_7].nat.punching_index + VAR_2;
    uint16_t VAR_10 = VAR_5[0];

    for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
        if (VAR_10 != VAR_5[VAR_8])
            break;
    }

    if (VAR_8 == VAR_6) {
        IP_Port VAR_11;
        FUNC_1(&VAR_11.ip, &VAR_4);
        VAR_11.port = FUNC_0(VAR_10);
        FUNC_2(VAR_3->ping, VAR_11, VAR_3->friends_list[VAR_7].public_key);
    } else {
        for (VAR_8 = VAR_3->friends_list[VAR_7].nat.punching_index; VAR_8 != VAR_9; ++VAR_8) {

            uint16_t VAR_12 = VAR_5[(VAR_8 / 2) % VAR_6] + (VAR_8 / (2 * VAR_6)) * ((VAR_8 % 2) ? -1 : 1);
            IP_Port VAR_13;
            FUNC_1(&VAR_13.ip, &VAR_4);
            VAR_13.port = FUNC_0(VAR_12);
            FUNC_2(VAR_3->ping, VAR_13, VAR_3->friends_list[VAR_7].public_key);
        }

        VAR_3->friends_list[VAR_7].nat.punching_index = VAR_8;
    }

    if (VAR_3->friends_list[VAR_7].nat.tries > VAR_1) {
        VAR_9 = VAR_3->friends_list[VAR_7].nat.punching_index2 + VAR_2;
        uint16_t VAR_14 = 1024;
        IP_Port VAR_15;
        FUNC_1(&VAR_15.ip, &VAR_4);

        for (VAR_8 = VAR_3->friends_list[VAR_7].nat.punching_index2; VAR_8 != VAR_9; ++VAR_8) {
            VAR_15.port = FUNC_0(VAR_14 + VAR_8);
            FUNC_2(VAR_3->ping, VAR_15, VAR_3->friends_list[VAR_7].public_key);
        }

        VAR_3->friends_list[VAR_7].nat.punching_index2 = VAR_8 - (VAR_2 / 2);
    }

    ++VAR_3->friends_list[VAR_7].nat.tries;
}
