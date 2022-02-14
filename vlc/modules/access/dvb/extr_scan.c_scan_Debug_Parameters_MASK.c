
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int i_max; int i_min; } ;
struct TYPE_5__ {int i_max; int i_min; } ;
struct TYPE_7__ {int type; char* psz_scanlist_file; scalar_t__ b_free_only; scalar_t__ b_use_nit; scalar_t__ b_modulation_set; scalar_t__ b_exhaustive; TYPE_2__ bandwidth; TYPE_1__ frequency; } ;
typedef TYPE_3__ scan_parameter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1( vlc_object_t *VAR_2, const scan_parameter_t *VAR_3 )
{
    const char VAR_4[3] = {'T', 'S', 'C' };
    if( !VAR_3->type )
        return;

    FUNC_0( VAR_2, "DVB-%c scanning:", VAR_4[ VAR_3->type - 1 ] );

    if( VAR_3->type != VAR_1 )
    {
        FUNC_0( VAR_2, " - frequency [%d, %d]",
                 VAR_3->frequency.i_min, VAR_3->frequency.i_max );
        FUNC_0( VAR_2, " - bandwidth [%d,%d]",
                 VAR_3->bandwidth.i_min, VAR_3->bandwidth.i_max );
        FUNC_0( VAR_2, " - exhaustive mode %s", VAR_3->b_exhaustive ? "on" : "off" );
    }

    if( VAR_3->type == VAR_0 )
        FUNC_0( VAR_2, " - scannin modulations %s", VAR_3->b_modulation_set ? "off" : "on" );

    if( VAR_3->type == VAR_1 && VAR_3->psz_scanlist_file )
        FUNC_0( VAR_2, " - satellite [%s]", VAR_3->psz_scanlist_file );

    FUNC_0( VAR_2, " - use NIT %s", VAR_3->b_use_nit ? "on" : "off" );
    FUNC_0( VAR_2, " - FTA only %s", VAR_3->b_free_only ? "on" : "off" );
}
