
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ title_len; int title; } ;
typedef TYPE_1__ Group_c ;
typedef int Group_Chats ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int const*,int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

int FUNC_2(const Group_Chats *VAR_1, int VAR_2, uint8_t *VAR_3, uint32_t VAR_4)
{
    Group_c *VAR_5 = FUNC_0(VAR_1, VAR_2);

    if (!VAR_5)
        return -1;

    if (VAR_5->title_len == 0 || VAR_5->title_len > VAR_0)
        return -1;

    if (VAR_4 > VAR_5->title_len)
        VAR_4 = VAR_5->title_len;

    FUNC_1(VAR_3, VAR_5->title, VAR_4);
    return VAR_4;
}
