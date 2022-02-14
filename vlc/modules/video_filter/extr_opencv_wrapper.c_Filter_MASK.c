
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int video_format_t ;
struct TYPE_27__ {scalar_t__ i_planes; int format; } ;
typedef TYPE_1__ picture_t ;
struct TYPE_28__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_29__ {scalar_t__ i_wrapper_output; scalar_t__ i_internal_chroma; TYPE_1__* p_proc_image; int p_image; int * p_cv_image; TYPE_4__* p_opencv; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_30__ {int (* pf_video_filter ) (TYPE_4__*,TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_1__*) ;

__attribute__((used)) static picture_t* FUNC_12( filter_t* VAR_4, picture_t* VAR_5 )
{
    filter_sys_t *VAR_6 = VAR_4->p_sys;
    picture_t* VAR_7 = FUNC_3( VAR_4 );
    if( VAR_7 == ((void*)0) ) {
        FUNC_6( VAR_4, "couldn't get a p_outpic!" );
        FUNC_10( VAR_5 );
        return ((void*)0);
    }


    if (VAR_6->i_wrapper_output == VAR_3)
        FUNC_7( VAR_7, VAR_5 );

    FUNC_2( VAR_4, VAR_5 );


    VAR_6->p_opencv->pf_video_filter( VAR_6->p_opencv, (picture_t*)&(VAR_6->p_cv_image[0]) );

    if(VAR_6->i_wrapper_output == VAR_2) {

        if( (VAR_6->p_proc_image) &&
            (VAR_6->p_proc_image->i_planes > 0) &&
            (VAR_6->i_internal_chroma != VAR_0) ) {


            video_format_t VAR_8 = VAR_5->format;







            picture_t* VAR_9 = FUNC_4(
                        VAR_6->p_image,
                        VAR_6->p_proc_image,
                        &(VAR_6->p_proc_image->format),
                        &VAR_8 );

            FUNC_8( VAR_7, VAR_9 );
            FUNC_0( VAR_7, VAR_9 );
        } else if( VAR_6->i_internal_chroma == VAR_0 ) {
            FUNC_8( VAR_7, VAR_6->p_proc_image );
            FUNC_9( VAR_7, VAR_6->p_proc_image );
        }
    }

    FUNC_1( VAR_4 );
    FUNC_10( VAR_5 );


    FUNC_5( VAR_4, "Filter() done" );


    if( VAR_6->i_wrapper_output != VAR_1 ) {
        return VAR_7;
    } else {
        FUNC_10( VAR_7 );
        return ((void*)0);
    }
}
