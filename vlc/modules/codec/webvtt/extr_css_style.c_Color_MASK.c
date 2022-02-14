
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; scalar_t__* psz; TYPE_3__* function; } ;
typedef TYPE_4__ vlc_css_term_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int i_count; TYPE_2__* seq; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_7__ {TYPE_1__ term; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*,char*) ;
 unsigned int FUNC_1 (scalar_t__*,int*) ;

__attribute__((used)) static void FUNC_2( vlc_css_term_t VAR_5,
                   int *VAR_6, uint8_t *VAR_7,
                   uint16_t *VAR_8, int VAR_9, int VAR_10 )
{
    if( VAR_5.type == VAR_1 )
    {
        if( VAR_5.function )
        {
            if( ( !FUNC_0( VAR_5.psz, "rgb" ) && VAR_5.function->i_count == 3 ) ||
                ( !FUNC_0( VAR_5.psz, "rgba" ) && VAR_5.function->i_count == 4 ) )
            {
                *VAR_6 = (((int)VAR_5.function->seq[0].term.val) << 16) |
                         (((int)VAR_5.function->seq[1].term.val) << 8) |
                          ((int)VAR_5.function->seq[2].term.val);
                *VAR_8 |= VAR_9;
                if( VAR_5.psz[3] != 0 )
                {
                    *VAR_7 = VAR_5.function->seq[3].term.val * VAR_0;
                    *VAR_8 |= VAR_10;
                }
            }
        }
    }
    else if( VAR_5.type == VAR_4 ||
             VAR_5.type == VAR_2 ||
             VAR_5.type == VAR_3 )
    {
        bool VAR_11 = 0;
        unsigned VAR_12 = FUNC_1( VAR_5.psz, &VAR_11 );
        if( VAR_11 )
        {
            *VAR_7 = (VAR_12 & 0xFF000000) >> 24;
            *VAR_6 = VAR_12 & 0x00FFFFFF;
            *VAR_8 |= VAR_9|VAR_10;
        }
    }
}
