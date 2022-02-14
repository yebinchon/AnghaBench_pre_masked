
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_9__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_8__ {scalar_t__ i_codec; int i_extra; int p_extra; } ;
struct TYPE_10__ {TYPE_1__ fmt; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*,int const*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int const*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_5 (int ,int const**,scalar_t__) ;

__attribute__((used)) static int FUNC_6( demux_t *VAR_6, uint64_t VAR_7 )
{
    demux_sys_t *VAR_8 = VAR_6->p_sys;
    const uint8_t *VAR_9;

    if( VAR_7 > VAR_0 )
    {
        FUNC_4( VAR_6, "Magic Cookie chunk too big" );
        return VAR_3;
    }

    if( FUNC_5( VAR_6->s, &VAR_9, VAR_7 ) < (ssize_t)VAR_7 )
    {
        FUNC_4( VAR_6, "Couldn't peek extra data" );
        return VAR_3;
    }

    if( VAR_8->fmt.i_codec == VAR_1 )
    {
        int VAR_10 = FUNC_1( VAR_6, VAR_9, VAR_7 );
        if( VAR_10 ) return VAR_10;
    }
    else if( VAR_8->fmt.i_codec == VAR_2 )
    {
        int VAR_11 = FUNC_0( VAR_6, VAR_9, VAR_7 );
        if( VAR_11 ) return VAR_11;
    }
    else
    {
        VAR_8->fmt.i_extra = (int)VAR_7;
        VAR_8->fmt.p_extra = FUNC_2( VAR_7 );

        if( !VAR_8->fmt.p_extra )
        {
            return VAR_4;
        }
        FUNC_3( VAR_8->fmt.p_extra, VAR_9, VAR_8->fmt.i_extra );
    }

    return VAR_5;
}
