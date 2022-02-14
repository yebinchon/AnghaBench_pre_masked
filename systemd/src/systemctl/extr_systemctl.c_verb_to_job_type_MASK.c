
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* job_type; int verb; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_1) {
       size_t VAR_2;

       for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
                if (FUNC_1(VAR_0[VAR_2].verb, VAR_1))
                        return VAR_0[VAR_2].job_type;

       return "start";
}
