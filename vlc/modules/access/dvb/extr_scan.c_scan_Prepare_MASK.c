
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int i_scanlist; scalar_t__ p_scanlist; int p_obj; } ;
typedef TYPE_1__ scan_t ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ scanlist_format; scalar_t__ psz_scanlist_file; } ;
typedef TYPE_2__ scan_parameter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3( vlc_object_t *VAR_4, const scan_parameter_t *VAR_5, scan_t *VAR_6 )
{
    if( VAR_5->type == VAR_2 &&
        VAR_5->psz_scanlist_file && VAR_5->scanlist_format == VAR_0 )
    {
        VAR_6->p_scanlist =
                FUNC_1( VAR_4, VAR_5->psz_scanlist_file, &VAR_6->i_scanlist );
        if( VAR_6->p_scanlist )
            FUNC_0( VAR_6->p_obj, "using satellite config file (%s)", VAR_5->psz_scanlist_file );
    }
    else if( VAR_5->psz_scanlist_file &&
             VAR_5->scanlist_format == VAR_1 )
    {
        if( VAR_5->type == VAR_3 )
        {
            VAR_6->p_scanlist = FUNC_2( VAR_4,
                                                       VAR_5->psz_scanlist_file,
                                                       &VAR_6->i_scanlist );
        }
    }
}
