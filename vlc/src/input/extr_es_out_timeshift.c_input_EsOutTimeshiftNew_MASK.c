
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int input_thread_t ;
struct TYPE_6__ {int * cbs; } ;
typedef TYPE_1__ es_out_t ;
struct TYPE_7__ {int b_input_paused; int b_input_paused_source; float input_rate; float input_rate_source; int b_delayed; int i_tmp_size_max; char* psz_tmp_path; TYPE_1__ out; int pp_es; int i_es; int * p_ts; int lock; TYPE_1__* p_out; int * p_input; } ;
typedef TYPE_2__ es_out_sys_t ;
typedef int WCHAR ;
typedef scalar_t__ DWORD ;


 char VAR_0 ;
 void* FUNC_0 (int *) ;
 void* FUNC_1 (scalar_t__ const,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int const,int) ;
 int * FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (int *,char*,...) ;
 char* FUNC_9 (char*) ;
 size_t FUNC_10 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *,char*) ;
 char* FUNC_12 (int *,char*) ;
 int * FUNC_13 (scalar_t__ const,int) ;
 int FUNC_14 (int *) ;

es_out_t *FUNC_15( input_thread_t *VAR_7, es_out_t *VAR_8, float VAR_9 )
{
    es_out_sys_t *VAR_10 = FUNC_7( sizeof(*VAR_10) );
    if( !VAR_10 )
        return ((void*)0);

    VAR_10->out.cbs = &VAR_1;


    VAR_10->b_input_paused = 0;
    VAR_10->b_input_paused_source = 0;
    VAR_10->p_input = VAR_7;
    VAR_10->input_rate = VAR_9;
    VAR_10->input_rate_source = VAR_9;

    VAR_10->p_out = VAR_8;
    FUNC_14( &VAR_10->lock );

    VAR_10->b_delayed = 0;
    VAR_10->p_ts = ((void*)0);

    FUNC_3( VAR_10->i_es, VAR_10->pp_es );


    const int VAR_11 = FUNC_11( VAR_7, "input-timeshift-granularity" );
    if( VAR_11 < 0 )
        VAR_10->i_tmp_size_max = 50*1024*1024;
    else
        VAR_10->i_tmp_size_max = FUNC_4( VAR_11, 1*1024*1024 );
    FUNC_8( VAR_7, "using timeshift granularity of %d MiB",
             (int)VAR_10->i_tmp_size_max/(1024*1024) );

    VAR_10->psz_tmp_path = FUNC_12( VAR_7, "input-timeshift-path" );
    if( VAR_10->psz_tmp_path != ((void*)0) )
        FUNC_8( VAR_7, "using timeshift path: %s", VAR_10->psz_tmp_path );
    else
        FUNC_8( VAR_7, "using default timeshift path" );
    return &VAR_10->out;
}
