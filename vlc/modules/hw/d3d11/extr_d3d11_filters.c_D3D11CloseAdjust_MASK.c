
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_9__ {int d3d_dev; int d3d_proc; TYPE_1__* out; scalar_t__* procOutput; scalar_t__* procInput; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_7__ {int texture; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,char*,int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(vlc_object_t *VAR_2)
{
    filter_t *VAR_3 = (filter_t *)VAR_2;
    filter_sys_t *VAR_4 = VAR_3->p_sys;

    FUNC_6( VAR_3, "contrast", VAR_0, VAR_4 );
    FUNC_6( VAR_3, "brightness", VAR_0, VAR_4 );
    FUNC_6( VAR_3, "hue", VAR_0, VAR_4 );
    FUNC_6( VAR_3, "saturation", VAR_0, VAR_4 );
    FUNC_6( VAR_3, "gamma", VAR_0, VAR_4 );
    FUNC_6( VAR_3, "brightness-threshold",
                                             VAR_0, VAR_4 );

    for (int VAR_5=0; VAR_5<VAR_1; VAR_5++)
    {
        if (VAR_4->procInput[VAR_5])
            FUNC_3(VAR_4->procInput[VAR_5]);
        if (VAR_4->procOutput[VAR_5])
            FUNC_4(VAR_4->procOutput[VAR_5]);
    }
    FUNC_2(VAR_4->out[0].texture);
    FUNC_2(VAR_4->out[1].texture);
    FUNC_1( &VAR_4->d3d_proc );
    FUNC_0(&VAR_4->d3d_dev);

    FUNC_5(VAR_4);
}
