
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int sout_stream_id_sys_t ;
struct TYPE_8__ {unsigned int i_buffer; unsigned int i_length; int i_flags; unsigned int i_pts; unsigned int p_buffer; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int,unsigned int) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(sout_stream_id_sys_t *VAR_2, block_t *VAR_3)
{
    unsigned VAR_4 = FUNC_3(VAR_2);

    while (VAR_3->i_buffer > VAR_4)
    {
        unsigned VAR_5 = (VAR_3->i_length * VAR_4) / VAR_3->i_buffer;
        bool VAR_6 = (VAR_3->i_flags & VAR_0) != 0;

        block_t *VAR_7 = FUNC_0(12 + VAR_4);
        if (FUNC_7(VAR_7 == ((void*)0)))
        {
            FUNC_1(VAR_3);
            return VAR_1;
        }

        FUNC_4(VAR_2, VAR_7, VAR_6, VAR_3->i_pts);
        FUNC_2(VAR_7->p_buffer + 12, VAR_3->p_buffer, VAR_4);
        FUNC_5(VAR_2, VAR_7);

        VAR_3->p_buffer += VAR_4;
        VAR_3->i_buffer -= VAR_4;
        VAR_3->i_pts += VAR_5;
        VAR_3->i_length -= VAR_5;
        VAR_3->i_flags &= ~VAR_0;
    }

    return FUNC_6(VAR_2, VAR_3);
}
