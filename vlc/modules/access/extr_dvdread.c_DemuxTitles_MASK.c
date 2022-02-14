
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int nr_of_srpts; TYPE_2__* title; } ;
typedef TYPE_3__ tt_srpt_t ;
struct TYPE_16__ {int seekpoint; int i_seekpoint; } ;
typedef TYPE_4__ seekpoint_t ;
typedef int int32_t ;
typedef TYPE_4__ input_title_t ;
struct TYPE_17__ {TYPE_7__* p_sys; } ;
typedef TYPE_6__ demux_t ;
struct TYPE_18__ {int titles; int i_titles; TYPE_1__* p_vmg_file; } ;
typedef TYPE_7__ demux_sys_t ;
struct TYPE_14__ {int nr_of_ptts; } ;
struct TYPE_13__ {TYPE_3__* tt_srpt; } ;


 int FUNC_0 (int ,int ,TYPE_4__*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_6__*,char*,int,...) ;
 TYPE_4__* FUNC_4 () ;
 TYPE_4__* FUNC_5 () ;

__attribute__((used)) static void FUNC_6( demux_t *VAR_0, int *VAR_1 )
{
    FUNC_1( VAR_1 );

    demux_sys_t *VAR_2 = VAR_0->p_sys;
    input_title_t *VAR_3;
    seekpoint_t *VAR_4;


    const tt_srpt_t *VAR_5 = VAR_2->p_vmg_file->tt_srpt;

    int32_t VAR_6 = VAR_5->nr_of_srpts;
    FUNC_3( VAR_0, "number of titles: %d", VAR_6 );

    for( int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++ )
    {
        int32_t VAR_8 = 0;
        int VAR_9;

        VAR_8 = VAR_5->title[VAR_7].nr_of_ptts;
        FUNC_3( VAR_0, "title %d has %d chapters", VAR_7, VAR_8 );

        VAR_3 = FUNC_4();

        for( VAR_9 = 0; VAR_9 < FUNC_2( VAR_8, 1 ); VAR_9++ )
        {
            VAR_4 = FUNC_5();
            FUNC_0( VAR_3->i_seekpoint, VAR_3->seekpoint, VAR_4 );
        }

        FUNC_0( VAR_2->i_titles, VAR_2->titles, VAR_3 );
    }
}
