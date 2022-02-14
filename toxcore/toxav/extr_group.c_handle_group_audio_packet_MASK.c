
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int sequnum ;
struct TYPE_8__ {int length; int* data; int sequnum; } ;
struct TYPE_7__ {int buffer; } ;
typedef TYPE_1__ Group_Peer_AV ;
typedef TYPE_2__ Group_Audio_Packet ;


 TYPE_2__* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (void*,TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, int VAR_1, int VAR_2, void *VAR_3,
                                     const uint8_t *VAR_4, uint16_t VAR_5)
{
    if (!VAR_3 || !VAR_0 || VAR_5 <= sizeof(uint16_t)) {
        return -1;
    }

    Group_Peer_AV *VAR_6 = VAR_3;

    Group_Audio_Packet *VAR_7 = FUNC_0(1, sizeof(Group_Audio_Packet) + (VAR_5 - sizeof(uint16_t)));

    if (!VAR_7) {
        return -1;
    }

    uint16_t VAR_8;
    FUNC_3(&VAR_8, VAR_4, sizeof(VAR_8));
    VAR_7->sequnum = FUNC_4(VAR_8);
    VAR_7->length = VAR_5 - sizeof(uint16_t);
    FUNC_3(VAR_7->data, VAR_4 + sizeof(uint16_t), VAR_5 - sizeof(uint16_t));

    if (FUNC_5(VAR_6->buffer, VAR_7) == -1) {
        FUNC_2(VAR_7);
        return -1;
    }

    while (FUNC_1(VAR_0, VAR_6, VAR_1, VAR_2) == 0);

    return 0;
}
