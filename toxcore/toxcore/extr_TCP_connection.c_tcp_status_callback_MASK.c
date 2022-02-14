
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {unsigned int custom_uint; int * custom_object; } ;
struct TYPE_8__ {scalar_t__ status; } ;
struct TYPE_7__ {int sleep_count; int lock_count; } ;
typedef TYPE_1__ TCP_con ;
typedef int TCP_Connections ;
typedef TYPE_2__ TCP_Connection_to ;
typedef TYPE_3__ TCP_Client_Connection ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (TYPE_2__*,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, uint32_t VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
    TCP_Client_Connection *VAR_7 = VAR_3;
    TCP_Connections *VAR_8 = VAR_7->custom_object;

    unsigned int VAR_9 = VAR_7->custom_uint;
    TCP_con *VAR_10 = FUNC_1(VAR_8, VAR_9);
    TCP_Connection_to *VAR_11 = FUNC_0(VAR_8, VAR_4);

    if (!VAR_11 || !VAR_10)
        return -1;

    if (VAR_6 == 1) {
        if (FUNC_2(VAR_11, VAR_9, VAR_1, VAR_5) == -1)
            return -1;

        --VAR_10->lock_count;

        if (VAR_11->status == VAR_2) {
            --VAR_10->sleep_count;
        }
    } else if (VAR_6 == 2) {
        if (FUNC_2(VAR_11, VAR_9, VAR_0, VAR_5) == -1)
            return -1;

        ++VAR_10->lock_count;

        if (VAR_11->status == VAR_2) {
            ++VAR_10->sleep_count;
        }
    }

    return 0;
}
