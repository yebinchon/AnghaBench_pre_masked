
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int form_info ;
struct TYPE_4__ {char* type_name; int object_size; int class_size; scalar_t__ object_init_func; scalar_t__ class_init_func; } ;
typedef TYPE_1__ GtkTypeInfo ;
typedef scalar_t__ GtkType ;
typedef scalar_t__ GtkObjectInitFunc ;
typedef int GtkFormClass ;
typedef int GtkForm ;
typedef scalar_t__ GtkClassInitFunc ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

GtkType
FUNC_2(void)
{
    static GtkType VAR_3 = 0;

    if (!VAR_3)
    {
 GtkTypeInfo VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type_name = "GtkForm";
 VAR_4.object_size = sizeof(GtkForm);
 VAR_4.class_size = sizeof(GtkFormClass);
 VAR_4.class_init_func = (GtkClassInitFunc)VAR_1;
 VAR_4.object_init_func = (GtkObjectInitFunc)VAR_2;

 VAR_3 = FUNC_0(VAR_0, &VAR_4);
    }
    return VAR_3;
}
