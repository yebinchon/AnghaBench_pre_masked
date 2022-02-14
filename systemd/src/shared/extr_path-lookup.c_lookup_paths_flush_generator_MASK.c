
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ temporary_dir; scalar_t__ generator_late; scalar_t__ generator_early; scalar_t__ generator; } ;
typedef TYPE_1__ LookupPaths ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,int) ;

void FUNC_2(LookupPaths *VAR_2) {
        FUNC_0(VAR_2);



        if (VAR_2->generator)
                (void) FUNC_1(VAR_2->generator, VAR_1|VAR_0);
        if (VAR_2->generator_early)
                (void) FUNC_1(VAR_2->generator_early, VAR_1|VAR_0);
        if (VAR_2->generator_late)
                (void) FUNC_1(VAR_2->generator_late, VAR_1|VAR_0);

        if (VAR_2->temporary_dir)
                (void) FUNC_1(VAR_2->temporary_dir, VAR_1|VAR_0);
}
