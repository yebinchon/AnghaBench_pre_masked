
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_8__ {int b_error; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,char const*,int,char const*) ;
 int FUNC_2 (TYPE_1__*,char*,char const*) ;
 int FUNC_3 (TYPE_1__*,int ,char*,char const*) ;

__attribute__((used)) static bool
FUNC_4(stream_t *VAR_1, int VAR_2, const char *VAR_3,
                 const char *VAR_4)
{
    access_sys_t *VAR_5 = VAR_1->p_sys;

    if (VAR_2 < 0)
    {
        if (VAR_2 != -VAR_0)
        {
            FUNC_1(VAR_1, "%s failed: %d, '%s'", VAR_4, VAR_2,
                    VAR_3);
            if (!VAR_5->b_error)
                FUNC_3(VAR_1,
                                         FUNC_0("NFS operation failed"), "%s",
                                         VAR_3);
        }
        else
            FUNC_2(VAR_1, "%s interrupted", VAR_4);
        VAR_5->b_error = 1;
        return 1;
    }
    else
        return 0;
}
