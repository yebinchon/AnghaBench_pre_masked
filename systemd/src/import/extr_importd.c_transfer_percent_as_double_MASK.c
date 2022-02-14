
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int progress_percent; } ;
typedef TYPE_1__ Transfer ;


 double VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static double FUNC_1(Transfer *VAR_1) {
        FUNC_0(VAR_1);

        if (VAR_1->progress_percent == (unsigned) -1)
                return -VAR_0;

        return (double) VAR_1->progress_percent / 100.0;
}
