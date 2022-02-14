
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int b_error; int f; } ;
typedef TYPE_2__ stream_sys_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int const*,int,size_t,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_3( stream_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2 )
{
    stream_sys_t *VAR_3 = VAR_0->p_sys;

    FUNC_0( VAR_3->f );

    if( VAR_2 > 0 )
    {
        const bool VAR_4 = VAR_3->b_error;
        const size_t VAR_5 = FUNC_1( VAR_1, 1, VAR_2, VAR_3->f );

        VAR_3->b_error = VAR_5 != VAR_2;


        if( VAR_3->b_error && !VAR_4 )
            FUNC_2( VAR_0, "Failed to record data (begin)" );
        else if( !VAR_3->b_error && VAR_4 )
            FUNC_2( VAR_0, "Failed to record data (end)" );
    }
}
