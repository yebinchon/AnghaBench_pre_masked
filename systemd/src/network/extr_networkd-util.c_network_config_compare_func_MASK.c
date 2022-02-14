
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line; int filename; } ;
typedef TYPE_1__ NetworkConfigSection ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const NetworkConfigSection *VAR_0, const NetworkConfigSection *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_1(VAR_0->filename, VAR_1->filename);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_0(VAR_0->line, VAR_1->line);
}
