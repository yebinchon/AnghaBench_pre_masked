
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sys; } ;
typedef TYPE_1__ audio_output_t ;
struct TYPE_7__ {char* device; } ;
typedef TYPE_2__ aout_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5 (audio_output_t *VAR_1, const char *VAR_2)
{
    aout_sys_t *VAR_3 = VAR_1->sys;
    char *VAR_4 = ((void*)0);

    if (VAR_2 != ((void*)0))
    {
        VAR_4 = FUNC_3 (VAR_2);
        if (FUNC_4(VAR_4 == ((void*)0)))
            return -1;
    }

    FUNC_2 (VAR_3->device);
    VAR_3->device = VAR_4;
    FUNC_0 (VAR_1, VAR_4);
    FUNC_1 (VAR_1, VAR_0);
    return 0;
}
