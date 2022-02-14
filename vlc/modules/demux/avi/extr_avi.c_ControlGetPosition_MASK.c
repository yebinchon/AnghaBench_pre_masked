
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double uint64_t ;
struct TYPE_4__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {scalar_t__ i_length; scalar_t__ i_time; } ;
typedef TYPE_2__ demux_sys_t ;


 double FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static double FUNC_2( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;

    if( VAR_1->i_length != 0 )
    {
        return (double)VAR_1->i_time / (double)VAR_1->i_length;
    }
    else if( FUNC_0( VAR_0->s ) > 0 )
    {
        double VAR_2 = (uint64_t)FUNC_1( VAR_0->s );
        return VAR_2 / FUNC_0( VAR_0->s );
    }
    return 0.0;
}
