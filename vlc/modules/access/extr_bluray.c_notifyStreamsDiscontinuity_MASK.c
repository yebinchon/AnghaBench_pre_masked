
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_demux_chained_t ;
typedef int uint16_t ;
struct TYPE_6__ {int p_buffer; } ;
typedef TYPE_1__ block_t ;
struct TYPE_7__ {int pid; } ;
typedef TYPE_2__ BLURAY_STREAM_INFO ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int ,int const,int *,int ) ;

__attribute__((used)) static void FUNC_3( vlc_demux_chained_t *VAR_0,
                                        const BLURAY_STREAM_INFO *VAR_1, size_t VAR_2 )
{
    for( size_t VAR_3=0; VAR_3< VAR_2; VAR_3++ )
    {
        const uint16_t VAR_4 = VAR_1[VAR_3].pid;

        block_t *VAR_5 = FUNC_0(192);
        if (!VAR_5)
            return;

        FUNC_2( VAR_5->p_buffer, VAR_4, ((void*)0), 0 );

        FUNC_1(VAR_0, VAR_5);
    }
}
