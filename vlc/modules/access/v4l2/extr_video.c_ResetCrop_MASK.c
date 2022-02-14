
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct v4l2_cropcap {int c; int defrect; int type; } ;
struct v4l2_crop {int c; int defrect; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 (int,int ,struct v4l2_cropcap*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4 (vlc_object_t *VAR_4, int VAR_5)
{
    struct v4l2_cropcap VAR_6 = { .type = VAR_0 };



    if (FUNC_2 (VAR_5, VAR_1, &VAR_6) < 0)
    {
        FUNC_0 (VAR_4, "cannot get cropping properties: %s",
                 FUNC_3(VAR_3));
        return 0;
    }


    struct v4l2_crop VAR_7 = {
        .type = VAR_0,
        .c = VAR_6.defrect,
    };

    if (FUNC_2 (VAR_5, VAR_2, &VAR_7) < 0)
    {
        FUNC_1 (VAR_4, "cannot reset cropping limits: %s",
                  FUNC_3(VAR_3));
        return -1;
    }
    return 0;
}
