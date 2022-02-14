
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_first_program; } ;
typedef TYPE_1__ dvbpsi_pat_t ;
struct TYPE_5__ {int i_pid; struct TYPE_5__* p_next; } ;
typedef TYPE_2__ dvbpsi_pat_program_t ;
typedef int demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1( demux_t *VAR_2, dvbpsi_pat_t *VAR_3 )
{

    int VAR_4 = -1;
    for( dvbpsi_pat_program_t * VAR_5 = VAR_3->p_first_program;
         VAR_5 != ((void*)0);
         VAR_5 = VAR_5->p_next )
    {
        if( VAR_5->i_pid == VAR_4 )
        {
            FUNC_0( VAR_2, "PAT check failed: duplicate program pid %d", VAR_4 );
            return VAR_0;
        }
        VAR_4 = VAR_5->i_pid;
    }
    return VAR_1;
}
