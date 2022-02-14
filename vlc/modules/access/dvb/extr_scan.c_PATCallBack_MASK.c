
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {TYPE_3__* p_pat; } ;
struct TYPE_9__ {int i_nit_pid; TYPE_1__ local; int * p_obj; } ;
typedef TYPE_2__ scan_session_t ;
struct TYPE_10__ {TYPE_4__* p_first_program; scalar_t__ b_current_next; int i_version; int i_ts_id; } ;
typedef TYPE_3__ dvbpsi_pat_t ;
struct TYPE_11__ {scalar_t__ i_number; int i_pid; struct TYPE_11__* p_next; } ;
typedef TYPE_4__ dvbpsi_pat_program_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,char*,scalar_t__,int ,...) ;

__attribute__((used)) static void FUNC_2( scan_session_t *VAR_0, dvbpsi_pat_t *VAR_1 )
{
    vlc_object_t *VAR_2 = VAR_0->p_obj;


    if( VAR_0->local.p_pat && VAR_0->local.p_pat->b_current_next )
    {
        FUNC_0( VAR_0->local.p_pat );
        VAR_0->local.p_pat = ((void*)0);
    }
    if( VAR_0->local.p_pat )
    {
        FUNC_0( VAR_1 );
        return;
    }

    dvbpsi_pat_program_t *VAR_3;


    VAR_0->local.p_pat = VAR_1;


    FUNC_1( VAR_2, "new PAT ts_id=%d version=%d current_next=%d",
             VAR_1->i_ts_id, VAR_1->i_version, VAR_1->b_current_next );
    for( VAR_3 = VAR_1->p_first_program; VAR_3 != ((void*)0); VAR_3 = VAR_3->p_next )
    {
        FUNC_1( VAR_2, "  * number=%d pid=%d", VAR_3->i_number, VAR_3->i_pid );
        if( VAR_3->i_number == 0 )
            VAR_0->i_nit_pid = VAR_3->i_pid;
    }
}
