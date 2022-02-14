
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* i_frame_size; void* i_substream_header_size; int syncword; } ;
typedef TYPE_1__ vlc_dts_header_t ;
typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
typedef void* uint16_t ;
typedef int bs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void const*,int ) ;
 void* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_5( vlc_dts_header_t *VAR_3,
                                      const void *VAR_4 )
{
    bs_t VAR_5;
    FUNC_0( &VAR_5, VAR_4, VAR_1 );
    FUNC_3( &VAR_5, 32 + 8 + 2 );
    uint8_t VAR_6 = FUNC_2( &VAR_5 );
    uint32_t VAR_7;
    uint16_t VAR_8;
    if( VAR_6 == 0 )
    {
        VAR_8 = FUNC_1( &VAR_5, 8 );
        VAR_7 = FUNC_1( &VAR_5, 16 );
    }
    else
    {
        VAR_8 = FUNC_1( &VAR_5, 12 );
        VAR_7 = FUNC_1( &VAR_5, 20 );
    }
    FUNC_4( VAR_3, 0, sizeof(*VAR_3) );
    VAR_3->syncword = VAR_0;
    VAR_3->i_substream_header_size = VAR_8 + 1;
    VAR_3->i_frame_size = VAR_7 + 1;
    return VAR_2;
}
