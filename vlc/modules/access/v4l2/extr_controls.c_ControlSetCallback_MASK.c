
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int psz_string; int i_int; int b_bool; } ;
typedef TYPE_1__ vlc_value_t ;
struct TYPE_9__ {int type; } ;
typedef TYPE_2__ vlc_v4l2_ctrl_t ;
typedef int vlc_object_t ;


 int FUNC_0 (TYPE_2__ const*,int ) ;
 int FUNC_1 (TYPE_2__ const*,int ) ;
 int FUNC_2 (TYPE_2__ const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,char const*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6 (vlc_object_t *VAR_3, const char *VAR_4,
                               vlc_value_t VAR_5, vlc_value_t VAR_6, void *VAR_7)
{
    const vlc_v4l2_ctrl_t *VAR_8 = VAR_7;
    int VAR_9;

    switch (VAR_8->type)
    {
        case 132:
        case 129:
        case 135:
        case 130:
            VAR_9 = FUNC_0 (VAR_8, VAR_6.i_int);
            break;
        case 134:
            VAR_9 = FUNC_0 (VAR_8, VAR_6.b_bool);
            break;
        case 133:
            VAR_9 = FUNC_0 (VAR_8, 0);
            break;
        case 131:
            VAR_9 = FUNC_1 (VAR_8, VAR_6.i_int);
            break;
        case 128:
            VAR_9 = FUNC_2 (VAR_8, VAR_6.psz_string);
            break;
        default:
            FUNC_4 ();
    }

    if (VAR_9)
    {
        FUNC_3 (VAR_3, "cannot set control %s: %s", VAR_4, FUNC_5(VAR_2));
        return VAR_0;
    }
    (void) VAR_5;
    return VAR_1;
}
