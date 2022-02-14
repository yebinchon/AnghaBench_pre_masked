
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {TYPE_1__* callbacks; } ;
struct TYPE_4__ {int lossy_data_callback_id; int lossy_data_callback_object; int (* lossy_data_callback ) (int ,int ,int const*,int ) ;} ;
typedef int Friend_Connections ;
typedef TYPE_2__ Friend_Conn ;


 unsigned int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int const*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, int VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{
    if (VAR_4 == 0)
        return -1;

    Friend_Connections *VAR_5 = VAR_1;
    Friend_Conn *VAR_6 = FUNC_0(VAR_5, VAR_2);

    if (!VAR_6)
        return -1;

    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
        if (VAR_6->callbacks[VAR_7].lossy_data_callback)
            VAR_6->callbacks[VAR_7].lossy_data_callback(VAR_6->callbacks[VAR_7].lossy_data_callback_object,
                    VAR_6->callbacks[VAR_7].lossy_data_callback_id, VAR_3, VAR_4);

        VAR_6 = FUNC_0(VAR_5, VAR_2);

        if (!VAR_6)
            return -1;
    }

    return 0;
}
