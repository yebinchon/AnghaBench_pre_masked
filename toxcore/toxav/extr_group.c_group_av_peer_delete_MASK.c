
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer; scalar_t__ audio_decoder; } ;
typedef TYPE_1__ Group_Peer_AV ;


 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
    Group_Peer_AV *VAR_4 = VAR_3;

    if (!VAR_4)
        return;

    if (VAR_4->audio_decoder)
        FUNC_1(VAR_4->audio_decoder);

    FUNC_2(VAR_4->buffer);
    FUNC_0(VAR_3);
}
