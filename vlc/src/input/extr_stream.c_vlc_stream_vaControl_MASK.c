
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_6__ {int (* pf_control ) (TYPE_1__*,int,int ) ;} ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int * block; int * peek; int offset; } ;
typedef TYPE_2__ stream_priv_t ;




 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;

int FUNC_3(stream_t *VAR_1, int VAR_2, va_list VAR_3)
{
    stream_priv_t *VAR_4 = (stream_priv_t *)VAR_1;

    switch (VAR_2)
    {
        case 128:
        case 129:
        {
            int VAR_5 = VAR_1->pf_control(VAR_1, VAR_2, VAR_3);
            if (VAR_5 != VAR_0)
                return VAR_5;

            VAR_4->offset = 0;

            if (VAR_4->peek != ((void*)0))
            {
                FUNC_0(VAR_4->peek);
                VAR_4->peek = ((void*)0);
            }

            if (VAR_4->block != ((void*)0))
            {
                FUNC_0(VAR_4->block);
                VAR_4->block = ((void*)0);
            }

            return VAR_0;
        }
    }
    return VAR_1->pf_control(VAR_1, VAR_2, VAR_3);
}
