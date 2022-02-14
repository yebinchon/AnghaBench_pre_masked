
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef scalar_t__ stime_t ;
struct TYPE_3__ {unsigned int i_buffer; void* i_pts; void* i_dts; scalar_t__* p_buffer; int i_flags; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,unsigned int,unsigned int*,scalar_t__*,scalar_t__*,int *,int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__*,unsigned int) ;

__attribute__((used)) static inline int FUNC_3( vlc_object_t *VAR_3, block_t *VAR_4, int VAR_5 )
{
    unsigned int VAR_6 = 0;
    stime_t VAR_7 = -1;
    stime_t VAR_8 = -1;
    uint8_t VAR_9 = 0;
    bool VAR_10 = 0;

    if( FUNC_1( VAR_3, VAR_4->p_buffer, VAR_4->i_buffer,
                        &VAR_6, &VAR_8, &VAR_7, &VAR_9, &VAR_10 ) != VAR_2 )
        return VAR_1;

    if( VAR_10 )
        VAR_4->i_flags |= VAR_0;

    if( VAR_5 >= 0 )
        VAR_6 += VAR_5;
    else if( VAR_4->i_buffer > VAR_6 + 3 &&
             ( FUNC_2( VAR_4->p_buffer, VAR_4->i_buffer ) == 0xa001 ||
               FUNC_2( VAR_4->p_buffer, VAR_4->i_buffer ) == 0xbda1 ) )
        VAR_6 += 4 + VAR_4->p_buffer[VAR_6+3];

    if( VAR_4->i_buffer <= VAR_6 )
    {
        return VAR_1;
    }

    VAR_4->p_buffer += VAR_6;
    VAR_4->i_buffer -= VAR_6;


    if( VAR_7 >= 0 && VAR_8 < 0 )
        VAR_8 = VAR_7;

    if( VAR_8 >= 0 )
        VAR_4->i_dts = FUNC_0( VAR_8 );
    if( VAR_7 >= 0 )
        VAR_4->i_pts = FUNC_0( VAR_7 );

    return VAR_2;
}
