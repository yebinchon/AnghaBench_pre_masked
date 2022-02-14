
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int input_thread_t ;
struct TYPE_3__ {int * p_demux; } ;
typedef TYPE_1__ input_source_t ;
typedef int demux_t ;
struct TYPE_4__ {TYPE_1__* master; } ;


 int * FUNC_0 (int *,char const*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_3( input_thread_t* VAR_0, const char* VAR_1 )
{
    input_source_t *VAR_2 = FUNC_1(VAR_0)->master;
    demux_t *VAR_3 = FUNC_0( VAR_2->p_demux, VAR_1 );
    if ( VAR_3 != ((void*)0) )
        VAR_2->p_demux = VAR_3;
    else if ( VAR_1 != ((void*)0) )
        FUNC_2(VAR_0, "Failed to create demux filter %s", VAR_1);
}
