
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t ssize_t ;
typedef int sout_access_out_t ;
struct TYPE_4__ {struct TYPE_4__* p_next; scalar_t__ i_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static ssize_t FUNC_1( sout_access_out_t *VAR_0, block_t *VAR_1 )
{
    size_t VAR_2 = 0;
    block_t *VAR_3 = VAR_1;

    while( VAR_3 )
    {
        VAR_2 += VAR_3->i_buffer;

        VAR_3 = VAR_3->p_next;
    }

    FUNC_0( VAR_1 );

    (void)VAR_0;
    return VAR_2;
}
