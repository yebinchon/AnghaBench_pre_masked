
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
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,int ,size_t) ;

__attribute__((used)) static ssize_t FUNC_5( sout_access_out_t *VAR_2, block_t *VAR_3 )
{
    int *VAR_4 = VAR_2->p_sys, VAR_5 = *VAR_4;
    size_t VAR_6 = 0;

    while( VAR_3 )
    {
        ssize_t VAR_7 = FUNC_4(VAR_5, VAR_3->p_buffer, VAR_3->i_buffer);
        if (VAR_7 <= 0)
        {
            if (VAR_1 == VAR_0)
                continue;
            FUNC_0 (VAR_3);
            FUNC_2( VAR_2, "cannot write: %s", FUNC_3(VAR_1) );
            return -1;
        }

        if ((size_t)VAR_7 >= VAR_3->i_buffer)
        {
            block_t *VAR_8 = VAR_3->p_next;
            FUNC_1 (VAR_3);
            VAR_3 = VAR_8;
        }
        else
        {
            VAR_3->p_buffer += VAR_7;
            VAR_3->i_buffer -= VAR_7;
        }
        VAR_6 += VAR_7;
    }
    return VAR_6;
}
