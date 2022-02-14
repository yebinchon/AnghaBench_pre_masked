
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlc_readdir_helper {size_t i_slaves; struct rdh_slave** pp_slaves; } ;
struct rdh_slave {int psz_filename; TYPE_1__* p_slave; } ;
struct TYPE_2__ {scalar_t__ i_priority; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 char* FUNC_3 (int ,char) ;

__attribute__((used)) static int FUNC_4(struct vlc_readdir_helper *VAR_0,
                                struct rdh_slave *VAR_1)
{
    char *VAR_2 = FUNC_3(VAR_1->psz_filename, '.');
    if (!VAR_2)
        return 0;
    VAR_2++;

    if (FUNC_0(VAR_2, "sub") != 0)
        return 0;

    for (size_t VAR_3 = 0; VAR_3 < VAR_0->i_slaves; VAR_3++)
    {
        struct rdh_slave *VAR_4 = VAR_0->pp_slaves[VAR_3];

        if (VAR_4 == ((void*)0) || VAR_4 == VAR_1)
            continue;


        if (VAR_4->p_slave->i_priority !=
            VAR_1->p_slave->i_priority)
            continue;


        if (FUNC_2(VAR_1->psz_filename, VAR_4->psz_filename,
                        FUNC_1(VAR_1->psz_filename) - 3 ) != 0)
            continue;


        char *VAR_5 = FUNC_3(VAR_4->psz_filename, '.');
        if (VAR_5 == ((void*)0))
            continue;
        VAR_5++;
        if (FUNC_0(VAR_5, "idx" ) == 0)
            return 1;
    }
    return 0;
}
