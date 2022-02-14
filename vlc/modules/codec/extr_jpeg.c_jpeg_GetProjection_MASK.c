
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float yaw; float pitch; float roll; float fov; } ;
struct TYPE_8__ {TYPE_1__ pose; int projection_mode; } ;
typedef TYPE_2__ video_format_t ;
typedef TYPE_3__* jpeg_saved_marker_ptr ;
typedef TYPE_4__* j_decompress_ptr ;
struct TYPE_10__ {TYPE_3__* marker_list; } ;
struct TYPE_9__ {scalar_t__ marker; int data_length; scalar_t__ data; struct TYPE_9__* next; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,float*,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(j_decompress_ptr VAR_3, video_format_t *VAR_4)
{
    jpeg_saved_marker_ptr VAR_5 = ((void*)0);
    jpeg_saved_marker_ptr VAR_6 = VAR_3->marker_list;

    while (VAR_6)
    {
        if (VAR_6->marker == VAR_0)
        {
            if(VAR_6->data_length >= 32 &&
               !FUNC_3(VAR_6->data, VAR_1, 29))
            {
                VAR_5 = VAR_6;
                break;
            }
        }
        VAR_6 = VAR_6->next;
    }

    if (VAR_5 == ((void*)0))
        return;
    char *VAR_7 = FUNC_2(VAR_5->data_length - 29 + 1);
    if (FUNC_6(VAR_7 == ((void*)0)))
        return;
    FUNC_4(VAR_7, VAR_5->data + 29, VAR_5->data_length - 29);
    VAR_7[VAR_5->data_length - 29] = '\0';



    if (FUNC_5(VAR_7, "ProjectionType=\"equirectangular\"") ||
        FUNC_5(VAR_7, "ProjectionType>equirectangular"))
        VAR_4->projection_mode = VAR_2;


    float VAR_8;
    if (FUNC_1(VAR_7, &VAR_8, "PoseHeadingDegrees"))
        VAR_4->pose.yaw = VAR_8;

    if (FUNC_1(VAR_7, &VAR_8, "PosePitchDegrees"))
        VAR_4->pose.pitch = VAR_8;

    if (FUNC_1(VAR_7, &VAR_8, "PoseRollDegrees"))
        VAR_4->pose.roll = VAR_8;


    if (FUNC_1(VAR_7, &VAR_8, "InitialViewHeadingDegrees"))
        VAR_4->pose.yaw = VAR_8;

    if (FUNC_1(VAR_7, &VAR_8, "InitialViewPitchDegrees"))
        VAR_4->pose.pitch = VAR_8;

    if (FUNC_1(VAR_7, &VAR_8, "InitialViewRollDegrees"))
        VAR_4->pose.roll = VAR_8;

    if (FUNC_1(VAR_7, &VAR_8, "InitialHorizontalFOVDegrees"))
        VAR_4->pose.fov = VAR_8;

    FUNC_0(VAR_7);
}
