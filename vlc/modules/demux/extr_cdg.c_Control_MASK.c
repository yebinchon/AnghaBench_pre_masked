
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int pts; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int,int,int,int,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_4, int VAR_5, va_list VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_4->p_sys;
    uint64_t VAR_8 = FUNC_4( VAR_4->s );
    int VAR_9 = FUNC_2( VAR_4->s, 0, -1,
                                       8*VAR_1*VAR_0, VAR_1,
                                       VAR_5, VAR_6 );
    if( !VAR_9 && ( VAR_5 == VAR_2 || VAR_5 == VAR_3 ) )
    {
        FUNC_1( &VAR_7->pts, FUNC_0( VAR_4 ) );
        if ( VAR_8 > FUNC_4( VAR_4->s ) )
            VAR_9 = FUNC_3( VAR_4->s, 0 );
        else
            VAR_9 = FUNC_3( VAR_4->s, VAR_8 );
    }

    return VAR_9;
}
