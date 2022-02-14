
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* pf_read ) (TYPE_1__*,char*,int) ;int * (* pf_block ) (TYPE_1__*,int*) ;} ;
typedef TYPE_1__ stream_t ;
struct TYPE_8__ {int * block; } ;
typedef TYPE_2__ stream_priv_t ;
typedef scalar_t__ ssize_t ;
typedef int dummy ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,void*,size_t) ;
 int * FUNC_3 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int **,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_7(stream_t *VAR_1, void *VAR_2, size_t VAR_3)
{
    stream_priv_t *VAR_4 = (stream_priv_t *)VAR_1;
    ssize_t VAR_5;

    FUNC_0(VAR_3 <= VAR_0);

    if (FUNC_5())
        return 0;

    if (VAR_1->pf_read != ((void*)0))
    {
        FUNC_0(VAR_4->block == ((void*)0));
        if (VAR_2 == ((void*)0))
        {
            if (FUNC_4(VAR_3 == 0))
                return 0;

            char VAR_6[(VAR_3 <= 256 ? VAR_3 : 256)];
            VAR_5 = VAR_1->pf_read(VAR_1, VAR_6, sizeof (VAR_6));
        }
        else
            VAR_5 = VAR_1->pf_read(VAR_1, VAR_2, VAR_3);
        return VAR_5;
    }

    VAR_5 = FUNC_6(&VAR_4->block, VAR_2, VAR_3);
    if (VAR_5 >= 0)
        return VAR_5;

    if (VAR_1->pf_block != ((void*)0))
    {
        bool VAR_7 = 0;

        VAR_4->block = VAR_1->pf_block(VAR_1, &VAR_7);
        VAR_5 = FUNC_6(&VAR_4->block, VAR_2, VAR_3);
        if (VAR_5 >= 0)
            return VAR_5;
        return VAR_7 ? 0 : -1;
    }

    return 0;
}
