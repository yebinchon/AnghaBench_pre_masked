
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
typedef unsigned int const uint64_t ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_6__ {int i_extra; char* p_extra; } ;
struct TYPE_8__ {TYPE_1__ fmt; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,unsigned int const) ;
 int FUNC_3 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_4( demux_t *VAR_2, const uint8_t *VAR_3, uint64_t VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_2->p_sys;

    const unsigned int VAR_6 = 24;
    const unsigned int VAR_7 = 36;
    int VAR_8;

    if( VAR_4 == VAR_6 || VAR_4 == VAR_7 )
    {
        VAR_8 = VAR_7;
    }
    else
    {
        FUNC_3( VAR_2, "Unknown alac magic cookie. Passing it on to the decoder as is and hoping for the best." );
        VAR_8 = ( int )VAR_4;
    }

    VAR_5->fmt.i_extra = VAR_8;
    VAR_5->fmt.p_extra = FUNC_1( VAR_8 );

    if( !VAR_5->fmt.p_extra )
        return VAR_0;

    uint8_t *VAR_9 = ( uint8_t * )VAR_5->fmt.p_extra;

    if( VAR_4 == VAR_6 )
    {
        FUNC_0( VAR_9, 36 );
        FUNC_2( VAR_9 + 4, "alac", 4 );
        FUNC_0( VAR_9 + 8, 0 );
        FUNC_2( VAR_9 + 12, VAR_3, 24 );
    }
    else
    {
        FUNC_2( VAR_5->fmt.p_extra, VAR_3, VAR_4 );
    }

    return VAR_1;
}
