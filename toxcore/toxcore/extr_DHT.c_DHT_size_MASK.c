
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_17__ {size_t num_friends; TYPE_7__* friends_list; TYPE_3__* close_clientlist; } ;
struct TYPE_16__ {TYPE_6__* client_list; } ;
struct TYPE_14__ {scalar_t__ timestamp; } ;
struct TYPE_13__ {scalar_t__ timestamp; } ;
struct TYPE_15__ {TYPE_5__ assoc6; TYPE_4__ assoc4; } ;
struct TYPE_11__ {scalar_t__ timestamp; } ;
struct TYPE_10__ {scalar_t__ timestamp; } ;
struct TYPE_12__ {TYPE_2__ assoc6; TYPE_1__ assoc4; } ;
typedef TYPE_7__ DHT_Friend ;
typedef TYPE_8__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (int ) ;

uint32_t FUNC_1(const DHT *VAR_5)
{
    uint32_t VAR_6 = 0, VAR_7 = 0, VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
        VAR_6 += (VAR_5->close_clientlist[VAR_8].assoc4.timestamp != 0);
        VAR_7 += (VAR_5->close_clientlist[VAR_8].assoc6.timestamp != 0);
    }

    for (VAR_8 = 0; VAR_8 < VAR_2 && VAR_8 < VAR_5->num_friends; ++VAR_8) {
        DHT_Friend *VAR_10 = &VAR_5->friends_list[VAR_8];

        for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
            VAR_6 += (VAR_10->client_list[VAR_9].assoc4.timestamp != 0);
            VAR_7 += (VAR_10->client_list[VAR_9].assoc6.timestamp != 0);
        }
    }

    uint32_t VAR_11 = sizeof(uint32_t), VAR_12 = VAR_11 * 2;

    return VAR_11 + VAR_12 + (FUNC_0(VAR_0) * VAR_6) + (FUNC_0(VAR_1) * VAR_7);
}
