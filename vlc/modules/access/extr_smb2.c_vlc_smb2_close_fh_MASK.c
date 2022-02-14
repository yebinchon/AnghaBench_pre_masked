
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct access_sys {int * smb2fh; int smb2; } ;
struct TYPE_6__ {struct access_sys* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_4(stream_t *VAR_1)
{
    struct access_sys *VAR_2 = VAR_1->p_sys;

    FUNC_1(VAR_2->smb2fh);

    if (FUNC_2(VAR_2->smb2, VAR_2->smb2fh, VAR_0, VAR_1) < 0)
    {
        FUNC_0(VAR_1, "smb2_close_async", 1);
        return -1;
    }

    VAR_2->smb2fh = ((void*)0);

    return FUNC_3(VAR_1, 1);
}
