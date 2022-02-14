
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int sequnum ;
typedef int data ;
struct TYPE_3__ {int audio_sequnum; } ;
typedef int Group_Chats ;
typedef TYPE_1__ Group_AV ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int *,int,int*,int) ;

__attribute__((used)) static int FUNC_4(Group_Chats *VAR_1, int VAR_2, uint8_t *VAR_3, uint16_t VAR_4)
{
    if (!VAR_4)
        return -1;

    Group_AV *VAR_5 = FUNC_0(VAR_1, VAR_2);
    uint8_t VAR_6[1 + sizeof(uint16_t) + VAR_4];
    VAR_6[0] = VAR_0;

    uint16_t VAR_7 = FUNC_1(VAR_5->audio_sequnum);
    FUNC_2(VAR_6 + 1, &VAR_7, sizeof(VAR_7));
    FUNC_2(VAR_6 + 1 + sizeof(VAR_7), VAR_3, VAR_4);

    if (FUNC_3(VAR_1, VAR_2, VAR_6, sizeof(VAR_6)) == -1)
        return -1;

    ++VAR_5->audio_sequnum;
    return 0;
}
