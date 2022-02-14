
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_frame_size; unsigned int i_frame_length; } ;
typedef TYPE_1__ vlc_dts_header_t ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const*,int ) ;

__attribute__((used)) static int FUNC_2( const uint8_t *VAR_3, unsigned *VAR_4 )
{
    FUNC_0(VAR_4);

    vlc_dts_header_t VAR_5;
    if( FUNC_1( &VAR_5, VAR_3, VAR_0 ) == VAR_2
     && VAR_5.i_frame_size > 0 && VAR_5.i_frame_size <= 8192 )
    {
        if( VAR_4 )
            *VAR_4 = VAR_5.i_frame_length;
        return VAR_5.i_frame_size;
    }
    else
        return VAR_1;
}
