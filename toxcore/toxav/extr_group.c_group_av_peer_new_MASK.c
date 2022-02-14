
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int g_c; } ;
struct TYPE_5__ {int buffer; } ;
typedef TYPE_1__ Group_Peer_AV ;
typedef TYPE_2__ Group_AV ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, int VAR_2, int VAR_3)
{
    Group_AV *VAR_4 = VAR_1;
    Group_Peer_AV *VAR_5 = FUNC_0(1, sizeof(Group_Peer_AV));

    if (!VAR_5)
        return;

    VAR_5->buffer = FUNC_1(VAR_0);
    FUNC_2(VAR_4->g_c, VAR_2, VAR_3, VAR_5);
}
