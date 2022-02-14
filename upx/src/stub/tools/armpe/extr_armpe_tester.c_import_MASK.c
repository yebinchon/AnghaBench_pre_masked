
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ddirs; } ;
struct TYPE_3__ {scalar_t__ vaddr; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void*,unsigned int) ;
 scalar_t__ FUNC_3 (void*,char*) ;
 void* VAR_5 ;

__attribute__((used)) static int FUNC_4(void)
{
    if (VAR_3.ddirs[VAR_0].vaddr == 0)
        return FUNC_1("no imports?\n");
    FUNC_1("loadlibraryw=%p,getprocaddressa=%p,cachesync=%p\n",
          VAR_4, VAR_2, VAR_1);
    void *VAR_6 = VAR_5 + VAR_3.ddirs[VAR_0].vaddr;
    while (FUNC_0(VAR_6 + 12))
    {
        if (FUNC_3(VAR_5 + FUNC_0(VAR_6 + 12), "coredll.dll") == 0)
        {
            void *VAR_7 = VAR_5 + FUNC_0(VAR_6 + 16);
            FUNC_1("coredll_imports=%p\n", VAR_7);
            void *VAR_8 = VAR_5 + FUNC_0(VAR_6);
            unsigned VAR_9 = 0;
            while (FUNC_0(VAR_8 + VAR_9))
            {
                void *VAR_10 = VAR_5 + FUNC_0(VAR_8 + VAR_9) + 2;
                FUNC_1("name=%s\n", (char*) VAR_10);
                if (FUNC_3(VAR_10, "loadlibraryw") == 0)
                    FUNC_2(VAR_7 + VAR_9, (unsigned) VAR_4);
                else if (FUNC_3(VAR_10, "getprocaddressa") == 0)
                    FUNC_2(VAR_7 + VAR_9, (unsigned) VAR_2);
                else if (FUNC_3(VAR_10, "cachesync") == 0)
                    FUNC_2(VAR_7 + VAR_9, (unsigned) VAR_1);
                VAR_9 += 4;
            }
            return 0;
        }
        VAR_6 += 20;
    }

    FUNC_1("coredll.dll not found");
    return 1;
}
