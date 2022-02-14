
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_12__ {TYPE_1__* callbacks; int ping_lastrecv; int real_public_key; } ;
struct TYPE_11__ {int fr_request_object; int (* fr_request_callback ) (int ,int ,scalar_t__*,int ) ;} ;
struct TYPE_10__ {int public_key; int ip_port; } ;
struct TYPE_9__ {int data_callback_id; int data_callback_object; int (* data_callback ) (int ,int ,scalar_t__*,int ) ;} ;
typedef TYPE_2__ Node_format ;
typedef TYPE_3__ Friend_Connections ;
typedef TYPE_4__ Friend_Conn ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,int,int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int ,int ,scalar_t__*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int,int *,scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_5, int VAR_6, uint8_t *VAR_7, uint16_t VAR_8)
{
    if (VAR_8 == 0)
        return -1;

    Friend_Connections *VAR_9 = VAR_5;
    Friend_Conn *VAR_10 = FUNC_1(VAR_9, VAR_6);

    if (!VAR_10)
        return -1;

    if (VAR_7[0] == VAR_3) {
        if (VAR_9->fr_request_callback)
            VAR_9->fr_request_callback(VAR_9->fr_request_object, VAR_10->real_public_key, VAR_7, VAR_8);

        return 0;
    } else if (VAR_7[0] == VAR_2) {
        VAR_10->ping_lastrecv = FUNC_4();
        return 0;
    } else if (VAR_7[0] == VAR_4) {
        Node_format VAR_11[VAR_1];
        int VAR_12;

        if ((VAR_12 = FUNC_5(VAR_11, VAR_1, ((void*)0), VAR_7 + 1, VAR_8 - 1, 1)) == -1)
            return -1;

        int VAR_13;

        for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
            FUNC_0(VAR_9, VAR_6, VAR_11[VAR_13].ip_port, VAR_11[VAR_13].public_key);
        }

        return 0;
    }

    unsigned int VAR_14;

    for (VAR_14 = 0; VAR_14 < VAR_0; ++VAR_14) {
        if (VAR_10->callbacks[VAR_14].data_callback)
            VAR_10->callbacks[VAR_14].data_callback(VAR_10->callbacks[VAR_14].data_callback_object,
                                                   VAR_10->callbacks[VAR_14].data_callback_id, VAR_7, VAR_8);

        VAR_10 = FUNC_1(VAR_9, VAR_6);

        if (!VAR_10)
            return -1;
    }

    return 0;
}
