
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_4__ {int e_policy; int b_autoselect; int i_id; int i_channel; int i_demux_id; scalar_t__* ppsz_language; int * p_main_es; scalar_t__ i_count; } ;
typedef TYPE_1__ es_out_es_props_t ;
typedef enum es_out_policy_e { ____Placeholder_es_out_policy_e } es_out_policy_e ;
struct TYPE_5__ {int b_preparsing; } ;


 scalar_t__* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char const*,int,scalar_t__) ;
 int FUNC_4 (int *,char const*) ;
 char* FUNC_5 (int *,char const*) ;

__attribute__((used)) static void FUNC_6( es_out_es_props_t *VAR_0,
                            bool VAR_1,
                            input_thread_t *VAR_2,
                            enum es_out_policy_e VAR_3,
                            const char *VAR_4,
                            const char *VAR_5,
                            const char *VAR_6,
                            const char *VAR_7 )
{
    VAR_0->e_policy = VAR_3;
    VAR_0->i_count = 0;
    VAR_0->b_autoselect = VAR_1;
    VAR_0->i_id = (VAR_4) ? FUNC_4( VAR_2, VAR_4 ): -1;
    VAR_0->i_channel = (VAR_5) ? FUNC_4( VAR_2, VAR_5 ): -1;
    VAR_0->i_demux_id = -1;
    VAR_0->p_main_es = ((void*)0);

    if( !FUNC_2(VAR_2)->b_preparsing && VAR_6 )
    {
        char *VAR_8 = FUNC_5( VAR_2, VAR_6 );
        VAR_0->ppsz_language = FUNC_0( VAR_8 );
        if( VAR_0->ppsz_language )
        {
            for( int VAR_9 = 0; VAR_0->ppsz_language[VAR_9]; VAR_9++ )
                FUNC_3( VAR_2, "selected %s language[%d] %s",
                         VAR_7, VAR_9, VAR_0->ppsz_language[VAR_9] );
        }
        FUNC_1( VAR_8 );
    }
}
