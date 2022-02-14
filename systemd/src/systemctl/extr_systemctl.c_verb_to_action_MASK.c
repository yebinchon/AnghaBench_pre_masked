
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum action { ____Placeholder_action } action ;
struct TYPE_2__ {int verb; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static enum action FUNC_1(const char *VAR_3) {
        enum action VAR_4;

        for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
                if (FUNC_0(VAR_2[VAR_4].verb, VAR_3))
                        return VAR_4;

        return VAR_0;
}
