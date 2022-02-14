
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_8__ {int* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_9__ {size_t i_buffer; int p_buffer; struct TYPE_9__* p_next; } ;
typedef TYPE_2__ block_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_4 (int,int ,size_t,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_6(sout_access_out_t *VAR_3, block_t *VAR_4)
{
    int *VAR_5 = VAR_3->p_sys, VAR_6 = *VAR_5;
    size_t VAR_7 = 0;

    while (VAR_4 != ((void*)0))
    {
        if (VAR_4->i_buffer == 0)
        {
            block_t *VAR_8 = VAR_4->p_next;
            FUNC_2(VAR_4);
            VAR_4 = VAR_8;
            continue;
        }


        ssize_t VAR_9 = FUNC_4(VAR_6, VAR_4->p_buffer, VAR_4->i_buffer, VAR_1);
        if (VAR_9 <= 0)
        {
            if (VAR_2 == VAR_0)
                continue;
            FUNC_1(VAR_4);
            FUNC_3(VAR_3, "cannot write: %s", FUNC_5(VAR_2));
            return -1;
        }

        VAR_7 += VAR_9;

        FUNC_0((size_t)VAR_9 <= VAR_4->i_buffer);
        VAR_4->p_buffer += VAR_9;
        VAR_4->i_buffer -= VAR_9;
    }
    return VAR_7;
}
