
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {struct TYPE_3__* p_next; struct TYPE_3__* p_first; int i_pos; } ;
typedef TYPE_1__ MP4_Box_t ;



__attribute__((used)) static void FUNC_0( MP4_Box_t *VAR_0, uint64_t VAR_1 )
{
    while(VAR_0)
    {
        VAR_0->i_pos += VAR_1;
        FUNC_0( VAR_0->p_first, VAR_1 );
        VAR_0 = VAR_0->p_next;
    }
}
