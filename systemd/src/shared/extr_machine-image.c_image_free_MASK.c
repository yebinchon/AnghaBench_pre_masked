
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int os_release; int machine_info; int hostname; int path; int name; } ;
typedef TYPE_1__ Image ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static Image *FUNC_4(Image *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0->name);
        FUNC_1(VAR_0->path);

        FUNC_1(VAR_0->hostname);
        FUNC_3(VAR_0->machine_info);
        FUNC_3(VAR_0->os_release);

        return FUNC_2(VAR_0);
}
