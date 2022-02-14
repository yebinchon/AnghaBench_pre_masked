
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char** reads; scalar_t__ section; TYPE_3__* p_cue; int priv; TYPE_3__* (* pf_get_cue ) (int ) ;int (* pf_cue_done ) (int ,TYPE_3__*) ;} ;
typedef TYPE_1__ webvtt_text_parser_t ;
typedef scalar_t__ vlc_tick_t ;
struct TYPE_9__ {char* psz_text; char const* psz_id; scalar_t__ i_stop; scalar_t__ i_start; int * psz_attrs; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char**,char*,char*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;
 char* FUNC_5 (char const*,char) ;
 int * FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,TYPE_3__*) ;
 int FUNC_9 (int ,TYPE_3__*) ;
 int FUNC_10 (int ,TYPE_3__*) ;
 TYPE_3__* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (char const*,scalar_t__*) ;

void FUNC_14( webvtt_text_parser_t *VAR_5, char *VAR_6 )
{
    if( VAR_6 == ((void*)0) )
    {
        if( VAR_5->p_cue )
        {
            if( VAR_5->pf_cue_done )
                VAR_5->pf_cue_done( VAR_5->priv, VAR_5->p_cue );
            VAR_5->p_cue = ((void*)0);
        }
        return;
    }

    FUNC_3(VAR_5->reads[0]);
    VAR_5->reads[0] = VAR_5->reads[1];
    VAR_5->reads[1] = VAR_5->reads[2];
    VAR_5->reads[2] = VAR_6;


    if( FUNC_12(VAR_5->section == VAR_4) )
    {
        if( FUNC_0( VAR_6, "\xEF\xBB\xBFWEBVTT" ) ||
            FUNC_0( VAR_6, "WEBVTT" ) )
        {
            VAR_5->section = VAR_4;
            if( VAR_5->p_cue )
            {
                if( VAR_5->pf_cue_done )
                    VAR_5->pf_cue_done( VAR_5->priv, VAR_5->p_cue );
                VAR_5->p_cue = ((void*)0);
            }
            return;
        }
        else if( FUNC_0( VAR_6, "STYLE" ) )
        {
            VAR_5->section = VAR_3;
            FUNC_2( VAR_5, VAR_6, 1 );
            return;
        }
        else if( FUNC_0( VAR_6, "REGION" ) )
        {
            VAR_5->section = VAR_2;
            FUNC_2( VAR_5, VAR_6, 1 );
            return;
        }
        else if( FUNC_0( VAR_6, "NOTE" ) )
        {
            VAR_5->section = VAR_1;
            return;
        }
        else if( VAR_6[0] != 0 )
        {
            VAR_5->section = VAR_0;
        }
    }

    if( FUNC_4(VAR_5->section == VAR_0) )
    {
        if( VAR_5->p_cue )
        {
            if( VAR_6[0] == 0 )
            {
                if( VAR_5->p_cue )
                {
                    if( VAR_5->pf_cue_done )
                        VAR_5->pf_cue_done( VAR_5->priv, VAR_5->p_cue );
                    VAR_5->p_cue = ((void*)0);
                }
            }
            else
            {
                char *VAR_7;
                if( -1 < FUNC_1( &VAR_7, "%s\n%s", VAR_5->p_cue->psz_text, VAR_6 ) )
                {
                    FUNC_3( VAR_5->p_cue->psz_text );
                    VAR_5->p_cue->psz_text = VAR_7;
                }
                return;
            }
        }

        if( VAR_5->reads[1] == ((void*)0) )
            return;

        const char *VAR_8 = FUNC_7( VAR_5->reads[1], " --> " );
        if( VAR_8 )
        {
            vlc_tick_t VAR_9, VAR_10;

            if( FUNC_13( VAR_5->reads[1], &VAR_9 ) &&
                FUNC_13( VAR_8 + 5, &VAR_10 ) && VAR_9 <= VAR_10 )
            {
                const char *VAR_11 = FUNC_5( VAR_8 + 5 + 5, ' ' );
                VAR_5->p_cue = ( VAR_5->pf_get_cue ) ? VAR_5->pf_get_cue( VAR_5->priv ) : ((void*)0);
                if( VAR_5->p_cue )
                {
                    VAR_5->p_cue->psz_attrs = ( VAR_11 ) ? FUNC_6( VAR_11 ) : ((void*)0);
                    VAR_5->p_cue->psz_id = VAR_5->reads[0];
                    VAR_5->reads[0] = ((void*)0);
                    VAR_5->p_cue->psz_text = VAR_5->reads[2];
                    VAR_5->reads[2] = ((void*)0);
                    VAR_5->p_cue->i_start = VAR_9;
                    VAR_5->p_cue->i_stop = VAR_10;
                }
            }
        }
    }
    else if( VAR_5->section == VAR_3 )
    {
        FUNC_2( VAR_5, VAR_6, 0 );
        if( VAR_6[0] == 0 )
            VAR_5->section = VAR_4;
    }
    else if( VAR_5->section == VAR_2 )
    {
        FUNC_2( VAR_5, VAR_6, 0 );
        if( VAR_6[0] == 0 )
            VAR_5->section = VAR_4;
    }
    else if( VAR_5->section == VAR_1 )
    {
        if( VAR_6[0] == 0 )
            VAR_5->section = VAR_4;
    }
}
