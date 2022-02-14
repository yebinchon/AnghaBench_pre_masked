
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {int force; } ;
struct TYPE_10__ {int pf_control; int out; int pf_demux; int s; TYPE_3__* p_sys; TYPE_1__ obj; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_11__ {int i_frame_size_estimate; int* p_peek; int b_still; int * p_es; int fmt; void* i_frame_length; void* i_still_end; scalar_t__ i_level; int * psz_separator; int i_time; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*,int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 char* FUNC_7 (int ) ;
 size_t FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 float FUNC_11 (TYPE_2__*,char*) ;
 TYPE_3__* FUNC_12 (int *,int) ;
 int * FUNC_13 (int *,char*) ;
 int FUNC_14 (int ,int *,int) ;
 void* FUNC_15 (float) ;

__attribute__((used)) static int FUNC_16( vlc_object_t * VAR_10 )
{
    demux_t *VAR_11 = (demux_t*)VAR_10;
    int VAR_12;
    bool VAR_13 = 0;

    if( FUNC_1( VAR_11->s ) && !VAR_11->obj.force )

        return VAR_5;

    demux_sys_t *VAR_14 = FUNC_12( VAR_10, sizeof (*VAR_14) );
    if( FUNC_10(VAR_14 == ((void*)0)) )
        return VAR_6;

    VAR_11->p_sys = VAR_14;
    VAR_14->p_es = ((void*)0);
    VAR_14->i_time = VAR_8;
    VAR_14->i_level = 0;

    VAR_14->psz_separator = ((void*)0);
    VAR_14->i_frame_size_estimate = 15 * 1024;

    char *VAR_15 = FUNC_7( VAR_11->s );
    if ( VAR_15 )
    {

        char* VAR_16 = FUNC_9( VAR_15, "boundary=" );
        if( VAR_16 )
        {
            VAR_16 += FUNC_8( "boundary=" );
            size_t VAR_17 = FUNC_8( VAR_16 );
            if( VAR_17 > 2 && VAR_16[0] == '"'
                && VAR_16[VAR_17-1] == '"' )
            {
                VAR_16[VAR_17-1] = '\0';
                VAR_16++;
            }
            VAR_14->psz_separator = FUNC_13( VAR_10, VAR_16 );
            if( !VAR_14->psz_separator )
            {
                FUNC_5( VAR_15 );
                return VAR_6;
            }
        }
        FUNC_5( VAR_15 );
    }

    VAR_13 = FUNC_0( VAR_11, &VAR_12);
    if( VAR_13 )
    {
        VAR_11->pf_demux = VAR_1;
        if( FUNC_14( VAR_11->s, ((void*)0), VAR_12 ) < VAR_12 )
            return VAR_5;
    }
    else if( VAR_12 == 0 )
    {

        if( VAR_14->p_peek[0] == 0xFF && VAR_14->p_peek[1] == 0xD8 )
        {
            FUNC_6( VAR_11, "JPEG SOI marker detected" );
            VAR_11->pf_demux = VAR_2;
            VAR_14->i_level++;
        }
        else
        {
            return VAR_5;
        }
    }
    else
    {
        return VAR_5;
    }


    float VAR_18 = FUNC_11( VAR_11, "mjpeg-fps" );

    VAR_14->i_still_end = VAR_9;
    if( FUNC_2( VAR_11, ".jpeg" ) ||
        FUNC_2( VAR_11, ".jpg" ) )
    {

        VAR_14->b_still = 1;
        if( VAR_18 == 0.f )

            VAR_18 = 1.f;
    }
    else
        VAR_14->b_still = 0;
    VAR_14->i_frame_length = VAR_18 ? FUNC_15(VAR_18) : VAR_9;

    FUNC_3( &VAR_14->fmt, VAR_3, VAR_4 );

    VAR_14->p_es = FUNC_4( VAR_11->out, &VAR_14->fmt );
    if( FUNC_10(VAR_14->p_es == ((void*)0)) )
        return VAR_6;

    VAR_11->pf_control = VAR_0;
    return VAR_7;
}
