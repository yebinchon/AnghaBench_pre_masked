
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_8__ {scalar_t__ i_date_start; scalar_t__ i_max_wait; scalar_t__ i_size; scalar_t__ i_max_size; int p_out; } ;
typedef TYPE_2__ sout_stream_sys_t ;
typedef int block_t ;


 int FUNC_0 (TYPE_1__*,void*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,char*,int,int) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5( sout_stream_t *VAR_2, void *VAR_3, block_t *VAR_4 )
{
    sout_stream_sys_t *VAR_5 = VAR_2->p_sys;

    if( VAR_5->i_date_start == VAR_1 )
        VAR_5->i_date_start = FUNC_4();
    if( !VAR_5->p_out &&
        ( FUNC_4() - VAR_5->i_date_start > VAR_5->i_max_wait ||
          VAR_5->i_size > VAR_5->i_max_size ) )
    {
        FUNC_3( VAR_2, "Starting recording, waited %ds and %dbyte",
                 (int)FUNC_2(FUNC_4() - VAR_5->i_date_start), (int)VAR_5->i_size );
        FUNC_1( VAR_2 );
    }

    FUNC_0( VAR_2, VAR_3, VAR_4 );

    return VAR_0;
}
