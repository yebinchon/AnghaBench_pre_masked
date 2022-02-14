
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ refs; struct TYPE_5__* next; } ;
typedef TYPE_1__ vdp_instance_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const*,int,TYPE_1__*) ;

__attribute__((used)) static vdp_instance_t *FUNC_2(const char *VAR_2, int VAR_3)
{
    vdp_instance_t *VAR_4 = ((void*)0);

    for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
        int VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
        if (VAR_5 == 0)
        {
            FUNC_0(VAR_4->refs < VAR_0);
            VAR_4->refs++;
            break;
        }
    }
    return VAR_4;
}
