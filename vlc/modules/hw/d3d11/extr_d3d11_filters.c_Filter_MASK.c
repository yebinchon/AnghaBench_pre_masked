
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


struct TYPE_22__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_23__ {int slice_index; int * resource; int context; int * processorInput; } ;
typedef TYPE_4__ picture_sys_d3d11_t ;
struct TYPE_20__ {int video; } ;
struct TYPE_24__ {TYPE_1__ fmt_out; TYPE_6__* p_sys; } ;
typedef TYPE_5__ filter_t ;
struct TYPE_25__ {int d3d_dev; int ** procOutput; TYPE_2__* out; int Saturation; int Hue; int Brightness; int Contrast; int ** procInput; int d3d_proc; } ;
typedef TYPE_6__ filter_sys_t ;
struct TYPE_21__ {int resource; } ;
typedef int ID3D11VideoProcessorOutputView ;
typedef int ID3D11VideoProcessorInputView ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_6__*,int ,int *,int *,int *,int *) ;
 int FUNC_2 (TYPE_5__*,int *,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int ,int *) ;
 size_t VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_3__* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static picture_t *FUNC_11(filter_t *VAR_5, picture_t *VAR_6)
{
    filter_sys_t *VAR_7 = VAR_5->p_sys;

    picture_sys_d3d11_t *VAR_8 = FUNC_0(VAR_6);
    if (FUNC_3( FUNC_2(VAR_5, &VAR_7->d3d_proc, VAR_8) ))
    {
        FUNC_9( VAR_6 );
        return ((void*)0);
    }

    picture_t *VAR_9 = FUNC_7( VAR_5 );
    if( !VAR_9 )
    {
        FUNC_9( VAR_6 );
        return ((void*)0);
    }
    picture_sys_d3d11_t *VAR_10 = VAR_9->p_sys;
    if (FUNC_10(!VAR_10))
    {


        FUNC_9( VAR_6 );
        return ((void*)0);
    }

    FUNC_8( VAR_9, VAR_6 );

    ID3D11VideoProcessorInputView *VAR_11[4] = {
        VAR_8->processorInput,
        VAR_7->procInput[0],
        VAR_7->procInput[1],
        VAR_7->procInput[0]
    };

    ID3D11VideoProcessorOutputView *VAR_12[4] = {
        VAR_7->procOutput[0],
        VAR_7->procOutput[1],
        VAR_7->procOutput[0],
        VAR_7->procOutput[1]
    };

    FUNC_5( &VAR_7->d3d_dev );

    size_t VAR_13 = 0, VAR_14 = 0;

    if ( FUNC_1( VAR_7,
                      VAR_1, &VAR_7->Contrast,
                      VAR_11[VAR_13], VAR_12[VAR_13], &VAR_5->fmt_out.video ) )
    {
        VAR_13++;
        VAR_14++;
    }

    if ( FUNC_1( VAR_7,
                      VAR_0, &VAR_7->Brightness,
                      VAR_11[VAR_13], VAR_12[VAR_13], &VAR_5->fmt_out.video ) )
    {
        VAR_13++;
        VAR_14++;
    }

    if ( FUNC_1( VAR_7,
                      VAR_2, &VAR_7->Hue,
                      VAR_11[VAR_13], VAR_12[VAR_13], &VAR_5->fmt_out.video ) )
    {
        VAR_13++;
        VAR_14++;
    }

    if ( FUNC_1( VAR_7,
                      VAR_3, &VAR_7->Saturation,
                      VAR_11[VAR_13], VAR_12[VAR_13], &VAR_5->fmt_out.video ) )
    {
        VAR_13++;
        VAR_14++;
    }

    if (VAR_14 == 0)
    {
        FUNC_4(VAR_10->context,
                                                  VAR_10->resource[VAR_4],
                                                  VAR_10->slice_index,
                                                  0, 0, 0,
                                                  VAR_8->resource[VAR_4],
                                                  VAR_8->slice_index,
                                                  ((void*)0));
    }
    else
    {
        FUNC_4(VAR_10->context,
                                                  VAR_10->resource[VAR_4],
                                                  VAR_10->slice_index,
                                                  0, 0, 0,
                                                  VAR_7->out[VAR_12[VAR_13] == VAR_7->procOutput[0] ? 1 : 0].resource,
                                                  0,
                                                  ((void*)0));
    }

    FUNC_6( &VAR_7->d3d_dev );

    FUNC_9( VAR_6 );
    return VAR_9;
}
