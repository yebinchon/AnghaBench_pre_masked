
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


typedef int vlc_object_t ;
typedef int uint32_t ;
struct TYPE_21__ {int i_rate; } ;
struct TYPE_19__ {scalar_t__ i_cat; TYPE_2__ audio; } ;
struct TYPE_20__ {scalar_t__ i_cat; } ;
struct TYPE_23__ {TYPE_14__ fmt_out; TYPE_1__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ encoder_t ;
struct TYPE_24__ {int end_date; int i_min_output; TYPE_6__* p_dmo; int * hmsdmo_dll; } ;
typedef TYPE_5__ encoder_sys_t ;
struct TYPE_25__ {TYPE_3__* vt; } ;
struct TYPE_22__ {int (* Release ) (int *) ;scalar_t__ (* GetOutputSizeInfo ) (TYPE_6__*,int ,int *,int *) ;scalar_t__ (* GetInputSizeInfo ) (TYPE_6__*,int ,int *,int *,int *) ;} ;
typedef int IUnknown ;
typedef TYPE_6__ IMediaObject ;
typedef int * HINSTANCE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_6__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int **,TYPE_6__**,TYPE_14__*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (TYPE_5__*) ;
 TYPE_5__* FUNC_9 (int) ;
 int FUNC_10 (TYPE_4__*,char*,int ,int ,...) ;
 int FUNC_11 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_12 (TYPE_6__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_13 (TYPE_6__*,int ,int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16( vlc_object_t *VAR_5 )
{
    encoder_t *VAR_6 = (encoder_t*)VAR_5;
    encoder_sys_t *VAR_7 = ((void*)0);
    IMediaObject *VAR_8 = ((void*)0);
    HINSTANCE VAR_9 = ((void*)0);


    if( FUNC_4(FUNC_0( ((void*)0), VAR_1 )) )
        FUNC_15();

    if( FUNC_6( VAR_5, &VAR_9, &VAR_8, &VAR_6->fmt_out, 1 )
        != VAR_4 )
    {
        VAR_9 = 0;
        VAR_8 = 0;
        goto error;
    }

    if( VAR_6->fmt_in.i_cat == VAR_2 )
    {
        if( FUNC_3( VAR_6, VAR_8 ) != VAR_4 ) goto error;
    }
    else
    {
        if( FUNC_2( VAR_6, VAR_8 ) != VAR_4 ) goto error;
    }


    if( ( VAR_6->p_sys = VAR_7 = FUNC_9(sizeof(*VAR_7)) ) == ((void*)0) )
    {
        goto error;
    }

    VAR_7->hmsdmo_dll = VAR_9;
    VAR_7->p_dmo = VAR_8;


    {
        uint32_t VAR_10, VAR_11, VAR_12;

        if( VAR_8->vt->GetInputSizeInfo( VAR_8, 0, &VAR_10, &VAR_11, &VAR_12 ) )
            FUNC_11( VAR_6, "GetInputSizeInfo() failed" );
        else
            FUNC_10( VAR_6, "GetInputSizeInfo(): bytes %i, align %i, %i",
                     VAR_10, VAR_11, VAR_12 );
    }


    {
        uint32_t VAR_13, VAR_14;

        VAR_7->i_min_output = 0;
        if( VAR_8->vt->GetOutputSizeInfo( VAR_8, 0, &VAR_13, &VAR_14 ) )
        {
            FUNC_11( VAR_6, "GetOutputSizeInfo() failed" );
            goto error;
        }
        else
        {
            FUNC_10( VAR_6, "GetOutputSizeInfo(): bytes %i, align %i",
                     VAR_13, VAR_14 );
            VAR_7->i_min_output = VAR_13;
        }
    }


    VAR_6->fmt_out.i_cat = VAR_6->fmt_in.i_cat;
    if( VAR_6->fmt_out.i_cat == VAR_0 )
        FUNC_7( &VAR_7->end_date, VAR_6->fmt_out.audio.i_rate, 1 );
    else
        FUNC_7( &VAR_7->end_date, 25 , 1 );

    return VAR_4;

 error:

    if( VAR_8 ) VAR_8->vt->Release( (IUnknown *)VAR_8 );
    if( VAR_9 ) FUNC_5( VAR_9 );


    FUNC_1();

    FUNC_8( VAR_7 );

    return VAR_3;
}
