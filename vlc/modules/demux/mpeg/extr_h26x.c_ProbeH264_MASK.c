
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int b_sps; int b_pps; } ;
typedef TYPE_1__ h264_probe_ctx_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;

__attribute__((used)) static int FUNC_0( const uint8_t *VAR_8, size_t VAR_9, void *VAR_10 )
{
    h264_probe_ctx_t *VAR_11 = (h264_probe_ctx_t *) VAR_10;

    if( VAR_9 < 1 )
        return -1;
    const uint8_t VAR_12 = VAR_8[0] & 0x1F;
    const uint8_t VAR_13 = VAR_8[0] & 0x60;

    if( (VAR_8[0] & 0x80) )
        return -1;




    if( VAR_12 == VAR_5 )
    {
        if( VAR_13 == 0 || VAR_9 < 3 ||
           (VAR_8[2] & 0x03) )
            return -1;
        VAR_11->b_sps = 1;
    }
    else if( VAR_12 == VAR_1 )
    {
        if( VAR_13 == 0 )
            return -1;
        VAR_11->b_pps = 1;
    }
    else if( VAR_12 == VAR_4 )
    {
        if( VAR_13 == 0 || ! VAR_11->b_pps || ! VAR_11->b_sps )
            return -1;
        else
            return 1;
    }
    else if( VAR_12 == VAR_0 )
    {
        if( VAR_13 || VAR_11->b_pps || VAR_11->b_sps )
            return -1;
    }
    else if ( VAR_12 == VAR_3 )
    {
        if( VAR_13 )
            return -1;
    }

    else if ( VAR_12 == VAR_6 ||
              VAR_12 == VAR_7 )
    {
        if( VAR_13 == 0 || !VAR_11->b_sps )
            return -1;
    }
    else if( VAR_12 == VAR_2 )
    {
        if( VAR_13 == 0 || !VAR_11->b_pps || !VAR_11->b_sps )
            return -1;
    }
    else return -1;

    return 0;
}
