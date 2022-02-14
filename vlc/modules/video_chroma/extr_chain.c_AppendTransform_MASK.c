
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_transform_t ;
typedef int filter_t ;
typedef int filter_chain_t ;
struct TYPE_6__ {int orientation; } ;
struct TYPE_7__ {TYPE_1__ video; } ;
typedef TYPE_2__ es_format_t ;
typedef int config_chain_t ;
 char* FUNC_0 (char**,int **,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int *,TYPE_2__ const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static filter_t * FUNC_6( filter_chain_t *VAR_0, const es_format_t *VAR_1,
                                   const es_format_t *VAR_2 )
{
    video_transform_t VAR_3 = FUNC_5(VAR_1->video.orientation, VAR_2->video.orientation);

    const char *VAR_4;

    switch ( VAR_3 ) {

        case 130:
            VAR_4 = "90";
            break;
        case 132:
            VAR_4 = "180";
            break;
        case 131:
            VAR_4 = "270";
            break;
        case 133:
            VAR_4 = "hflip";
            break;
        case 128:
            VAR_4 = "vflip";
            break;
        case 129:
            VAR_4 = "transpose";
            break;
        case 134:
            VAR_4 = "antitranspose";
            break;
        default:
            VAR_4 = ((void*)0);
            break;
    }

    if( !VAR_4 )
        return ((void*)0);

    config_chain_t *VAR_5;
    char *VAR_6;
    char VAR_7[100];
    FUNC_4( VAR_7, 100, "transform{type=%s}", VAR_4 );
    char *VAR_8 = FUNC_0( &VAR_6, &VAR_5, VAR_7 );

    filter_t *VAR_9 = FUNC_2( VAR_0, VAR_6, VAR_5, VAR_2 );

    FUNC_1(VAR_5);
    FUNC_3(VAR_6);
    FUNC_3(VAR_8);

    return VAR_9;
}
