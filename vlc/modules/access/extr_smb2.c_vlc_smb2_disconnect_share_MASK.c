
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct access_sys {int smb2_connected; int smb2; } ;
struct TYPE_6__ {struct access_sys* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(stream_t *VAR_1)
{
    struct access_sys *VAR_2 = VAR_1->p_sys;

    if (!VAR_2->smb2_connected)
        return 0;

    if (FUNC_1(VAR_2->smb2, VAR_0, VAR_1) < 0)
    {
        FUNC_0(VAR_1, "smb2_connect_share_async", 1);
        return -1;
    }

    int VAR_3 = FUNC_2(VAR_1, 1);
    VAR_2->smb2_connected = 0;
    return VAR_3;
}
