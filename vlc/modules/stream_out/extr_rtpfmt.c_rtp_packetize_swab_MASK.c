
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int vlc_tick_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {unsigned int i_buffer; unsigned int i_length; int i_flags; unsigned int p_buffer; int i_pts; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(sout_stream_id_sys_t *VAR_3, block_t *VAR_4)
{
    unsigned VAR_5 = FUNC_2(VAR_3);

    while (VAR_4->i_buffer > 0)
    {
        unsigned VAR_6 = (VAR_5 < VAR_4->i_buffer) ? VAR_5 : VAR_4->i_buffer;
        vlc_tick_t VAR_7 = (VAR_4->i_length * VAR_6) / VAR_4->i_buffer;
        bool VAR_8 = (VAR_4->i_flags & VAR_0) != 0;

        block_t *VAR_9 = FUNC_0(12 + VAR_6);
        if (FUNC_6(VAR_9 == ((void*)0)))
        {
            FUNC_1(VAR_4);
            return VAR_1;
        }

        FUNC_3(VAR_3, VAR_9, VAR_8, VAR_4->i_pts);
        FUNC_5(VAR_4->p_buffer, VAR_9->p_buffer + 12, VAR_6);
        FUNC_4(VAR_3, VAR_9);

        VAR_4->p_buffer += VAR_6;
        VAR_4->i_buffer -= VAR_6;
        VAR_4->i_pts += VAR_7;
        VAR_4->i_length -= VAR_7;
        VAR_4->i_flags &= ~VAR_0;
    }

    FUNC_1(VAR_4);
    return VAR_2;
}
