
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct access_sys {int error_status; int res_done; int smb2; } ;
struct TYPE_4__ {struct access_sys* p_sys; } ;
typedef TYPE_1__ stream_t ;


 int FUNC_0 (TYPE_1__*,char*,char const*,int,char const*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(stream_t *VAR_0, int VAR_1, const char *VAR_2)
{
    struct access_sys *VAR_3 = VAR_0->p_sys;

    if (VAR_1 < 0)
    {
        const char *VAR_4 = FUNC_1(VAR_3->smb2);
        FUNC_0(VAR_0, "%s failed: %d, '%s'", VAR_2, VAR_1, VAR_4);
        VAR_3->error_status = VAR_1;
        return -1;
    }
    else
    {
        VAR_3->res_done = 1;
        return 0;
    }
}
