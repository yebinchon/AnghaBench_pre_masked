
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_blockalign; int i_rate; } ;
struct TYPE_5__ {int i_bitrate; TYPE_1__ audio; } ;
typedef TYPE_2__ es_format_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( unsigned int *VAR_2, int *VAR_3,
                            const es_format_t *VAR_4 )
{
    if( VAR_4->i_bitrate <= 0 )
        return VAR_0;

    *VAR_3 = ( VAR_4->audio.i_blockalign * VAR_4->audio.i_rate * 8)
                    / VAR_4->i_bitrate;
    *VAR_2 = VAR_4->audio.i_blockalign;

    return VAR_1;
}
