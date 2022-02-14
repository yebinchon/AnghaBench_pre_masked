
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int st_size; } ;
struct TYPE_9__ {int properties; int f; TYPE_1__ st; scalar_t__ map; } ;
typedef TYPE_2__ sd_hwdb ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static sd_hwdb *FUNC_5(sd_hwdb *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->map)
                FUNC_2((void *)VAR_0->map, VAR_0->st.st_size);
        FUNC_4(VAR_0->f);
        FUNC_3(VAR_0->properties);
        return FUNC_1(VAR_0);
}
